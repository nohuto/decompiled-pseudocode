/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014FA0
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001AD10 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x180019330 (-Start@CAudioStream@@UEAAJXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A150 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002A8E8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18007F8DC (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     WPP_SF_dq @ 0x180090B04 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int updated; // r15d
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CAudioStream *__hidden); // rax
  char v10; // si
  void (__fastcall *v11)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rax
  __int64 (__fastcall *v12)(CAudioSession *); // rax
  __int64 v14; // [rsp+20h] [rbp-E0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h] BYREF
  char v16; // [rsp+48h] [rbp-B8h]
  void **v17; // [rsp+50h] [rbp-B0h]
  CAudioSession *v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+64h] [rbp-9Ch]
  __int64 v21; // [rsp+68h] [rbp-98h]
  unsigned __int16 v22[1024]; // [rsp+70h] [rbp-90h] BYREF

  updated = 0;
  v4 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 71LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this, a2);
  }
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 12);
      if ( *(struct CAudioStream **)(v8 + 8 * v7) == a2 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v7 = (unsigned int)v6;
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        goto LABEL_15;
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, (unsigned int)v6, (unsigned int)v6, *(_QWORD *)(v8 + 8 * v6));
    }
    if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v6);
    v9 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v4 + 80LL);
    if ( v9 == CAudioStream::Start )
      CAudioStream::Start((CAudioStream *)v4);
    else
      v9((CAudioStream *)v4);
    updated = CAudioStream::UpdateStreamPriority((CAudioStream *)v4);
  }
LABEL_15:
  if ( ++*((_DWORD *)this + 86) == 1 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 73LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this, 1);
    }
    LeaveCriticalSection(lpCriticalSection);
    v10 = 0;
    v11 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 96LL);
    if ( v11 == CPerStreamVolumeAudioSession::NewState )
    {
      CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateActive);
      goto LABEL_22;
    }
    v11(this, AudioSessionStateActive);
  }
  else
  {
    v10 = v16;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_22:
  if ( v4 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v19 = 0;
    v17 = &CAudioStreamStateChanged::`vftable';
    v18 = this;
    v20 = 1;
    v21 = v4;
    if ( *(_DWORD *)(v4 + 496) == 1 )
    {
      LODWORD(v14) = 1;
      StringCchPrintfW(
        v22,
        0x400uLL,
        L"Stream %p: From [%d (%s)] to [%d (%s)]",
        v4,
        v14,
        *(_QWORD *)(v4 + 504),
        1,
        L"CAudioSession::StartStream");
      LogProductionAssert(0x6C966DuLL, v22);
    }
    *(_DWORD *)(v4 + 496) = 1;
    *(_QWORD *)(v4 + 504) = L"CAudioSession::StartStream";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 632));
    v12 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v12 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v12(this);
  }
  return updated;
}
