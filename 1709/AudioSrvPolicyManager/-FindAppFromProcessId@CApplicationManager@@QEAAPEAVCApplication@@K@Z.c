/*
 * XREFs of ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x1800151E0
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x18001CFFC (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CApplication *__fastcall CApplicationManager::FindAppFromProcessId(CApplicationManager *this, int a2)
{
  CApplicationManager *v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  BOOL v7; // edi
  _QWORD *v8; // rcx
  __int64 v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v13; // [rsp+38h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-18h]

  v3 = g_ApplicationManager;
  v13 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&v13);
  v4 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    lpCriticalSection = (LPCRITICAL_SECTION)(v6 + 32);
    v12 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v7 = 0;
    v8 = *(_QWORD **)(v6 + 72);
    while ( v8 && !v7 )
    {
      v9 = v8[2];
      v8 = (_QWORD *)*v8;
      v7 = a2 == *(_DWORD *)(v9 + 216);
    }
    if ( v12 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v12 = 0;
    }
    if ( v7 )
    {
      v4 = v6;
      break;
    }
  }
  if ( v14 )
    LeaveCriticalSection(v13);
  return (struct CApplication *)v4;
}
