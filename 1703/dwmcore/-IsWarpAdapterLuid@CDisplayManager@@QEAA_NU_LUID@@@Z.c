/*
 * XREFs of ?IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z @ 0x18007EB98
 * Callers:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800B79F0 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180046560 (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

char __fastcall CDisplayManager::IsWarpAdapterLuid(CDisplayManager *this, struct _LUID a2)
{
  char IsWarpAdapterLuid; // di
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = &g_DisplayManager;
  IsWarpAdapterLuid = 0;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18023E530 )
    IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(qword_18023E530, a2);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  return IsWarpAdapterLuid;
}
