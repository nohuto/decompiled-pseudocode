/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180016B80
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180013EC0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800628EC (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x18007BA94 (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800837A8 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800884A0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009B8E8 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18001490C (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x180031A6C (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800712B8 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x180079238 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x180079290 (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007A194 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18007A8B0 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  char v3; // r15
  unsigned int v4; // esi
  __int64 v5; // rbx
  CAudioDGProcess *v6; // rcx
  int v7; // edi
  __int64 v8; // r14
  __int64 StartPosition; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r12
  __int64 v13; // r8
  _QWORD *NextValue; // rax
  _QWORD *v15; // rbx
  __int64 v16; // r8
  CAudioSession **v17; // rax
  _QWORD *v18; // rax
  ATL::CAtlException *v19; // [rsp+28h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  int v25; // [rsp+58h] [rbp-40h]
  __int64 v26; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+10h]
  char v28; // [rsp+B0h] [rbp+18h]
  _QWORD *v29; // [rsp+B8h] [rbp+20h] BYREF

  v28 = a3;
  v27 = a2;
  v26 = a1;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, v5);
      v6 = WPP_GLOBAL_Control;
    }
    if ( v6 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x40) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v6 + 2), 54LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
  }
  v7 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 24);
  v21 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( v4 == 1 )
  {
    while ( 1 )
    {
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)(v5 + 64));
      if ( !StartPosition )
        break;
      v29 = *(_QWORD **)(StartPosition + 80);
      v12 = v29;
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
        v11,
        StartPosition);
      LOBYTE(v13) = v3;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v12[2] + 32LL))(v12 + 2, v4, v13);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*v12 + 184LL))(v12, v5);
      (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v12 + 184LL))(v12, g_PolicyEventsHandler);
      (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v12 + 184LL))(
        v12,
        g_TelephonyControlEventsHandler);
      try
      {
        ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v22, &v29);
      }
      catch ( ATL::CAtlException *v19 )
      {
        if ( *(_DWORD *)v19 == -1073741571 )
          _o__resetstkoflw();
        v7 = 0;
        v5 = v26;
        v3 = v28;
        v4 = v27;
        continue;
      }
    }
  }
  else
  {
    v8 = v5 + 64;
    v26 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)(v5 + 64));
    while ( v26 )
    {
      NextValue = (_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                              v8,
                              &v26);
      v15 = (_QWORD *)*NextValue;
      if ( *NextValue )
      {
        (*(void (__fastcall **)(_QWORD))(*v15 + 8LL))(*NextValue);
        LOBYTE(v16) = v3;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v15[2] + 32LL))(v15 + 2, v4, v16);
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      }
    }
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  while ( v7 < (int)v23 )
  {
    v17 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v22);
    CAudioSession::ForceExpire(*v17);
    v18 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v22);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 16LL))(*v18);
    ++v7;
  }
  ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(&v22);
  return 0LL;
}
