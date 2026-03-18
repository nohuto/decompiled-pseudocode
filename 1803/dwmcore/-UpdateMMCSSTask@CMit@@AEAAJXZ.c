/*
 * XREFs of ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x18001DE88
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x18001DECC (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18001E740 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18001E780 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18001EA60 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::UpdateMMCSSTask(CMit *this)
{
  unsigned int v1; // ebx
  CMmcssTask *v2; // r8
  int v4; // eax

  v1 = 0;
  if ( CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)this + 160LL)) )
  {
    v4 = CMmcssTask::Apply(v2, 1);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x184u);
  }
  else
  {
    CMmcssTask::Revert(v2);
  }
  return v1;
}
