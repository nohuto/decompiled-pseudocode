/*
 * XREFs of ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800759CC
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x180119940 (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x180075A10 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x180075A64 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180075D18 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::UpdateMMCSSTask(CMit *this)
{
  unsigned int v1; // ebx
  bool IsActive; // al
  __int64 v3; // r8
  CMmcssTask *v4; // rcx
  int v6; // eax

  v1 = 0;
  IsActive = CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)this + 136LL));
  v4 = (CMmcssTask *)(v3 + 32);
  if ( IsActive )
  {
    v6 = CMmcssTask::Apply(v4, 1);
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x18Du);
  }
  else
  {
    CMmcssTask::Revert(v4);
  }
  return v1;
}
