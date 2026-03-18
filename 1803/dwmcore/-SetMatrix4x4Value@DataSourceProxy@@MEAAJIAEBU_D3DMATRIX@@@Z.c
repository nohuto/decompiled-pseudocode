/*
 * XREFs of ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x18016B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016A550 (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSIO.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18016B244 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x18016B5CC (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetMatrix4x4Value(DataSourceProxy *this, int a2, const struct _D3DMATRIX *a3)
{
  int v5; // eax

  v5 = DataSourcePropertySet::SetProperty<D2DMatrix>((_QWORD *)this + 7, a2);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
