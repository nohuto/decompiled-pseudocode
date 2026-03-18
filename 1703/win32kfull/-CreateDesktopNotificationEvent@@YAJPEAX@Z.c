/*
 * XREFs of ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C0014300
 * Callers:
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00127D4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateDesktopNotificationEvent(void *a1)
{
  NTSTATUS result; // eax
  wchar_t *v3; // rdx
  NTSTATUS v4; // ebx
  void *DirectoryHandle; // [rsp+40h] [rbp-C0h] BYREF
  void *EventHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  if ( gbRemoteSession )
  {
    result = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%ld\\BaseNamedObjects", gSessionId);
    if ( result < 0 )
      return result;
    v3 = pszDest;
  }
  else
  {
    v3 = L"\\BaseNamedObjects";
  }
  RtlInitUnicodeString(&DestinationString, v3);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WinSta0_DesktopSwitch");
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.SecurityDescriptor = a1;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 640;
    v4 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    ZwClose(DirectoryHandle);
    if ( v4 >= 0 )
    {
      v4 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      gpEventSwitchDesktop = Object;
      if ( v4 >= 0 )
      {
        KeAttachProcess(gpepCSRSS);
        v4 = ObOpenObjectByPointer(gpEventSwitchDesktop, 0, 0LL, 0x1F0003u, 0LL, 0, &ghEventSwitchDesktop);
        KeDetachProcess();
      }
      ZwClose(EventHandle);
    }
  }
  return v4;
}
