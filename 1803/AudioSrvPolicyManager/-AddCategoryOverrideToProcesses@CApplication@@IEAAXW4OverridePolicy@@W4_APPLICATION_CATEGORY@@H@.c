/*
 * XREFs of ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x1800118B0
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800116DC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180012C48 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
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
    if ( !v9[118] && (a4 || !v9[131]) && v9[130] != a2 )
    {
      v9[130] = a2;
      v9[131] = 1;
      v9[132] = a3;
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
