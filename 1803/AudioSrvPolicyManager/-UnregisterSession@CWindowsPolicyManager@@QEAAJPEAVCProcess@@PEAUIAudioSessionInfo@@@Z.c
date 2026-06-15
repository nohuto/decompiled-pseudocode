/*
 * XREFs of ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800099B4
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180014BA0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000F0F8 (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180014F84 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::UnregisterSession(
        CWindowsPolicyManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CWindowsPolicyManager *v5; // rsi
  CApplicationManager *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  v5 = g_PolicyManager;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CProcess::RemoveSession(a2, a3);
  CApplicationManager::Unregister(v6, a2);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  v7 = *((_QWORD *)v5 + 6);
  lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0LL;
  if ( *(_QWORD *)(v7 + 80) )
  {
    v9 = (_QWORD *)(v7 + 72);
    while ( a3 != **(struct IAudioSessionInfo ***)(*v9 + 8 * v8) )
    {
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(v7 + 80) )
        goto LABEL_7;
    }
    ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt(v9);
  }
LABEL_7:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return 0LL;
}
