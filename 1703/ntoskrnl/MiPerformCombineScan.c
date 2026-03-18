/*
 * XREFs of MiPerformCombineScan @ 0x14008B370
 * Callers:
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiComputeHash64 @ 0x14008B400 (MiComputeHash64.c)
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
