/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x18018DDAC
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180120A88 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18026EEA8 )
  {
    if ( *(_DWORD *)qword_18026EEA8 == 1 && !dword_18026EEC8 )
    {
      ReleaseInterface<CDisplaySet const>(&qword_18026EEA8);
LABEL_7:
      ReleaseInterface<CRemoteApplicationWindow>((__int64 *)&qword_18026EEB0);
    }
  }
  else if ( qword_18026EEB0 && !dword_18026EEC8 )
  {
    goto LABEL_7;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
