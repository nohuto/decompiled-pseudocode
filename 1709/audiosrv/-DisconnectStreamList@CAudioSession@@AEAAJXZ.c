/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180070DD8
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180070A30 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x180071080 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x18001745C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180030184 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180030228 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18005B6FC (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  CAudioSession *v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // r15
  unsigned __int64 i; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  void (*v7)(void); // rax
  void (__fastcall ***v8)(_QWORD, CAudioSessionManager **); // rax
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+38h] [rbp-80h] BYREF
  ATL::CAtlException *v13; // [rsp+40h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-70h] BYREF
  char v15; // [rsp+50h] [rbp-68h]
  __int64 *v16; // [rsp+68h] [rbp-50h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]
  __int64 v18; // [rsp+78h] [rbp-40h]
  int v19; // [rsp+80h] [rbp-38h]
  __int64 v21; // [rsp+D0h] [rbp+18h]

  v1 = this;
  v2 = 0;
  v16 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = 0LL; i < *((_QWORD *)v1 + 22); ++i )
  {
    v2 = 0;
    try
    {
      if ( i >= *((_QWORD *)v1 + 22) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
        &v16,
        (_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i));
    }
    catch ( ATL::CAtlException *v12 )
    {
      v10 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v2 = *(_DWORD *)v10;
    }
    if ( i >= *((_QWORD *)v1 + 22) )
      ATL::AtlThrowImpl(-2147024809);
    v5 = *(_QWORD *)(*((_QWORD *)v1 + 21) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
    v3 = v17;
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  while ( v3 )
  {
    v6 = *v16;
    v21 = *v16;
    v2 = 0;
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(&v16, 0LL);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v11 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v2 = *(_DWORD *)v11;
      v6 = v21;
    }
    if ( *(_BYTE *)(v6 + 128) )
    {
      if ( *(_BYTE *)(v6 + 400) )
      {
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 8LL))(v1);
        v8 = (void (__fastcall ***)(_QWORD, CAudioSessionManager **))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                                       (__int64)&lpCriticalSection,
                                                                       (__int64)v1,
                                                                       1,
                                                                       0,
                                                                       v6,
                                                                       (__int64)L"CAudioSession::DisconnectStreamList");
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)v1 + 14, v8);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 16LL))(v1);
      }
      (*(void (__fastcall **)(CAudioSession *, __int64, _QWORD))(*(_QWORD *)v1 + 264LL))(v1, v6, 0LL);
      v7 = *(void (**)(void))(*(_QWORD *)(v6 + 8) + 176LL);
    }
    else
    {
      v7 = *(void (**)(void))(*(_QWORD *)(v6 + 8) + 184LL);
    }
    v7();
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
    v3 = v17;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v16);
  return v2;
}
