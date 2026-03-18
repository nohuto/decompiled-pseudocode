/*
 * XREFs of _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800CBE30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800B6528 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800B657C (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800B6880 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_(__int64 a1)
{
  char IsActive; // al
  struct _RTL_CRITICAL_SECTION *v2; // r8
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  int v5; // eax

  IsActive = CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)(a1 + 16) + 160LL));
  v3 = v2 + 1;
  if ( IsActive )
  {
    v5 = CMmcssTask::Apply(v3, 1);
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x115u);
  }
  else
  {
    CMmcssTask::Revert(v3);
  }
  return 0LL;
}
