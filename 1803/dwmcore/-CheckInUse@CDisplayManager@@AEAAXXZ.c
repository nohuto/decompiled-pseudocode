/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x1801C5A5C
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180143824 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1802D6428 )
  {
    if ( *(_DWORD *)qword_1802D6428 == 1 && !dword_1802D6448 )
    {
      ReleaseInterface<CDisplaySet const>(&qword_1802D6428);
LABEL_7:
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_1802D6430);
    }
  }
  else if ( qword_1802D6430 && !dword_1802D6448 )
  {
    goto LABEL_7;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
