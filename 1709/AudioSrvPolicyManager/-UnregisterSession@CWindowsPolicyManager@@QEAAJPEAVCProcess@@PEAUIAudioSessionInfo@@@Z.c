/*
 * XREFs of ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180005C04
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000F1F0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000A41C (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000F53C (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012D98 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::UnregisterSession(
        CWindowsPolicyManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  struct CWindowsPolicyManager *v5; // rsi
  CApplicationManager *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v5 = g_PolicyManager;
  (*(void (__fastcall **)(struct CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 256LL))(g_PolicyManager);
  v6 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CProcess::RemoveSession(a2, a3);
  CApplicationManager::Unregister(v6, a2);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  v7 = *((_QWORD *)v5 + 6);
  lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0LL;
  if ( *(_QWORD *)(v7 + 80) )
  {
    while ( a3 != **(struct IAudioSessionInfo ***)(*(_QWORD *)(v7 + 72) + 8 * v8) )
    {
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(v7 + 80) )
        goto LABEL_8;
    }
    ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt();
  }
LABEL_8:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  (*(void (__fastcall **)(struct CWindowsPolicyManager *))(*(_QWORD *)v5 + 264LL))(v5);
  return 0LL;
}
