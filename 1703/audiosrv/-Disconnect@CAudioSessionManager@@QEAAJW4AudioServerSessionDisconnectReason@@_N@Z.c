/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18001E4F0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18008135C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x1800950A0 (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18009E7C0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AC8A4 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180025524 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x18008B968 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x180092B8C (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x180093D34 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180093D64 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180094460 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  char v3; // r15
  unsigned int v4; // r14d
  __int64 v5; // rbx
  CVolumeStrip *v6; // rcx
  int v7; // edi
  __int64 StartPosition; // rax
  _QWORD *v9; // r12
  __int64 v10; // r8
  __int64 v11; // rsi
  _QWORD *NextValue; // rax
  _QWORD *v13; // rbx
  __int64 v14; // r8
  CAudioSession **v15; // rax
  _QWORD *v16; // rax
  ATL::CAtlException *v18; // [rsp+28h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v20; // [rsp+38h] [rbp-60h]
  void *v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+58h] [rbp-40h]
  __int64 v25; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+10h]
  char v27; // [rsp+B0h] [rbp+18h]
  _QWORD *v28; // [rsp+B8h] [rbp+20h] BYREF

  v27 = a3;
  v26 = a2;
  v25 = a1;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x38u,
        (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        v5,
        -2LL);
      v6 = WPP_GLOBAL_Control;
    }
    if ( v6 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x40) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v6 + 2), 0x39u, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids);
  }
  v7 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 24);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( v4 == 1 )
  {
    while ( 1 )
    {
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v5 + 64);
      if ( !StartPosition )
        break;
      v28 = *(_QWORD **)(StartPosition + 80);
      v9 = v28;
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
        v5 + 64,
        StartPosition);
      LOBYTE(v10) = v3;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v9[2] + 32LL))(v9 + 2, v4, v10);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 192LL))(v9, v5);
      (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v9 + 192LL))(v9, g_PolicyEventsHandler);
      try
      {
        ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v21, &v28);
      }
      catch ( ATL::CAtlException *v18 )
      {
        if ( *(_DWORD *)v18 == -1073741571 )
          _o__resetstkoflw();
        v7 = 0;
        v5 = v25;
        v3 = v27;
        v4 = v26;
        continue;
      }
    }
  }
  else
  {
    v11 = v5 + 64;
    v25 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v5 + 64);
    while ( v25 )
    {
      NextValue = (_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                              v11,
                              &v25);
      v13 = (_QWORD *)*NextValue;
      if ( *NextValue )
      {
        (*(void (__fastcall **)(_QWORD))(*v13 + 8LL))(*NextValue);
        LOBYTE(v14) = v3;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v13[2] + 32LL))(v13 + 2, v4, v14);
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      }
    }
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  while ( v7 < (int)v22 )
  {
    v15 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v21, v7);
    CAudioSession::ForceExpire(*v15);
    v16 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v21, v7);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 16LL))(*v16);
    ++v7;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(&v21);
  return 0LL;
}
