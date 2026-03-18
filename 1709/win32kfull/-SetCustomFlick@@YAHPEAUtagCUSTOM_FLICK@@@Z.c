/*
 * XREFs of ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F2FB0
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C01F3548 (WritePointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C004F328 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C01F2E7C (-GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 */

_BOOL8 __fastcall SetCustomFlick(struct tagCUSTOM_FLICK *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+10h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  KeyHandle = 0LL;
  v2 = -1073741595;
  if ( GetCustomFlickPath((GUID *)a1, &Destination) )
  {
    Destination.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
    v2 = OpenDeviceCfgKey(Destination.MaximumLength, Destination.Buffer, 0x20006u, &KeyHandle, 1);
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"ModifierKeys");
      v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + 16, 4u);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"KeyCode");
        v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + 20, 4u);
        if ( v2 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"FriendlyName");
          v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, (char *)a1 + 28, *((_DWORD *)a1 + 6));
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    Win32FreePool(Destination.Buffer, v3, v4);
  }
  return v2 >= 0;
}
