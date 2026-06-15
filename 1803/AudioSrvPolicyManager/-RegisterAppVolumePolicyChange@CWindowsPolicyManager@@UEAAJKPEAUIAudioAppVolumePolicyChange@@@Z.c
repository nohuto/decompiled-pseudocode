/*
 * XREFs of ?RegisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18000A030
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x1800132C4 (-RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::RegisterAppVolumePolicyChange(
        CWindowsPolicyManager *this,
        int a2,
        struct IAudioAppVolumePolicyChange *a3)
{
  CApplicationManager *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  _QWORD *v7; // rdx
  CApplication *v8; // rsi
  CApplication *v9; // rcx
  int v10; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION v14; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = g_ApplicationManager;
  v15 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v14 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v14);
  lpCriticalSection = v6;
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = (_QWORD *)*((_QWORD *)v5 + 9);
  v8 = 0LL;
  while ( v7 && !v8 )
  {
    v9 = (CApplication *)v7[2];
    v7 = (_QWORD *)*v7;
    if ( *((_DWORD *)v9 + 4) == a2 )
      v8 = v9;
  }
  v10 = -2147023728;
  if ( v8 )
    v10 = 0;
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v10 >= 0 )
    v10 = CApplication::RegisterAppVolumePolicyChange(v8, a3);
  if ( v15 )
    LeaveCriticalSection(v14);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return (unsigned int)v10;
}
