/*
 * XREFs of HvpViewMapReleaseChargesForPinnedPages @ 0x1406A083C
 * Callers:
 *     HvpViewMapUnpinForFileOffset @ 0x1401E53E8 (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140006508 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall HvpViewMapReleaseChargesForPinnedPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = MmReleaseResourceCharge(a2, 3, 1u);
  *(_DWORD *)(a1 + 32) -= a2;
  return result;
}
