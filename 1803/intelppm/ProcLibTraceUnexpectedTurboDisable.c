/*
 * XREFs of ProcLibTraceUnexpectedTurboDisable @ 0x1C0007A28
 * Callers:
 *     SetGV3PerfState @ 0x1C00018E0 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00072E0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00073C0 (SetTurboDisablePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0007A9C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007AC4 (_TlgWrite.c)
 */

void __fastcall ProcLibTraceUnexpectedTurboDisable(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0015060 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
      TlgWrite(v1, &unk_1C0011224, v2, v3, 2u, &pData);
  }
}
