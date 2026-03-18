/*
 * XREFs of ?CitpDPProcessDuration@@YAIIIN@Z @ 0x1C01543FC
 * Callers:
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0153E20 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpDPGetDurationBucket@@YAIII@Z @ 0x1C015439C (-CitpDPGetDurationBucket@@YAIII@Z.c)
 *     ?CitpDPRandomizeValueToBit@@YAEIIN@Z @ 0x1C0154488 (-CitpDPRandomizeValueToBit@@YAEIIN@Z.c)
 */

__int64 __fastcall CitpDPProcessDuration(unsigned int a1, unsigned int a2, double a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  unsigned int i; // esi
  int v10; // edx

  v5 = CitpDPRandomizeValueToBit(a1, a2, a3);
  if ( (unk_1C018E8B0 & 2) != 0 )
  {
    v6 = CitpDPGetDurationBucket(a1, a2);
    v7 = 0;
    v8 = v6;
    for ( i = 0; i < 0x1F; ++i )
    {
      v10 = CitpDPRandomizeValueToBit(i == v8, 2u, a3) << i;
      v7 |= v10;
    }
    v5 |= 2 * v7;
  }
  return v5;
}
