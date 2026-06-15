/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x18001553C
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18001DB78 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$0 @ 0x18005AB6C (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$0.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x180089DFC (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x180089F78 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x180092A49 (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180024CE8 (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?GetStartPosition@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002505C (-GetStartPosition@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementT.c)
 *     ?FreePlexes@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXXZ @ 0x180025070 (-FreePlexes@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180025524 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002E934 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     ??1?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA@XZ @ 0x18002EA20 (--1-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x18007C23C (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x180081C9C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF_qS @ 0x180083DB0 (WPP_SF_qS.c)
 *     ?FreeNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18008BA08 (-FreeNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PE.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18008C68C (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x18008CEF4 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x18008E960 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 */

void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // r14
  unsigned int v4; // esi
  unsigned int v5; // esi
  unsigned int v6; // esi
  void **v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  CRefCountedObject **NextValue; // rax
  unsigned int i; // r14d
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-50h] BYREF
  char v24; // [rsp+38h] [rbp-48h]
  LPCRITICAL_SECTION v25; // [rsp+40h] [rbp-40h] BYREF
  char v26; // [rsp+48h] [rbp-38h]
  LPCRITICAL_SECTION v27; // [rsp+50h] [rbp-30h] BYREF
  char v28; // [rsp+58h] [rbp-28h]
  LPCRITICAL_SECTION v29; // [rsp+60h] [rbp-20h] BYREF
  char v30; // [rsp+68h] [rbp-18h]
  LPCRITICAL_SECTION v31; // [rsp+70h] [rbp-10h] BYREF
  char v32; // [rsp+78h] [rbp-8h]
  __int64 StartPosition; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      64,
      (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 108));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 272);
  v24 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = 0;
  if ( *((_QWORD *)this + 40) )
  {
    v10 = 0LL;
    do
    {
      _mm_lfence();
      v11 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11);
      if ( v10 >= *((_QWORD *)this + 40) )
        ATL::AtlThrowImpl(-2147024809);
      ++v2;
      *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v10) = 0LL;
      v10 = v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 40) );
  }
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v26 = 0;
  v25 = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v25);
  v4 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v12 = 0LL;
    do
    {
      _mm_lfence();
      v13 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
      if ( v12 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      ++v4;
      *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v12) = 0LL;
      v12 = v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 13) );
  }
  if ( v26 )
    LeaveCriticalSection(v25);
  v28 = 0;
  v27 = (LPCRITICAL_SECTION)((char *)this + 128);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v27);
  v5 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v14 = 0LL;
    do
    {
      _mm_lfence();
      v15 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v14);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
      if ( v14 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ++v5;
      *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v14) = 0LL;
      v14 = v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 22) );
  }
  if ( v28 )
    LeaveCriticalSection(v27);
  v30 = 0;
  v29 = (LPCRITICAL_SECTION)((char *)this + 200);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v29);
  v6 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v16 = 0LL;
    do
    {
      _mm_lfence();
      v17 = *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
      if ( v16 >= *((_QWORD *)this + 31) )
        ATL::AtlThrowImpl(-2147024809);
      ++v6;
      *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v16) = 0LL;
      v16 = v6;
    }
    while ( (unsigned __int64)v6 < *((_QWORD *)this + 31) );
  }
  if ( v30 )
    LeaveCriticalSection(v29);
  operator delete(*((void **)this + 130));
  *((_QWORD *)this + 130) = 0LL;
  v31 = (LPCRITICAL_SECTION)((char *)this + 504);
  v32 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v31);
  v7 = (void **)((char *)this + 544);
  StartPosition = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetStartPosition((char *)this + 544);
  while ( StartPosition )
  {
    NextValue = (CRefCountedObject **)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                                        (char *)this + 544,
                                        &StartPosition);
    CRefCountedObject::Release(*NextValue);
  }
  if ( v32 )
    LeaveCriticalSection(v31);
  v8 = *((_QWORD *)this + 109);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 109) = 0LL;
  }
  *((_QWORD *)this + 117) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((CAudioSession *)((char *)this + 936));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 968));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 22);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSession *)((char *)this + 792));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 632));
  while ( *((_QWORD *)this + 85) )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      (char *)this + 672,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 632));
  ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::~CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>((char *)this + 704);
  ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::~CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>((char *)this + 672);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 632));
  v9 = *((_QWORD *)this + 78);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  ++*((_DWORD *)this + 148);
  if ( *v7 )
  {
    for ( i = 0; i < *((_DWORD *)this + 140); ++i )
    {
      v20 = *((_QWORD *)*v7 + i);
      while ( v20 )
      {
        v21 = v20;
        v20 = *(_QWORD *)(v20 + 24);
        ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::FreeNode(
          (char *)this + 544,
          v21);
      }
    }
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  }
  operator delete(*v7);
  *v7 = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  if ( !*((_DWORD *)this + 148) )
  {
    v22 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(
            (char *)this + 544,
            0LL);
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
      (char *)this + 544,
      v22,
      0LL);
  }
  ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::FreePlexes((char *)this + 544);
  --*((_DWORD *)this + 148);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 50) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 49) - 24LL));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((char *)this + 312);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((char *)this + 240);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((char *)this + 168);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((char *)this + 96);
  DeleteCriticalSection(v3);
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
