/*
 * XREFs of ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x1801814F4
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18003AEC4 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180181548 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18018BA80 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x18018C790 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CBaseExpression::GetDebugInfo(CBaseExpression *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 35);
  if ( *(int *)(v1 + 4) >= 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x1000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(const unsigned __int16 **)(i + 4);
}
