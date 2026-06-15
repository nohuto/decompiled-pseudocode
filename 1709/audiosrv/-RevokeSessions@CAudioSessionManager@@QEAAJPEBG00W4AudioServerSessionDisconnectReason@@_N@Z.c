/*
 * XREFs of ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007A9FC
 * Callers:
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x18007C304 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18001490C (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z @ 0x18007361C (-MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007A194 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::RevokeSessions(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 *v7; // rsi
  int v8; // edi
  __int64 v9; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-28h]
  __int64 StartPosition; // [rsp+70h] [rbp+8h] BYREF

  v7 = (__int64 *)(a1 + 64);
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v7);
  while ( StartPosition )
  {
    v10 = *(struct _RTL_CRITICAL_SECTION **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                              (__int64)v7,
                                              &StartPosition);
    if ( v10 )
    {
      if ( (unsigned int)CAudioSession::MatchesParameters(v10, v9, a2, a3, a4) )
      {
        LOBYTE(v11) = 1;
        v12 = (*((__int64 (__fastcall **)(HANDLE *, _QWORD, __int64))v10->OwningThread + 4))(
                &v10->OwningThread,
                0LL,
                v11);
        if ( v12 < 0 && v8 >= 0 )
          v8 = v12;
      }
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
