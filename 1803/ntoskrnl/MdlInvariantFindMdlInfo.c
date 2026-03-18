/*
 * XREFs of MdlInvariantFindMdlInfo @ 0x1402AA1B4
 * Callers:
 *     MdlInvariantPostDriverCompletion @ 0x1402AA2AC (MdlInvariantPostDriverCompletion.c)
 *     MdlInvariantPostProcessing1 @ 0x1402AA340 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1402AA534 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MdlInvariantFindMdlInfo(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r9
  _QWORD *result; // rax

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
    result = (_QWORD *)(v6 + 32LL * v5);
    if ( *result )
    {
      if ( *result == a2 )
        break;
    }
    if ( ++v5 >= v4 )
      return 0LL;
  }
  return result;
}
