/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014D50
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001A650 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x1800192D0 (-Stop@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A150 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002A8E8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x18007C49C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18007F8DC (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_dq @ 0x180090B04 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  __int64 v3; // rbx
  int v4; // r15d
  int updated; // r14d
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CAudioStream *__hidden); // rax
  bool v11; // zf
  void (__fastcall *v12)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rax
  int v13; // ecx
  __int64 (__fastcall *v14)(CAudioSession *); // rax
  CVolumeStrip *v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  CAudioStream *v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h] BYREF
  char v23; // [rsp+48h] [rbp-B8h]
  LPCRITICAL_SECTION v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+58h] [rbp-A8h]
  void **v26; // [rsp+60h] [rbp-A0h]
  CAudioSession *v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  _BYTE v30[32]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v31[1024]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0LL;
  v4 = 0;
  updated = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 74LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this, a2);
  }
  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v9 + 8 * v8) == a2 )
        break;
      v8 = ++v7;
      if ( (unsigned __int64)v7 >= *((_QWORD *)this + 13) )
        goto LABEL_22;
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)v7 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 75LL, v7, v7, *(_QWORD *)(v9 + 8LL * v7));
    }
    if ( (unsigned __int64)v7 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * v7);
    v10 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v3 + 88LL);
    if ( v10 == CAudioStream::Stop )
      CAudioStream::Stop((CAudioStream *)v3);
    else
      v10((CAudioStream *)v3);
    v11 = (*((_DWORD *)this + 86))-- == 1;
    v4 = 1;
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 76LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 0LL);
      }
      v12 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 96LL);
      if ( v12 == CPerStreamVolumeAudioSession::NewState )
        CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateInactive);
      else
        v12(this, AudioSessionStateInactive);
    }
    updated = CAudioStream::UpdateStreamPriority((CAudioStream *)v3);
  }
LABEL_22:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v13 = *(_DWORD *)(v3 + 496);
    v26 = &CAudioStreamStateChanged::`vftable';
    v27 = this;
    v28 = 1LL;
    v29 = v3;
    if ( v13 != 1 )
    {
      LODWORD(v21) = v13;
      StringCchPrintfW(
        v31,
        0x400uLL,
        L"Stream %p: From [%d (%s)] to [%d (%s)]",
        v3,
        v21,
        *(_QWORD *)(v3 + 504),
        0,
        L"CAudioSession::StopStream: in _Streams");
      LogProductionAssert(0x6C966DuLL, v31);
    }
    *(_DWORD *)(v3 + 496) = 0;
    *(_QWORD *)(v3 + 504) = L"CAudioSession::StopStream: in _Streams";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 632));
    v14 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v14 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v14(this);
  }
  if ( !v4 )
  {
    v25 = 0;
    v24 = (LPCRITICAL_SECTION)((char *)this + 128);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v24);
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 77LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids);
      v16 = WPP_GLOBAL_Control;
    }
    v17 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      v18 = 0LL;
      while ( 1 )
      {
        v19 = *((_QWORD *)this + 21);
        if ( *(struct CAudioStream **)(v19 + 8 * v18) == a2 )
          break;
        v17 = (unsigned int)(v17 + 1);
        v18 = (unsigned int)v17;
        if ( (unsigned __int64)(unsigned int)v17 >= *((_QWORD *)this + 22) )
          goto LABEL_60;
      }
      if ( v16 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v16 + 28) & 0x40) != 0
        && *((_BYTE *)v16 + 25) >= 4u )
      {
        if ( (unsigned __int64)(unsigned int)v17 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)v16 + 2), 78LL, (unsigned int)v17, (unsigned int)v17, *(_QWORD *)(v19 + 8 * v17));
      }
      if ( v17 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      v20 = *(CAudioStream **)(*((_QWORD *)this + 21) + 8 * v17);
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v20 + 88LL))(v20);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      CAudioStreamStateChanged::CAudioStreamStateChanged(v30, this, 1LL);
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 632));
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      updated = CAudioStream::UpdateStreamPriority(v20);
    }
LABEL_60:
    if ( v25 )
      LeaveCriticalSection(v24);
  }
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StopStream", 0xE50u, updated);
  return (unsigned int)updated;
}
