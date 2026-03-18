/*
 * XREFs of MdlInvariantFindMdlInfo @ 0x140250838
 * Callers:
 *     MdlInvariantPostDriverCompletion @ 0x140250930 (MdlInvariantPostDriverCompletion.c)
 *     MdlInvariantPostProcessing1 @ 0x1402509C4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140250BB4 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MdlInvariantFindMdlInfo(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r8
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8

  v2 = *(unsigned int **)(a1 + 224);
  if ( !v2 )
    return 0LL;
  v4 = *v2;
  v5 = 0;
  if ( !*v2 )
    return 0LL;
  v6 = *((_QWORD *)v2 + 1);
  while ( 1 )
  {
    v7 = 32LL * v5;
    v8 = *(_QWORD *)(v7 + v6);
    if ( v8 )
    {
      if ( v8 == a2 )
        break;
    }
    if ( ++v5 >= v4 )
      return 0LL;
  }
  return v7 + v6;
}
