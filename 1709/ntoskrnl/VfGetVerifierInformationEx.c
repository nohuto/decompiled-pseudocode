/*
 * XREFs of VfGetVerifierInformationEx @ 0x1407CA488
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall VfGetVerifierInformationEx(_DWORD *a1)
{
  memset(a1, 0, 0x28uLL);
  *a1 = VfVerifyMode;
  a1[1] = dword_14036A138;
  a1[6] = 1000 * VfWdCancelTimeoutTicks;
  a1[7] = XdvEnabled;
  return 0LL;
}
