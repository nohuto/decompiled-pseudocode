/*
 * XREFs of _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800C0D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x180075A10 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x180075A64 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180075D18 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_(__int64 a1)
{
  char IsActive; // al
  struct _RTL_CRITICAL_SECTION *v2; // r8
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  signed int v5; // eax

  IsActive = CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)(a1 + 16) + 136LL));
  v3 = v2 + 1;
  if ( IsActive )
  {
    v5 = CMmcssTask::Apply(v3, 1);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x111u);
  }
  else
  {
    CMmcssTask::Revert(v3);
  }
  return 0LL;
}
