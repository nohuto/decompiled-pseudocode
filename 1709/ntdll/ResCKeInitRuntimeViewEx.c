/*
 * XREFs of ResCKeInitRuntimeViewEx @ 0x18001AEC4
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     ResCOpenRegistryKey @ 0x18001A938 (ResCOpenRegistryKey.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     ResCKeOpenRuntimeView @ 0x18001AFA0 (ResCKeOpenRuntimeView.c)
 *     _ResQueryValueKey @ 0x18001B4B4 (_ResQueryValueKey.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ResCKeCreateRuntimeView @ 0x18010BBAC (ResCKeCreateRuntimeView.c)
 */

__int64 ResCKeInitRuntimeViewEx()
{
  __int64 v0; // rsi
  NTSTATUS v1; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  int v5; // [rsp+88h] [rbp+38h] BYREF
  int v6; // [rsp+90h] [rbp+40h]
  ULONG v7; // [rsp+98h] [rbp+48h] BYREF

  v0 = ResCKeOpenRuntimeView();
  if ( !v0 )
  {
    Handle = 0LL;
    v5 = 0;
    v6 = 0;
    v7 = 4;
    if ( (unsigned int)ResCOpenRegistryKey(&Handle, &v5, L"System\\CurrentControlSet\\Control\\CMF\\Config") )
    {
      if ( v5 != 1 && RtlInitUnicodeStringEx(&DestinationString, L"SYSTEM") >= 0 )
        ResQueryValueKey(Handle, &DestinationString, (ULONG)&v7);
      if ( Handle )
      {
        v1 = NtClose(Handle);
        RtlNtStatusToDosError(v1);
      }
    }
  }
  return v0;
}
