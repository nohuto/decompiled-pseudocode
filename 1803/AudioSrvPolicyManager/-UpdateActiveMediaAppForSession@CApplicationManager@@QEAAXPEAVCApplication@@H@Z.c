/*
 * XREFs of ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001DE14
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011654 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x18001DF40 (-OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E348 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012918 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180012AF8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002619C (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180026260 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::UpdateActiveMediaAppForSession(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3)
{
  unsigned int v5; // r14d
  int v6; // edi
  BOOL v7; // ebp
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  v12 = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&v12);
  v5 = *((_DWORD *)a2 + 43);
  v6 = 1;
  v7 = (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 0) && *((_DWORD *)a2 + 42)
    || (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
    && (unsigned int)CApplication::IsBackgroundAudioCapable(a2);
  if ( !a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
    v11 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v8 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v8 )
    {
      v9 = v8[2];
      v8 = (_QWORD *)*v8;
      if ( !*(_DWORD *)(v9 + 472) && *(_DWORD *)(v9 + 532) )
      {
        a3 = 1;
        break;
      }
    }
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
    if ( !a3 )
      v6 = 0;
  }
  if ( !v7 || v6 )
    TsSessionIdRemoveActiveMediaApp(v5, a2);
  else
    TsSessionIdAddActiveMediaApp(v5, a2);
  if ( v13 )
    LeaveCriticalSection(v12);
}
