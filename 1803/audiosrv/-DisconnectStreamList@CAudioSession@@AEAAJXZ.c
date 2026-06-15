/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800A9038
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800A8CA0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800A92D0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18004417C (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180098038 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800980EC (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180098920 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  CAudioSession *v1; // rsi
  unsigned int v2; // r14d
  unsigned __int64 v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdi
  void (*v8)(void); // rax
  void (__fastcall ***v9)(_QWORD, __int64 *); // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+38h] [rbp-80h] BYREF
  ATL::CAtlException *v14; // [rsp+40h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-70h] BYREF
  char v16; // [rsp+50h] [rbp-68h]
  void *v17; // [rsp+68h] [rbp-50h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h]
  __int64 v19; // [rsp+78h] [rbp-40h]
  int v20; // [rsp+80h] [rbp-38h]
  unsigned __int64 v22; // [rsp+D0h] [rbp+18h]
  _QWORD *v23; // [rsp+D8h] [rbp+20h]

  v1 = this;
  v2 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = 0LL;
  v22 = 0LL;
  v4 = (_QWORD *)((char *)v1 + 168);
  v23 = (_QWORD *)((char *)v1 + 168);
  while ( v3 < *((_QWORD *)v1 + 22) )
  {
    v2 = 0;
    try
    {
      v5 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v4, v3);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&v17, v5);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v11 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v2 = *(_DWORD *)v11;
      v3 = v22;
      v4 = v23;
    }
    v6 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v4, v3);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 56LL))(*v6);
    v22 = ++v3;
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  while ( v18 )
  {
    v7 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v17, 0LL);
    v2 = 0;
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
      v2 = *(_DWORD *)v12;
    }
    if ( *(_BYTE *)(v7 + 128) )
    {
      if ( *(_BYTE *)(v7 + 416) )
      {
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 8LL))(v1);
        v9 = (void (__fastcall ***)(_QWORD, __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                         (__int64)&lpCriticalSection,
                                                         (__int64)v1,
                                                         1,
                                                         0,
                                                         v7,
                                                         (__int64)L"CAudioSession::DisconnectStreamList");
        CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v1 + 496), v9);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v1 + 16LL))(v1);
      }
      (*(void (__fastcall **)(CAudioSession *, __int64, _QWORD))(*(_QWORD *)v1 + 272LL))(v1, v7, 0LL);
      v8 = *(void (**)(void))(*(_QWORD *)(v7 + 8) + 176LL);
    }
    else
    {
      v8 = *(void (**)(void))(*(_QWORD *)(v7 + 8) + 184LL);
    }
    v8();
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(&v17);
  return v2;
}
