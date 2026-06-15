/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180048360 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180016F9C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18001C8E0 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001EDF0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x18002DF10 (-IsCaptureStream@CAudioStream@@UEAA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x1800442C0 (-Stop@CAudioStream@@UEAAJXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18009635C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180098920 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18009BD38 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_dq @ 0x1800AE2CC (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  int v4; // r13d
  int v5; // edi
  struct CAudioStream *v6; // r12
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned __int64 v10; // r15
  __int64 (__fastcall *v11)(CAudioStream *); // rax
  bool v12; // zf
  void (__fastcall *v13)(CPerStreamVolumeAudioSession *, enum _AudioSessionState); // rax
  unsigned int v14; // r12d
  CAudioStream *v15; // rcx
  bool (__fastcall *v16)(CAudioStream *); // rax
  bool IsCaptureStream; // al
  BOOL v18; // r15d
  __int64 v19; // rdi
  int v20; // eax
  int v21; // eax
  CProcessSubmixProxy *v22; // rcx
  __int64 (__fastcall *v23)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 (__fastcall *v24)(__int64, unsigned int, unsigned int, unsigned int); // rax
  int updated; // eax
  int v26; // ecx
  __int64 (__fastcall *v27)(CAudioSession *); // rax
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r8
  CAudioStream **v32; // rax
  CAudioStream *v33; // rbx
  void (__fastcall ***v34)(_QWORD, __int64 *); // rax
  int v35[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+40h] [rbp-C0h]
  unsigned int v37; // [rsp+40h] [rbp-C0h]
  struct IStreamGroupProxy *v38; // [rsp+48h] [rbp-B8h] BYREF
  struct CAudioStream *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A0h] BYREF
  char v42; // [rsp+68h] [rbp-98h]
  LPCRITICAL_SECTION v43; // [rsp+70h] [rbp-90h] BYREF
  char v44; // [rsp+78h] [rbp-88h]
  void (__fastcall **v45[4])(_QWORD, __int64 *); // [rsp+80h] [rbp-80h] BYREF
  char v46[32]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t Buffer[1024]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+908h] [rbp+808h]

  v2 = 0;
  v39 = a2;
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this, a2);
  }
  v42 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = *((_QWORD *)this + 13);
  v9 = 0;
  v36 = 0;
  if ( v8 )
  {
    v10 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v10) != v6 )
    {
      v10 = ++v9;
      v36 = v9;
      if ( v9 >= v8 )
        goto LABEL_31;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_QWORD *)v35 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                    (char *)this + 96,
                                    v10);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, v29, v36);
    }
    if ( v10 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v10);
    v11 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v3 + 80LL);
    if ( v11 == CAudioStream::Stop )
      CAudioStream::Stop((CAudioStream *)v3);
    else
      v11((CAudioStream *)v3);
    v12 = (*((_DWORD *)this + 68))-- == 1;
    v4 = 1;
    if ( v12 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          57LL,
          &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          *((unsigned int *)this + 68));
      }
      v13 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *, enum _AudioSessionState))(*(_QWORD *)this + 96LL);
      if ( v13 == CPerStreamVolumeAudioSession::NewState )
        CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateInactive);
      else
        v13(this, AudioSessionStateInactive);
    }
    v14 = *(_DWORD *)(v3 + 420);
    v40 = 0LL;
    v37 = -1;
    if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 136LL))(g_PolicyManager) )
    {
      v15 = (CAudioStream *)(v3 + 8);
      v16 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)(v3 + 8) + 64LL);
      if ( v16 == CAudioStream::IsCaptureStream )
        IsCaptureStream = CAudioStream::IsCaptureStream(v15);
      else
        IsCaptureStream = v16(v15);
      v18 = IsCaptureStream;
      v19 = *(_QWORD *)g_PolicyManager;
      v35[0] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 80) + 120LL))(*(_QWORD *)(v3 + 80));
      v20 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, BOOL, _QWORD, _QWORD))(v19 + 64))(
              g_PolicyManager,
              v18,
              *(unsigned int *)(v3 + 552),
              *(unsigned __int8 *)(v3 + 416));
      v5 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B4,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v20,
          v35[0]);
        goto LABEL_56;
      }
      v21 = -1;
    }
    else
    {
      v21 = 0;
      v37 = 0;
    }
    if ( v21 == *(_DWORD *)(v3 + 420) )
    {
LABEL_29:
      v5 = 0;
LABEL_30:
      v6 = v39;
      goto LABEL_31;
    }
    v22 = *(CProcessSubmixProxy **)(v3 + 64);
    *(_DWORD *)(v3 + 420) = v21;
    v38 = 0LL;
    v23 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v22 + 80LL);
    if ( v23 == CProcessSubmixProxy::GetConnectedStreamGroup )
      CProcessSubmixProxy::GetConnectedStreamGroup(v22, &v38);
    else
      v23(v22, &v38);
    v24 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v38 + 216LL);
    if ( v24 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
      updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v38, 1u, v37, v14);
    else
      updated = v24((__int64)v38, 1u, v37, v14);
    v5 = updated;
    if ( updated >= 0 )
    {
      if ( v38 )
        (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v38 + 16LL))(v38);
      goto LABEL_29;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)updated,
      v35[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
LABEL_56:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
    goto LABEL_30;
  }
LABEL_31:
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v26 = *(_DWORD *)(v3 + 512);
    v45[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioStreamStateChanged::`vftable';
    v45[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
    v45[2] = (void (__fastcall **)(_QWORD, __int64 *))1;
    v45[3] = (void (__fastcall **)(_QWORD, __int64 *))v3;
    if ( v26 != 1 )
    {
      v35[0] = v26;
      StringCchPrintfW(
        Buffer,
        1024LL,
        L"Stream %p: From [%d (%s)] to [%d (%s)]",
        v3,
        *(_QWORD *)v35,
        *(_QWORD *)(v3 + 520),
        0,
        L"CAudioSession::StopStream: in _Streams");
      LogProductionAssert(0x6C966DuLL, Buffer);
    }
    *(_DWORD *)(v3 + 512) = 0;
    *(_QWORD *)(v3 + 520) = L"CAudioSession::StopStream: in _Streams";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v45);
    v27 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v27 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v27(this);
  }
  if ( !v4 )
  {
    v44 = 0;
    v43 = (LPCRITICAL_SECTION)((char *)this + 128);
    ATL::CCritSecLock::Lock(&v43);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
    }
    if ( *((_QWORD *)this + 22) )
    {
      v30 = 0LL;
      while ( *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                         (char *)this + 168,
                                         v30) != v6 )
      {
        v30 = ++v2;
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 22) )
          goto LABEL_75;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 168, v30);
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, v31, v2);
      }
      v32 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                               (char *)this + 168,
                               v30);
      v33 = *v32;
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)*v32 + 80LL))(*v32);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v34 = (void (__fastcall ***)(_QWORD, __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(v46, this, 1LL);
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v34);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      v5 = CAudioStream::UpdateStreamPriority(v33);
    }
LABEL_75:
    if ( v44 )
      LeaveCriticalSection(v43);
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StopStream", 0xC4Cu, v5);
  return (unsigned int)v5;
}
