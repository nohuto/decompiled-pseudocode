/*
 * XREFs of ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18000C924
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000C750 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DBFC (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CApplication::AddCategoryOverrideToProcesses(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v8; // r10
  _DWORD *v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = *(_QWORD **)(a1 + 72);
  while ( v8 )
  {
    v9 = (_DWORD *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( !v9[116] && (a4 || !v9[129]) && v9[128] != a2 )
    {
      v9[128] = a2;
      v9[129] = 1;
      v9[130] = a3;
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
