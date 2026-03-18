/*
 * XREFs of _ALIGN_MEM @ 0x1C00367DC
 * Callers:
 *     BuildShrinkAAInfo @ 0x1C0001B40 (BuildShrinkAAInfo.c)
 *     SetupAAHeader @ 0x1C0035E8C (SetupAAHeader.c)
 *     BuildExpandAAInfo @ 0x1C0036860 (BuildExpandAAInfo.c)
 *     BuildBltAAInfo @ 0x1C00E6640 (BuildBltAAInfo.c)
 *     BuildTileAAInfo @ 0x1C0241350 (BuildTileAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ALIGN_MEM(int *a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 result; // rax

  v2 = -1;
  v3 = a2 + 8;
  if ( a2 + 8 >= a2 )
    v2 = a2 + 8;
  *a1 = v2;
  result = v3 < a2 ? 0x80070216 : 0;
  if ( v3 >= a2 )
    *a1 &= 0xFFFFFFF8;
  return result;
}
