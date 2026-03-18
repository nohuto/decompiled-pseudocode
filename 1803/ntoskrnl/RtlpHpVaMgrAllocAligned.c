/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x14029668C
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140297470 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402975D8 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r11d
  int v4; // r9d
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  v6 = 0LL;
  v4 = (((v3 >> 1) & 3) < 2 ? 0x2000 : 536883200) | 0x40000;
  if ( (v3 & 8) == 0 )
    v4 = ((v3 >> 1) & 3) < 2 ? 0x2000 : 536883200;
  RtlpHpEnvAllocVA((unsigned int)&v6, a2, a3, v4, 4, **(_DWORD **)(a1 + 24), (v3 >> 1) & 3);
  return v6;
}
