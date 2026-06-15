/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800B2144
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800B1D94 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x180005274 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        int a2,
        const struct _GUID *a3,
        struct CAudioSession **a4)
{
  struct CAudioSession *v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 StartPosition; // r9
  __int64 v11; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v5 = 0LL;
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition((__int64 *)this + 8);
  if ( StartPosition )
  {
    do
    {
      v5 = *(struct CAudioSession **)(StartPosition + 80);
      if ( v5 && *((_DWORD *)v5 + 179) == a2 )
      {
        v11 = *((_QWORD *)v5 + 85) - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
        if ( !v11 )
          v11 = *((_QWORD *)v5 + 86) - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
        if ( !v11 )
          break;
      }
      v5 = 0LL;
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
                        (__int64)this + 64,
                        StartPosition);
    }
    while ( StartPosition );
    if ( v5 )
      (*(void (__fastcall **)(struct CAudioSession *, __int64, __int64, __int64))(*(_QWORD *)v5 + 8LL))(
        v5,
        v8,
        v9,
        StartPosition);
  }
  *a4 = v5;
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v5 == 0LL ? 0x80070002 : 0;
}
