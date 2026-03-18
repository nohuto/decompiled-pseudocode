/*
 * XREFs of PipHardwareConfigActivateService @ 0x1405F2938
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x1405F7868 (PipOpenServiceEnumKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v1 = PipOpenServiceEnumKeys(&DestinationString, 0x10000LL, &Handle, 0LL, 0);
    if ( v1 >= 0 )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && (v2 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v3 = *(_QWORD *)(v2 + 8);
      else
        v3 = 0LL;
      v1 = RegRtlDeleteTreeInternal(Handle, L"StartOverride", v3, 0LL);
      if ( v1 == -1073741772 )
        v1 = 0;
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
