/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008A940 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x18008AFB0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x18008B200 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180025524 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007BE1C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x18007BEA0 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x18007C49C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18009657C (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180096784 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  CAudioSession *v1; // rdi
  CAudioSession *v2; // r12
  unsigned int v3; // r14d
  __int64 v4; // r15
  unsigned __int64 i; // rsi
  __int64 v6; // rcx
  CAudioStream *v7; // rsi
  void (__fastcall ***v8)(_QWORD, _QWORD *); // rax
  __int64 v9; // r8
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v14; // [rsp+40h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-80h] BYREF
  char v16; // [rsp+50h] [rbp-78h]
  CAudioStream **v17; // [rsp+68h] [rbp-60h] BYREF
  __int64 v18; // [rsp+70h] [rbp-58h]
  __int64 v19; // [rsp+78h] [rbp-50h]
  int v20; // [rsp+80h] [rbp-48h]
  CAudioStream *v22; // [rsp+E0h] [rbp+18h]

  v1 = this;
  v2 = this;
  v3 = 0;
  v17 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = 0LL; i < *((_QWORD *)v1 + 22); ++i )
  {
    if ( i >= *((_QWORD *)v2 + 22) )
      ATL::AtlThrowImpl(-2147024809);
    v3 = 0;
    try
    {
      if ( i >= *((_QWORD *)v1 + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
        &v17,
        (_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i));
    }
    catch ( ATL::CAtlException *v13 )
    {
      v11 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v3 = *(_DWORD *)v11;
      v2 = this;
    }
    if ( i >= *((_QWORD *)v1 + 22) )
      ATL::AtlThrowImpl(-2147024809);
    v6 = *(_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
    v4 = v18;
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  while ( v4 )
  {
    v7 = *v17;
    v22 = *v17;
    v3 = 0;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(&v17, 0LL);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v12 = v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v3 = *(_DWORD *)v12;
      v7 = v22;
    }
    if ( *((_BYTE *)v7 + 128) )
    {
      if ( *((_BYTE *)v7 + 400) )
      {
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 8LL))(v1);
        v8 = (void (__fastcall ***)(_QWORD, _QWORD *))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                        (__int64)&lpCriticalSection,
                                                        (__int64)v1,
                                                        1,
                                                        0,
                                                        (__int64)v7,
                                                        (__int64)L"CAudioSession::DisconnectStreamList");
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v1 + 632), v8);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 16LL))(v1);
      }
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(CAudioSession *, CAudioStream *, __int64, _QWORD))(*(_QWORD *)v1 + 272LL))(
        v1,
        v7,
        v9,
        0LL);
      CAudioStream::SendRemoteDisconnectionRequest(v7);
    }
    else
    {
      CAudioStream::RemoteDisconnect(v7);
    }
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v7 + 72LL))(v7);
    v4 = v18;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v17);
  return v3;
}
