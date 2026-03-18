/*
 * XREFs of MiPerformCombineScan @ 0x14009EED0
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140040950 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiComputeHash64 @ 0x14009EF60 (MiComputeHash64.c)
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v5; // r11
  unsigned int v6; // r8d
  __int64 v7; // [rsp+20h] [rbp-18h]

  v3 = (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16;
  if ( (*(_DWORD *)(a1 + 52) & 4) != 0 && (unsigned __int64)(*(_QWORD *)v3 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  v7 = MiComputeHash64(v3);
  *v5 = v7;
  return v6;
}
