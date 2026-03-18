/*
 * XREFs of VfGetVerifierInformationEx @ 0x1408379E8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall VfGetVerifierInformationEx(_DWORD *a1)
{
  memset(a1, 0, 0x28uLL);
  *a1 = VfVerifyMode;
  a1[1] = dword_1403AD1D8;
  a1[6] = 1000 * VfWdCancelTimeoutTicks;
  a1[7] = XdvEnabled;
  return 0LL;
}
