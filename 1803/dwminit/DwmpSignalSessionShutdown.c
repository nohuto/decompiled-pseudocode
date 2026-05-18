/*
 * XREFs of DwmpSignalSessionShutdown @ 0x18000413C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000272C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B20 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001210 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x1800039E0 (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 */

__int64 DwmpSignalSessionShutdown()
{
  int v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  DWORD v3; // edx
  DWORD v4; // ecx
  void *EventHandle; // [rsp+20h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-71h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-61h] BYREF
  WCHAR SourceString[56]; // [rsp+70h] [rbp-29h] BYREF

  EventHandle = 0LL;
  v0 = StringCchPrintfW(
         SourceString,
         53LL,
         L"\\Sessions\\%d\\Windows\\DwmCatastrophicShutdown",
         NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 < 0 )
  {
    v3 = 104;
    v4 = v0;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = NtOpenEvent(&EventHandle, 2u, &ObjectAttributes);
    if ( v2 >= 0 )
    {
      v2 = NtSetEvent(EventHandle, 0LL);
      if ( v2 >= 0 )
        goto LABEL_9;
      v3 = 118;
    }
    else
    {
      v3 = 116;
    }
    v1 = v2 | 0x10000000;
    v4 = v2 | 0x10000000;
  }
  DoStackCapture(v4, v3);
LABEL_9:
  if ( EventHandle )
    NtClose(EventHandle);
  return v1;
}
