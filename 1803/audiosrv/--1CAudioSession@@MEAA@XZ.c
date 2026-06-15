/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x18004749C
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180041E2C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$0 @ 0x18006A949 (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$0.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800A839C (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800A8558 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 *     _CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession_::_1_::dtor$0 @ 0x1800B1181 (_CPerEndpointVolumeAudioSession--CPerEndpointVolumeAudioSession_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800053B8 (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180043D40 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180044094 (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800440C0 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18004417C (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18004A884 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_qS @ 0x1800A0B54 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned int v2; // esi
  unsigned int v3; // esi
  unsigned int v4; // esi
  void *v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  CRefCountedObject *v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+40h] [rbp-10h]

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      47,
      (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 91));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v12 = 0LL;
    do
    {
      v13 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 96,
                        v12);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 64LL))(*v13);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 96,
                   v12) = 0LL;
      v12 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 13) );
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v14 = 0LL;
    do
    {
      v15 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 168,
                        v14);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 64LL))(*v15);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 168,
                   v14) = 0LL;
      v14 = ++v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 22) );
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v16 = 0LL;
    do
    {
      v17 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 240,
                        v16);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 64LL))(*v17);
      *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                   (char *)this + 240,
                   v16) = 0LL;
      v16 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 31) );
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  v5 = (void *)*((_QWORD *)this + 121);
  if ( v5 )
    operator delete(v5);
  *((_QWORD *)this + 108) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((CAudioSession *)((char *)this + 864));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 896));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  v6 = (_QWORD *)*((_QWORD *)this + 97);
  if ( v6 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 98);
    if ( v6 != v7 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v6++);
      while ( v6 != v7 );
      v6 = (_QWORD *)*((_QWORD *)this + 97);
    }
    std::_Deallocate(v6, (__int64)(*((_QWORD *)this + 99) - (_QWORD)v6) >> 3, 8uLL);
    *((_QWORD *)this + 97) = 0LL;
    *((_QWORD *)this + 98) = 0LL;
    *((_QWORD *)this + 99) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSession *)((char *)this + 656));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  while ( *((_QWORD *)this + 68) )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      (__int64 *)this + 67,
      0LL,
      v8,
      v9);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>((void **)this + 71);
  ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::~CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>((__int64)this + 536);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v10 = *((_QWORD *)this + 61);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (CRefCountedObject *)*((_QWORD *)this + 59);
  if ( v11 )
    CRefCountedObject::Release(v11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 41) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 40) - 24LL));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)this + 30);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)this + 21);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)this + 12);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
