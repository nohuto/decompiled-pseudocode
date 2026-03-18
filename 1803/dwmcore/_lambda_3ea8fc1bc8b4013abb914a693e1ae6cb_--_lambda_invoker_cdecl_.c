/*
 * XREFs of _lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_ @ 0x1800CA070
 * Callers:
 *     <none>
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18001E740 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18001E780 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18001EA60 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // r8
  int v3; // eax

  if ( CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)(a1 + 16) + 160LL)) )
  {
    v3 = CMmcssTask::Apply(v1, 1);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x115u);
  }
  else
  {
    CMmcssTask::Revert(v1);
  }
  return 0LL;
}
