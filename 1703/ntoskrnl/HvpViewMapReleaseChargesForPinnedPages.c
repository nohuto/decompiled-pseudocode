/*
 * XREFs of HvpViewMapReleaseChargesForPinnedPages @ 0x1406762FC
 * Callers:
 *     HvpViewMapUnpinForFileOffset @ 0x1401E12D0 (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x14005DBF8 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall HvpViewMapReleaseChargesForPinnedPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = MmReleaseResourceCharge(a2, 3LL, 1LL);
  *(_DWORD *)(a1 + 32) -= a2;
  return result;
}
