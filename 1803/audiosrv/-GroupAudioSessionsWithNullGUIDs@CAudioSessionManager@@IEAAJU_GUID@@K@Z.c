/*
 * XREFs of ?GroupAudioSessionsWithNullGUIDs@CAudioSessionManager@@IEAAJU_GUID@@K@Z @ 0x180004A04
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800052B4 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsSystemSoundsSession@CAudioSession@@UEAAHXZ @ 0x1800354B0 (-IsSystemSoundsSession@CAudioSession@@UEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionManager::GroupAudioSessionsWithNullGUIDs(
        CAudioSessionManager *this,
        struct _GUID *a2,
        int a3)
{
  int v3; // edi
  char *v4; // rsi
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(CAudioSession *__hidden); // rax
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 StartPosition; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v4 = (char *)this + 64;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(v4);
  while ( StartPosition )
  {
    v7 = *(_QWORD **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                       v4,
                       &StartPosition);
    v12 = 0;
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(CAudioSession *__hidden))(v7[3] + 24LL);
      if ( !(v8 == CAudioSession::IsSystemSoundsSession
           ? CAudioSession::IsSystemSoundsSession((CAudioSession *)(v7 + 3))
           : ((unsigned int (*)(void))v8)()) )
      {
        v10 = v7[85] - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( !v10 )
          v10 = v7[86] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        if ( !v10 )
        {
          v3 = (*(__int64 (__fastcall **)(_QWORD *, int *))(*v7 + 128LL))(v7, &v12);
          if ( v3 >= 0 && a3 == v12 )
            (*(void (__fastcall **)(_QWORD *, struct _GUID *, _QWORD))(*v7 + 176LL))(v7, a2, 0LL);
        }
      }
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v3;
}
