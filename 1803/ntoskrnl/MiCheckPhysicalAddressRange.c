/*
 * XREFs of MiCheckPhysicalAddressRange @ 0x1402604F4
 * Callers:
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckPhysicalAddressRange(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  _BOOL8 result; // rax
  unsigned __int64 v4; // rdx

  v2 = a1 + a2;
  result = v2 > a1
        && ((v4 = v2 - 1, !KiMtrrMaskBase) || (v4 & 0xFFFFFFFFFFFFF000uLL) <= KiMtrrMaskBase)
        && (KeGetCurrentPrcb()->CpuVendor != 1 || v4 < 0xFD00000000LL || a1 > 0xFFFFFFFFFFLL);
  return result;
}
