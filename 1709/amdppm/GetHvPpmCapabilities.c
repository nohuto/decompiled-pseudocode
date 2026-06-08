/*
 * XREFs of GetHvPpmCapabilities @ 0x1C002D930
 * Callers:
 *     RegisterHvIdleStates @ 0x1C002DA20 (RegisterHvIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C00303D4 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0029830 (GetRegistryDwordValueNoDefault.c)
 */

NTSTATUS __fastcall GetHvPpmCapabilities(bool *a1, bool *a2)
{
  bool v4; // di
  bool v5; // si
  NTSTATUS result; // eax
  int v7; // edi
  bool v8; // bl
  bool v9; // cf
  int v10; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+24h] [rbp-44h] BYREF
  char SystemInformation[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  result = ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL);
  if ( result >= 0 )
  {
    v7 = v13;
    v8 = (v13 & 8) != 0;
    if ( (v13 & 0x400) != 0
      && ((int)GetRegistryDwordValueNoDefault(
                 (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                 (__int64)L"LegacyHvAlgorithm",
                 (__int64)&v10) < 0
       || !v10)
      && (int)HvlQueryActiveHypervisorProcessorCount(&v11) >= 0 )
    {
      v5 = KeQueryActiveProcessorCountEx(0xFFFFu) == v11;
    }
    v9 = (*(_QWORD *)&v7 & 0x20000LL) != 0;
    result = v8;
    v4 = v8;
    if ( v9 )
      v4 = v8;
  }
  if ( a1 )
    *a1 = v4;
  if ( a2 )
    *a2 = v5;
  return result;
}
