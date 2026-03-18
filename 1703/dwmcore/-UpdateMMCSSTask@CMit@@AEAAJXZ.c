/*
 * XREFs of ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800B5BA8
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x1800B5BEC (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800B6528 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800B657C (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800B6880 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMit::UpdateMMCSSTask(CMit *this)
{
  unsigned int v1; // ebx
  bool IsActive; // al
  __int64 v3; // r8
  CMmcssTask *v4; // rcx
  int v6; // eax

  v1 = 0;
  IsActive = CMmcssTask::IsActive((CMmcssTask *)(*(_QWORD *)this + 160LL));
  v4 = (CMmcssTask *)(v3 + 32);
  if ( IsActive )
  {
    v6 = CMmcssTask::Apply(v4, 1);
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x190u);
  }
  else
  {
    CMmcssTask::Revert(v4);
  }
  return v1;
}
