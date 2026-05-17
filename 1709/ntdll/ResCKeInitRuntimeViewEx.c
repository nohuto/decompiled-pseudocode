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
  unsigned int v0; // ebx
  __int64 v1; // rsi
  BOOL v2; // edi
  HANDLE v3; // rcx
  int v4; // eax
  NTSTATUS v5; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v8[24]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+80h] [rbp+30h] BYREF
  int v10; // [rsp+88h] [rbp+38h] BYREF
  int v11; // [rsp+90h] [rbp+40h] BYREF
  int v12; // [rsp+98h] [rbp+48h] BYREF

  v0 = 0;
  v9 = 0;
  v1 = ResCKeOpenRuntimeView();
  if ( !v1 )
  {
    Handle = 0LL;
    v10 = 0;
    v11 = 0;
    v2 = 0;
    v12 = 4;
    if ( !(unsigned int)ResCOpenRegistryKey(&Handle, &v10, L"System\\CurrentControlSet\\Control\\CMF\\Config") )
      goto LABEL_13;
    if ( v10 != 1 && (int)RtlInitUnicodeStringEx(v8, L"SYSTEM") >= 0 )
    {
      v4 = ResQueryValueKey(Handle, v8, &v11, &v9, &v12);
      v0 = v9;
      if ( v4 >= 0 )
        v2 = v11 == 4;
    }
    v3 = Handle;
    if ( Handle )
    {
      v5 = NtClose(Handle);
      RtlNtStatusToDosError(v5);
    }
    if ( !v2 )
LABEL_13:
      v0 = 0;
    if ( (v0 & 1) != 0 )
      return ResCKeCreateRuntimeView(v3, (v0 >> 1) & 1, (v0 >> 2) & 1);
  }
  return v1;
}
