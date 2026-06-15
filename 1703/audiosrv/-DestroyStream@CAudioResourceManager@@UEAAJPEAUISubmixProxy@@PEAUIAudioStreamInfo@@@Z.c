/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180004700
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 * Callees:
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180007C30 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180007E40 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x180009D10 (-IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x180009D20 (-IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ.c)
 *     ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x180009D30 (-IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180009EB0 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180016580 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800166C0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018110 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180019690 (-GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x1800A9F64 (--$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA-AV-$shared_ptr@USaDeviceReevaluationCon.c)
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C50F4 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 (__fastcall *v5)(CAudioStream *__hidden, struct IAudioSessionInfo **); // rax
  int SessionInfo; // eax
  __int64 (__fastcall *v7)(CAudioSession *__hidden, struct IAudioProcess **); // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(CAudioStream *__hidden); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 (*v12)(void); // rax
  __int64 Identifier; // rax
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rdx
  __int64 (__fastcall *v16)(CProcessSubmixProxy *__hidden, struct IStreamGroupProxy **); // rax
  int ConnectedStreamGroup; // eax
  unsigned int v18; // ebx
  __int64 (__fastcall *v19)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rax
  CProcessSubmixProxy *v20; // rbx
  bool (__fastcall *v21)(CProcessSubmixProxy *__hidden); // rax
  bool IsPeriodicitySensitive; // al
  bool (__fastcall *v23)(CSaDeviceProxy *__hidden); // rax
  bool IsLockedToPeriodicity; // al
  bool (__fastcall *v25)(CProcessSubmixProxy *__hidden); // rax
  bool IsFormatSensitive; // r13
  int (*v27)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *); // rax
  WINBOOL v28; // eax
  unsigned int v29; // edi
  CProcessSubmixProxy *v30; // rbx
  bool (__fastcall *v31)(CProcessSubmixProxy *__hidden); // rax
  bool v32; // al
  bool (__fastcall *v33)(CSaDeviceProxy *__hidden); // rax
  bool v34; // al
  bool v35; // si
  bool (__fastcall *v36)(CProcessSubmixProxy *__hidden); // rax
  bool v37; // al
  void (*v38)(void); // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  CAudioResourceManager *v44; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v46; // [rsp+20h] [rbp-138h]
  bool v47; // [rsp+30h] [rbp-128h]
  CProcessSubmixProxy *v48; // [rsp+38h] [rbp-120h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-118h] BYREF
  struct IAudioProcess *v50; // [rsp+48h] [rbp-110h] BYREF
  CAudioSession *v51; // [rsp+50h] [rbp-108h] BYREF
  struct IStreamGroupProxy *v52; // [rsp+58h] [rbp-100h] BYREF
  int v53; // [rsp+60h] [rbp-F8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-E8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+78h] [rbp-E0h] BYREF
  CAudioResourceManager *v57; // [rsp+80h] [rbp-D8h]
  _DWORD v58[2]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+90h] [rbp-C8h]
  __int64 v60; // [rsp+98h] [rbp-C0h] BYREF
  std::_Ref_count_base *v61; // [rsp+A0h] [rbp-B8h]
  __int64 v62; // [rsp+A8h] [rbp-B0h]
  unsigned __int16 *v63; // [rsp+B0h] [rbp-A8h]
  int v64; // [rsp+B8h] [rbp-A0h]
  int v65; // [rsp+BCh] [rbp-9Ch]
  void *v66; // [rsp+C0h] [rbp-98h]
  int v67; // [rsp+C8h] [rbp-90h]
  int v68; // [rsp+CCh] [rbp-8Ch]
  __int64 *v69; // [rsp+D0h] [rbp-88h]
  __int64 v70; // [rsp+D8h] [rbp-80h]
  const WCHAR *v71; // [rsp+E0h] [rbp-78h]
  int v72; // [rsp+E8h] [rbp-70h]
  int v73; // [rsp+ECh] [rbp-6Ch]
  int *v74; // [rsp+F0h] [rbp-68h]
  __int64 v75; // [rsp+F8h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v62 = -2LL;
  v57 = this;
  v50 = 0LL;
  v51 = 0LL;
  v5 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IAudioSessionInfo **))(*(_QWORD *)a3 + 24LL);
  if ( v5 == CAudioStream::GetSessionInfo )
    SessionInfo = CAudioStream::GetSessionInfo(a3, &v51);
  else
    SessionInfo = v5(a3, &v51);
  if ( SessionInfo >= 0 && v51 )
  {
    v50 = 0LL;
    v7 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct IAudioProcess **))(*(_QWORD *)v51 + 24LL);
    v8 = v7 == CAudioSession::GetProcess ? CAudioSession::GetProcess(v51, &v50) : v7(v51, &v50);
    if ( v8 >= 0 && v51 )
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = qword_18012BF30;
        qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
      }
      v9 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v9 > 4u )
      {
        v10 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a3 + 72LL);
        if ( v10 == CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(a3);
        else
          UniqueStreamIdentifier = v10(a3);
        v55 = UniqueStreamIdentifier;
        v69 = &v55;
        v70 = 8LL;
        v12 = *(__int64 (**)(void))(*(_QWORD *)v51 + 64LL);
        if ( (char *)v12 == (char *)CAudioSession::GetIdentifier )
          Identifier = (__int64)CAudioSession::GetIdentifier(v51);
        else
          Identifier = v12();
        v14 = (const WCHAR *)Identifier;
        v15 = &word_1800EAD74;
        LODWORD(Identifier) = 0;
        if ( v14 )
        {
          v15 = v14;
          Identifier = -1LL;
          do
            ++Identifier;
          while ( v14[Identifier] );
        }
        v71 = v15;
        v72 = 2 * Identifier + 2;
        v73 = 0;
        v53 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v50 + 40LL))(v50);
        v74 = &v53;
        v75 = 4LL;
        v58[0] = ((unsigned int)&unk_1800F9B81 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v58[1] = 4;
        v59 = 0LL;
        v63 = *(unsigned __int16 **)(v9 + 8);
        v64 = *v63;
        v65 = 2;
        v66 = &unk_1800F9B8C;
        v67 = 69;
        v68 = 1;
        v46 = 5;
        EtwEventWriteTransfer(*(_QWORD *)(v9 + 32), v58, 0LL, 0LL);
      }
    }
  }
  v48 = 0LL;
  v52 = 0LL;
  v16 = *(__int64 (__fastcall **)(CProcessSubmixProxy *__hidden, struct IStreamGroupProxy **))(*(_QWORD *)a2 + 80LL);
  if ( v16 == CProcessSubmixProxy::GetConnectedStreamGroup )
    ConnectedStreamGroup = CProcessSubmixProxy::GetConnectedStreamGroup(a2, &v52);
  else
    ConnectedStreamGroup = v16(a2, &v52);
  v18 = ConnectedStreamGroup;
  if ( ConnectedStreamGroup < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x643,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)ConnectedStreamGroup,
      v46);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v52);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v48);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v50);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v51);
    return v18;
  }
  v48 = 0LL;
  v19 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)v52 + 208LL);
  if ( v19 == CBaseStreamGroupProxy::GetConnectedSaDevice )
    CBaseStreamGroupProxy::GetConnectedSaDevice(v52, &v48);
  else
    v19(v52, &v48);
  v20 = v48;
  if ( v48 )
  {
    v21 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v48 + 152LL);
    if ( v21 == CProcessSubmixProxy::IsPeriodicitySensitive )
    {
      IsPeriodicitySensitive = CProcessSubmixProxy::IsPeriodicitySensitive(v48);
    }
    else
    {
      IsPeriodicitySensitive = v21(v48);
      v20 = v48;
    }
    v47 = 1;
    if ( !IsPeriodicitySensitive )
    {
      v23 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v20 + 120LL);
      if ( v23 == CSaDeviceProxy::IsLockedToPeriodicity )
      {
        IsLockedToPeriodicity = CSaDeviceProxy::IsLockedToPeriodicity(v20);
      }
      else
      {
        IsLockedToPeriodicity = v23(v20);
        v20 = v48;
      }
      if ( !IsLockedToPeriodicity )
        v47 = 0;
    }
    if ( v20 )
    {
      v25 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v20 + 128LL);
      if ( v25 == CProcessSubmixProxy::IsFormatSensitive )
        IsFormatSensitive = CProcessSubmixProxy::IsFormatSensitive(v20);
      else
        IsFormatSensitive = v25(v20);
      goto LABEL_36;
    }
  }
  else
  {
    v47 = 0;
  }
  IsFormatSensitive = 0;
LABEL_36:
  v27 = *(int (**)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL);
  if ( v27 == CProcessSubmixProxy::DestroyStream )
    v28 = CProcessSubmixProxy::DestroyStream(a2, a3);
  else
    v28 = ((__int64 (__fastcall *)(struct ISubmixProxy *, struct IAudioStreamInfo *))v27)(a2, a3);
  v29 = v28;
  fPending = v28;
  v30 = v48;
  if ( !v48 )
  {
    v35 = 0;
LABEL_81:
    v37 = 0;
    goto LABEL_49;
  }
  v31 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v48 + 152LL);
  if ( v31 == CProcessSubmixProxy::IsPeriodicitySensitive )
  {
    v32 = CProcessSubmixProxy::IsPeriodicitySensitive(v48);
  }
  else
  {
    v32 = v31(v48);
    v30 = v48;
  }
  v35 = 1;
  if ( !v32 )
  {
    v33 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v30 + 120LL);
    if ( v33 == CSaDeviceProxy::IsLockedToPeriodicity )
    {
      v34 = CSaDeviceProxy::IsLockedToPeriodicity(v30);
    }
    else
    {
      v34 = v33(v30);
      v30 = v48;
    }
    if ( !v34 )
      v35 = 0;
  }
  if ( !v30 )
    goto LABEL_81;
  v36 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v30 + 128LL);
  if ( v36 == CProcessSubmixProxy::IsFormatSensitive )
  {
    v37 = CProcessSubmixProxy::IsFormatSensitive(v30);
  }
  else
  {
    v37 = v36(v30);
    v30 = v48;
  }
LABEL_49:
  if ( v47 && !v35 || IsFormatSensitive && v37 )
  {
    std::make_shared<SaDeviceReevaluationContext,>(&v60);
    v40 = v60;
    if ( v60 )
    {
      v41 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v52 + 120LL))(v52);
      v43 = -1LL;
      do
        ++v43;
      while ( *(_WORD *)(v41 + 2 * v43) );
      if ( (int)_AllocStringWorker<CTCoAllocPolicy>(v43, v42, v41, v43) >= 0 )
      {
        v44 = v57;
        ThreadpoolTimer = CreateThreadpoolTimer(
                            CAudioResourceManager::ReevaluateSaDevicesForEndpoint,
                            (char *)v57 - 8,
                            0LL);
        if ( ThreadpoolTimer )
        {
          *(_QWORD *)(v40 + 8) = ThreadpoolTimer;
          pftDueTime = (struct _FILETIME)-100000000LL;
          SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
          try
          {
            std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::push_back((char *)v44 + 80, &v60);
          }
          catch ( std::bad_alloc )
          {
            v29 = fPending;
          }
        }
      }
    }
    if ( v61 )
      std::_Ref_count_base::_Decref(v61);
    v30 = v48;
  }
  if ( v52 )
  {
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v52 + 16LL))(v52);
    v30 = v48;
  }
  if ( v30 )
    (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v50 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v50 + 16LL))(v50);
  if ( v51 )
  {
    v38 = *(void (**)(void))(*(_QWORD *)v51 + 16LL);
    if ( (char *)v38 == (char *)CAudioSession::Release )
      CAudioSession::Release(v51);
    else
      v38();
  }
  return v29;
}
