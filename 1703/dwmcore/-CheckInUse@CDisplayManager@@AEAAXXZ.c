/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180185CA8
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180138A50 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18023E528 )
  {
    if ( *(_DWORD *)qword_18023E528 == 1 && !dword_18023E548 )
    {
      ReleaseInterface<CDisplaySet const>(&qword_18023E528);
LABEL_7:
      ReleaseInterface<ClipPlaneInfoRef>((__int64 *)&qword_18023E530);
    }
  }
  else if ( qword_18023E530 && !dword_18023E548 )
  {
    goto LABEL_7;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
