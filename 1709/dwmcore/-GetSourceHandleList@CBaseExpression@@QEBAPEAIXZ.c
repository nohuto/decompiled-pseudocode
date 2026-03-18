/*
 * XREFs of ?GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ @ 0x180161BE0
 * Callers:
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800A85C4 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x180162AA0 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CBaseExpression::GetSourceHandleList(CBaseExpression *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 33);
  if ( (*(_DWORD *)(v1 + 4) & 0x8000000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x5000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(unsigned int **)(i + 4);
}
