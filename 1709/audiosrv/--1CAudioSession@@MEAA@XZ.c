/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x180019B18
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002D37C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$0 @ 0x180039E2F (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$0.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x18006FD98 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x18006FF48 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x180079129 (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18001490C (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180030FA8 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18005A990 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x18005B9A8 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18006356C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF_qS @ 0x180066790 (WPP_SF_qS.c)
 *     ?FreeNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180071358 (-FreeNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PE.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x180071F6C (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x1800EBD20 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800EC36C (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 */

void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned __int64 v2; // r14
  unsigned int v3; // esi
  unsigned int v4; // esi
  unsigned int v5; // esi
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v8; // r12
  void **v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // r14
  void *v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // rcx
  void *v16; // rbx
  HANDLE v17; // rax
  ATL::CAtlPlex *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  CRefCountedObject **NextValue; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  unsigned int v32; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-40h] BYREF
  char v34; // [rsp+38h] [rbp-38h]
  LPCRITICAL_SECTION v35; // [rsp+40h] [rbp-30h] BYREF
  char v36; // [rsp+48h] [rbp-28h]
  LPCRITICAL_SECTION v37; // [rsp+50h] [rbp-20h] BYREF
  char v38; // [rsp+58h] [rbp-18h]
  LPCRITICAL_SECTION v39; // [rsp+60h] [rbp-10h] BYREF
  char v40; // [rsp+68h] [rbp-8h]
  __int64 StartPosition; // [rsp+A0h] [rbp+30h] BYREF

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      57,
      (unsigned int)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 99));
  }
  v2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v34 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v22 = 0LL;
    do
    {
      _mm_lfence();
      v23 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v22);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23);
      if ( v22 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      ++v3;
      *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v22) = 0LL;
      v22 = v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 13) );
  }
  if ( v34 )
    LeaveCriticalSection(lpCriticalSection);
  v36 = 0;
  v35 = (LPCRITICAL_SECTION)((char *)this + 128);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v35);
  v4 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v24 = 0LL;
    do
    {
      _mm_lfence();
      v25 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v24);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25);
      if ( v24 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ++v4;
      *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v24) = 0LL;
      v24 = v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 22) );
  }
  if ( v36 )
    LeaveCriticalSection(v35);
  v38 = 0;
  v37 = (LPCRITICAL_SECTION)((char *)this + 200);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v37);
  v5 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v26 = 0LL;
    do
    {
      _mm_lfence();
      v27 = *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v26);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 64LL))(v27);
      if ( v26 >= *((_QWORD *)this + 31) )
        ATL::AtlThrowImpl(-2147024809);
      ++v5;
      *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v26) = 0LL;
      v26 = v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 31) );
  }
  if ( v38 )
    LeaveCriticalSection(v37);
  v6 = (void *)*((_QWORD *)this + 128);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v6);
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 432);
  *((_QWORD *)this + 128) = 0LL;
  v39 = (LPCRITICAL_SECTION)((char *)this + 432);
  v40 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v39);
  v9 = (void **)((char *)this + 472);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 59);
  while ( StartPosition )
  {
    NextValue = (CRefCountedObject **)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                                        (char *)this + 472,
                                        &StartPosition);
    CRefCountedObject::Release(*NextValue);
  }
  if ( v40 )
    LeaveCriticalSection(v39);
  *((_QWORD *)this + 115) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((CAudioSession *)((char *)this + 920));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 952));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 864));
  v10 = (__int64 *)*((_QWORD *)this + 105);
  if ( v10 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 106);
    while ( v10 != v11 )
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v10++);
    std::_Deallocate(*((void **)this + 105), (__int64)(*((_QWORD *)this + 107) - *((_QWORD *)this + 105)) >> 3, 8uLL);
    v2 = 0LL;
    *((_QWORD *)this + 105) = 0LL;
    *((_QWORD *)this + 106) = 0LL;
    *((_QWORD *)this + 107) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 20);
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 99) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 95) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 92) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 91) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 90) - 24LL));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 17);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 14);
  while ( *((_QWORD *)this + 76) )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      (char *)this + 600,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)this + 14);
  v12 = (void *)*((_QWORD *)this + 79);
  if ( v12 )
    free(v12);
  v13 = *((_QWORD *)this + 75);
  if ( v13 )
  {
    v14 = *((_QWORD *)this + 76);
    if ( v14 )
    {
      do
      {
        v29 = *(_QWORD *)(v13 + 8 * v2);
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        ++v2;
      }
      while ( v2 < v14 );
    }
    free(*((void **)this + 75));
    LODWORD(v2) = 0;
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 432);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 14);
  v15 = *((_QWORD *)this + 69);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  ++*((_DWORD *)this + 130);
  if ( *v9 && *((_DWORD *)this + 122) )
  {
    do
    {
      v30 = *((_QWORD *)*v9 + (unsigned int)v2);
      while ( v30 )
      {
        v31 = v30;
        v30 = *(_QWORD *)(v30 + 24);
        ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::FreeNode(
          (char *)this + 472,
          v31);
      }
      LODWORD(v2) = v2 + 1;
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 122) );
  }
  v16 = *v9;
  v17 = GetProcessHeap();
  HeapFree(v17, 0, v16);
  *v9 = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  if ( !*((_DWORD *)this + 130) )
  {
    v32 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize((char *)this + 472);
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
      (char *)this + 472,
      v32,
      0LL);
  }
  v18 = (ATL::CAtlPlex *)*((_QWORD *)this + 66);
  *((_QWORD *)this + 67) = 0LL;
  if ( v18 )
  {
    ATL::CAtlPlex::FreeDataChain(v18);
    *((_QWORD *)this + 66) = 0LL;
  }
  --*((_DWORD *)this + 130);
  DeleteCriticalSection(v8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 41) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 40) - 24LL));
  v19 = (void *)*((_QWORD *)this + 30);
  if ( v19 )
    free(v19);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v20 = (void *)*((_QWORD *)this + 21);
  if ( v20 )
    free(v20);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v21 = (void *)*((_QWORD *)this + 12);
  if ( v21 )
    free(v21);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
