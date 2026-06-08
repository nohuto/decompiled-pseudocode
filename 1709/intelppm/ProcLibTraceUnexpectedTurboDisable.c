/*
 * XREFs of ProcLibTraceUnexpectedTurboDisable @ 0x1C0007690
 * Callers:
 *     SetGV3PerfStateAndTurbo @ 0x1C0003A00 (SetGV3PerfStateAndTurbo.c)
 *     SetGV3PerfState @ 0x1C0006F30 (SetGV3PerfState.c)
 *     SetTurboDisablePolicy @ 0x1C0006FE0 (SetTurboDisablePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C00076F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007720 (_TlgWrite.c)
 */

void __fastcall ProcLibTraceUnexpectedTurboDisable(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0014060 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
      TlgWrite(v1, &unk_1C00101F4, v2, v3, 2u, &pData);
  }
}
