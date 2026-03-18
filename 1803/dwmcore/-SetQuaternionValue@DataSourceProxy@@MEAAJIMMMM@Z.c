/*
 * XREFs of ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x18016BA40
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016A698 (--$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_E.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18016B244 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x18016B5CC (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetQuaternionValue(
        DataSourceProxy *this,
        int a2,
        float a3,
        float a4,
        unsigned int a5,
        float a6)
{
  int v8; // eax
  float v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v10[3] = a6;
  v10[0] = a3;
  *(_QWORD *)&v10[1] = __PAIR64__(a5, LODWORD(a4));
  v8 = DataSourcePropertySet::SetProperty<D2DQuaternion>((_QWORD *)this + 7, a2, v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
