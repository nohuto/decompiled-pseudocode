/*
 * XREFs of MiPerformCombineScan @ 0x1400097B4
 * Callers:
 *     MiCombinePte @ 0x14009F2D0 (MiCombinePte.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiComputeHash64 @ 0x140107500 (MiComputeHash64.c)
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 *v4; // r11
  unsigned int v5; // r8d
  __int64 v6; // [rsp+20h] [rbp-18h]

  v2 = (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16;
  if ( (*(_DWORD *)(a1 + 52) & 4) != 0 && (unsigned __int64)(*(_QWORD *)v2 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  v6 = MiComputeHash64(v2, a2, 1LL);
  *v4 = v6;
  return v5;
}
