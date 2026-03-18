/*
 * XREFs of ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800B6654
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x1800B5FAC (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800B6528 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800B657C (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800B6714 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800B6880 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800B6948 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 */

__int64 __fastcall CMmcssTask::Clone(CMmcssTask *this, const struct DWM_MMTASK **a2)
{
  unsigned int v4; // esi
  char IsActive; // al
  CMmcssTask *v6; // rcx
  char v7; // r8
  char v9; // al
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)this;
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( CMmcssTask::AreEqualMmTask(*((const struct DWM_MMTASK **)this + 5), a2[5]) )
  {
    CMmcssTask::IsActive((CMmcssTask *)a2);
    IsActive = CMmcssTask::IsActive(this);
    if ( v7 != IsActive )
    {
      if ( (unsigned __int8)CMmcssTask::IsActive(v6) )
        CMmcssTask::Apply((CMmcssTask *)a2, 0);
      else
        CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)a2);
    }
  }
  else
  {
    v9 = CMmcssTask::IsActive(this);
    v10 = CMmcssTask::Set((CMmcssTask *)a2, *((const struct DWM_MMTASK **)this + 5), v9);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Au);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v4;
}
