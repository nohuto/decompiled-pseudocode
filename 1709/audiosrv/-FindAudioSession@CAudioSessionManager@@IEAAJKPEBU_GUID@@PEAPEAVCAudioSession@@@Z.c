/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x180079A80
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800796D0 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18001490C (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x180079C34 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        int a2,
        const struct _GUID *a3,
        struct CAudioSession **a4)
{
  struct CAudioSession *v5; // rdi
  __int64 StartPosition; // rcx
  __int64 v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v5 = 0LL;
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
  if ( StartPosition )
  {
    do
    {
      v5 = *(struct CAudioSession **)(StartPosition + 80);
      if ( v5 && *((_DWORD *)v5 + 195) == a2 )
      {
        v9 = *((_QWORD *)v5 + 93) - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
        if ( !v9 )
          v9 = *((_QWORD *)v5 + 94) - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
        if ( !v9 )
          break;
      }
      v5 = 0LL;
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
                        (char *)this + 64,
                        StartPosition);
    }
    while ( StartPosition );
    if ( v5 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *a4 = v5;
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v5 == 0LL ? 0x80070002 : 0;
}
