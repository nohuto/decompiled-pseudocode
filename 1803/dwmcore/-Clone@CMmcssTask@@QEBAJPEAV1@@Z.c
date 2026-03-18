/*
 * XREFs of ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18001E854
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x18001FCFC (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18001E740 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18001E780 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18001E914 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18001EA60 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x18001EB28 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CMmcssTask::Clone(const struct DWM_MMTASK **this, const struct DWM_MMTASK **a2)
{
  unsigned int v4; // esi
  char IsActive; // al
  CMmcssTask *v6; // rcx
  char v7; // r8
  char v9; // al
  int v10; // eax
  CMmcssTask *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (CMmcssTask *)this;
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( CMmcssTask::AreEqualMmTask(this[5], a2[5]) )
  {
    CMmcssTask::IsActive((CMmcssTask *)a2);
    IsActive = CMmcssTask::IsActive((CMmcssTask *)this);
    if ( v7 != IsActive )
    {
      if ( CMmcssTask::IsActive(v6) )
        CMmcssTask::Apply((CMmcssTask *)a2, 0);
      else
        CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)a2);
    }
  }
  else
  {
    v9 = CMmcssTask::IsActive((CMmcssTask *)this);
    v10 = CMmcssTask::Set((CMmcssTask *)a2, this[5], v9);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x7Au);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v4;
}
