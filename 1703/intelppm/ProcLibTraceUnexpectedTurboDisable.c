/*
 * XREFs of ProcLibTraceUnexpectedTurboDisable @ 0x1C0007714
 * Callers:
 *     SetGV3PerfState @ 0x1C0001980 (SetGV3PerfState.c)
 *     SetEfficientTurboDisablePolicy @ 0x1C0001AD0 (SetEfficientTurboDisablePolicy.c)
 *     SetTurboDisablePolicy @ 0x1C0007150 (SetTurboDisablePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0007768 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00077A0 (_TlgWrite.c)
 */

void __fastcall ProcLibTraceUnexpectedTurboDisable(const struct _TlgProvider_t *a1, ULONGLONG a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  UINT32 v5; // [rsp+20h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0013060 > 5 )
  {
    if ( TlgKeywordOn(a1, a2) )
      TlgWrite(v2, &unk_1C000FFB9, v3, v4, v5, &pData);
  }
}
