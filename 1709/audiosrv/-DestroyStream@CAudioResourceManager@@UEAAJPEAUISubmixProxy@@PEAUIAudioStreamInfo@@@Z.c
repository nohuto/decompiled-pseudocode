/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710
 * Callers:
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001B590 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0 (--_EGENERIC_EVENT@@UEAAPEAXI@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18000CA54 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18000D750 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x18000E830 (-IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x18000E840 (-IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ.c)
 *     ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x18000E850 (-IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180011EC0 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800121F0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetNonLoopbackStreamCount@CProcessSubmixProxy@@UEAAIXZ @ 0x180012980 (-GetNonLoopbackStreamCount@CProcessSubmixProxy@@UEAAIXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x18001CC20 (-GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18001D390 (-GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18002B31C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x1800986F8 (--$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA-AV-$shared_ptr@USaDeviceReevaluationCon.c)
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C32A8 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 (__fastcall *v5)(CAudioStream *__hidden, struct IAudioSessionInfo **); // rax
  int SessionInfo; // eax
  __int64 (__fastcall *v7)(CAudioStream *__hidden, struct IAudioProcess **); // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(CAudioStream *__hidden); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 (*v12)(void); // rax
  const WCHAR *Identifier; // rax
  __int64 (__fastcall *v14)(CProcessSubmixProxy *__hidden, struct IStreamGroupProxy **); // rax
  int ConnectedStreamGroup; // eax
  unsigned int v16; // ebx
  __int64 (__fastcall *v17)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **); // rax
  CProcessSubmixProxy *v18; // rbx
  bool (__fastcall *v19)(CProcessSubmixProxy *); // rax
  bool IsPeriodicitySensitive; // al
  bool (__fastcall *v21)(CSaDeviceProxy *); // rax
  bool IsLockedToPeriodicity; // al
  bool (__fastcall *v23)(CProcessSubmixProxy *); // rax
  bool IsFormatSensitive; // al
  __int64 (*v25)(void); // rax
  unsigned int NonLoopbackStreamCount; // eax
  unsigned int v27; // r15d
  int (*v28)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *); // rax
  WINBOOL v29; // eax
  unsigned int v30; // r14d
  CProcessSubmixProxy *v31; // rbx
  char v32; // al
  bool (__fastcall *v33)(CSaDeviceProxy *); // rax
  bool v34; // al
  bool v35; // si
  bool (__fastcall *v36)(CProcessSubmixProxy *); // rax
  bool v37; // al
  unsigned int (__fastcall *v38)(CProcessSubmixProxy *__hidden); // rax
  __int64 *v40; // rax
  __int64 v41; // rdx
  volatile signed __int32 **v42; // rsi
  volatile signed __int32 *v43; // rbx
  GENERIC_EVENT *v44; // rbx
  volatile signed __int32 *v45; // rcx
  void (*v46)(void); // rax
  void (*v47)(void); // rax
  __int64 v49; // rbx
  const unsigned __int16 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // r9
  CAudioResourceManager *v54; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v56; // [rsp+20h] [rbp-188h]
  bool v57; // [rsp+30h] [rbp-178h]
  bool v58; // [rsp+31h] [rbp-177h]
  CProcessSubmixProxy *v59; // [rsp+38h] [rbp-170h] BYREF
  unsigned int v60; // [rsp+40h] [rbp-168h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-164h] BYREF
  CBaseStreamGroupProxy *v62; // [rsp+48h] [rbp-160h] BYREF
  struct IAudioProcess *v63; // [rsp+50h] [rbp-158h] BYREF
  CAudioSession *v64; // [rsp+58h] [rbp-150h] BYREF
  int v65; // [rsp+60h] [rbp-148h]
  CProcessSubmixProxy *v66; // [rsp+68h] [rbp-140h] BYREF
  volatile signed __int32 *v67; // [rsp+70h] [rbp-138h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-130h] BYREF
  __int64 v69; // [rsp+80h] [rbp-128h] BYREF
  struct _FILETIME pftDueTime; // [rsp+88h] [rbp-120h] BYREF
  volatile signed __int32 **v71; // [rsp+90h] [rbp-118h] BYREF
  CAudioResourceManager *v72; // [rsp+98h] [rbp-110h]
  _DWORD v73[2]; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-F8h]
  __int64 v75; // [rsp+B8h] [rbp-F0h] BYREF
  std::_Ref_count_base *v76; // [rsp+C0h] [rbp-E8h]
  __int64 v77; // [rsp+C8h] [rbp-E0h]
  _QWORD v78[8]; // [rsp+D0h] [rbp-D8h] BYREF
  unsigned __int16 *v79; // [rsp+110h] [rbp-98h] BYREF
  int v80; // [rsp+118h] [rbp-90h]
  int v81; // [rsp+11Ch] [rbp-8Ch]
  void *v82; // [rsp+120h] [rbp-88h]
  int v83; // [rsp+128h] [rbp-80h]
  int v84; // [rsp+12Ch] [rbp-7Ch]
  __int64 *v85; // [rsp+130h] [rbp-78h]
  __int64 v86; // [rsp+138h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp-68h] BYREF
  unsigned int *v88; // [rsp+150h] [rbp-58h]
  __int64 v89; // [rsp+158h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v77 = -2LL;
  v72 = this;
  v65 = 0;
  v63 = 0LL;
  v64 = 0LL;
  v5 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IAudioSessionInfo **))(*(_QWORD *)a3 + 32LL);
  if ( v5 == CAudioStream::GetSessionInfo )
    SessionInfo = CAudioStream::GetSessionInfo(a3, &v64);
  else
    SessionInfo = v5(a3, &v64);
  if ( SessionInfo >= 0 && v64 )
  {
    v63 = 0LL;
    v7 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IAudioProcess **))(*(_QWORD *)a3 + 24LL);
    v8 = v7 == CAudioStream::GetProcess ? CAudioStream::GetProcess(a3, &v63) : v7(a3, &v63);
    if ( v8 >= 0 && v64 )
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v9 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v9 > 4u )
      {
        v10 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a3 + 80LL);
        if ( v10 == CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(a3);
        else
          UniqueStreamIdentifier = v10(a3);
        v69 = UniqueStreamIdentifier;
        v85 = &v69;
        v86 = 8LL;
        v12 = *(__int64 (**)(void))(*(_QWORD *)v64 + 64LL);
        if ( (char *)v12 == (char *)CAudioSession::GetIdentifier )
          Identifier = CAudioSession::GetIdentifier(v64);
        else
          Identifier = (const WCHAR *)v12();
        TlgCreateWsz(&pDesc, Identifier);
        v60 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v63 + 40LL))(v63);
        v88 = &v60;
        v89 = 4LL;
        v73[0] = ((unsigned int)&unk_18010FDF5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v73[1] = 4;
        v74 = 0LL;
        v79 = *(unsigned __int16 **)(v9 + 8);
        v80 = *v79;
        v81 = 2;
        v82 = &unk_18010FE00;
        v83 = 62;
        v84 = 1;
        EtwEventWriteTransfer(*(_QWORD *)(v9 + 32), v73, 0LL, 0LL, 5, &v79);
      }
    }
  }
  v59 = 0LL;
  v62 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v62);
  v14 = *(__int64 (__fastcall **)(CProcessSubmixProxy *__hidden, struct IStreamGroupProxy **))(*(_QWORD *)a2 + 80LL);
  if ( v14 == CProcessSubmixProxy::GetConnectedStreamGroup )
    ConnectedStreamGroup = CProcessSubmixProxy::GetConnectedStreamGroup(a2, &v62);
  else
    ConnectedStreamGroup = v14(a2, &v62);
  v16 = ConnectedStreamGroup;
  if ( ConnectedStreamGroup < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x655,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)ConnectedStreamGroup,
      v56);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v62);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v59);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
    return v16;
  }
  else
  {
    v59 = 0LL;
    v17 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **))(*(_QWORD *)v62 + 208LL);
    if ( v17 == CBaseStreamGroupProxy::GetConnectedSaDevice )
      CBaseStreamGroupProxy::GetConnectedSaDevice(v62, &v59);
    else
      v17(v62, &v59);
    v66 = 0LL;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v66);
    (**(void (__fastcall ***)(struct ISubmixProxy *, GUID *, CProcessSubmixProxy **))a2)(
      a2,
      &GUID_f6433915_a28f_478e_ab30_7d0e99580da0,
      &v66);
    v18 = v59;
    v57 = 0;
    if ( v59 )
    {
      v19 = *(bool (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v59 + 152LL);
      if ( v19 == CProcessSubmixProxy::IsPeriodicitySensitive )
      {
        IsPeriodicitySensitive = CProcessSubmixProxy::IsPeriodicitySensitive(v59);
      }
      else
      {
        IsPeriodicitySensitive = v19(v59);
        v18 = v59;
      }
      if ( IsPeriodicitySensitive
        || ((v21 = *(bool (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v18 + 120LL),
             v21 != CSaDeviceProxy::IsLockedToPeriodicity)
          ? (IsLockedToPeriodicity = v21(v18), v18 = v59)
          : (CProcessSubmixProxy *)(IsLockedToPeriodicity = CSaDeviceProxy::IsLockedToPeriodicity(v18)),
            IsLockedToPeriodicity) )
      {
        v57 = 1;
      }
    }
    if ( v18 )
    {
      v23 = *(bool (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v18 + 128LL);
      if ( v23 == CProcessSubmixProxy::IsFormatSensitive )
        IsFormatSensitive = CProcessSubmixProxy::IsFormatSensitive(v18);
      else
        IsFormatSensitive = v23(v18);
      v58 = IsFormatSensitive;
    }
    else
    {
      v58 = 0;
    }
    if ( v66 )
    {
      v25 = *(__int64 (**)(void))(*(_QWORD *)v66 + 208LL);
      if ( (char *)v25 == (char *)CProcessSubmixProxy::GetNonLoopbackStreamCount )
        NonLoopbackStreamCount = CProcessSubmixProxy::GetNonLoopbackStreamCount(v66);
      else
        NonLoopbackStreamCount = v25();
      v27 = NonLoopbackStreamCount;
      v60 = NonLoopbackStreamCount;
    }
    else
    {
      v27 = 0;
      v60 = 0;
    }
    v28 = *(int (**)(CProcessSubmixProxy *__hidden, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL);
    if ( v28 == CProcessSubmixProxy::DestroyStream )
      v29 = CProcessSubmixProxy::DestroyStream(a2, a3);
    else
      v29 = ((__int64 (__fastcall *)(struct ISubmixProxy *, struct IAudioStreamInfo *))v28)(a2, a3);
    v30 = v29;
    fPending = v29;
    v31 = v59;
    v35 = 0;
    if ( v59 )
    {
      if ( *(bool (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v59 + 152LL) == CProcessSubmixProxy::IsPeriodicitySensitive )
      {
        v32 = CProcessSubmixProxy::IsPeriodicitySensitive(v59);
      }
      else
      {
        v32 = (*(__int64 (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v59 + 152LL))(v59);
        v31 = v59;
      }
      if ( v32
        || ((v33 = *(bool (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v31 + 120LL),
             v33 != CSaDeviceProxy::IsLockedToPeriodicity)
          ? (v34 = v33(v31), v31 = v59)
          : (CProcessSubmixProxy *)(v34 = CSaDeviceProxy::IsLockedToPeriodicity(v31)),
            v34) )
      {
        v35 = 1;
      }
    }
    if ( v31 )
    {
      v36 = *(bool (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v31 + 128LL);
      if ( v36 == CProcessSubmixProxy::IsFormatSensitive )
        v37 = CProcessSubmixProxy::IsFormatSensitive(v31);
      else
        v37 = v36(v31);
    }
    else
    {
      v37 = 0;
    }
    if ( v57 && !v35 || v58 && v37 )
    {
      std::make_shared<SaDeviceReevaluationContext,>(&v75);
      v49 = v75;
      if ( v75 )
      {
        v50 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v62 + 120LL))(v62);
        v53 = -1LL;
        do
          ++v53;
        while ( v50[v53] );
        if ( (int)_AllocStringWorker<CTCoAllocPolicy>(v52, v51, v50, v53, v56, (unsigned __int16 **)v49) >= 0 )
        {
          v54 = v72;
          ThreadpoolTimer = CreateThreadpoolTimer(
                              CAudioResourceManager::ReevaluateSaDevicesForEndpoint,
                              (char *)v72 - 8,
                              0LL);
          if ( ThreadpoolTimer )
          {
            *(_QWORD *)(v49 + 8) = ThreadpoolTimer;
            pftDueTime.dwLowDateTime = -100000000;
            pftDueTime.dwHighDateTime = -1;
            SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
            try
            {
              std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::push_back((char *)v54 + 88, &v75);
            }
            catch ( std::bad_alloc )
            {
              v27 = v60;
              v30 = fPending;
            }
          }
        }
      }
      if ( v76 )
        std::_Ref_count_base::_Decref(v76);
    }
    if ( v27 )
    {
      v38 = *(unsigned int (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v66 + 208LL);
      if ( !(v38 == CProcessSubmixProxy::GetNonLoopbackStreamCount
           ? CProcessSubmixProxy::GetNonLoopbackStreamCount(v66)
           : ((__int64 (*)(void))v38)()) )
      {
        v67 = 0LL;
        v71 = &v67;
        v40 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v71);
        if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(
                    (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v62,
                    v40) >= 0 )
        {
          v42 = (volatile signed __int32 **)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          v71 = v42;
          if ( v42 )
          {
            v43 = v67;
            if ( v67 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
            v78[0] = off_1800F20C0;
            v78[1] = v43;
            v78[7] = v78;
            v65 = 1;
            v44 = (GENERIC_EVENT *)GENERIC_EVENT::GENERIC_EVENT(v42, (__int64)v78);
          }
          else
          {
            v44 = 0LL;
          }
          if ( (v65 & 1) != 0 )
            std::_Func_class<void,>::_Tidy(v78, v41);
          if ( v44 )
          {
            if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v44, 0LL) )
              v44 = 0LL;
            if ( v44 )
              GENERIC_EVENT::`vector deleting destructor'(v44, 1);
          }
        }
        v45 = v67;
        if ( v67 )
        {
          v67 = 0LL;
          v46 = *(void (**)(void))(*(_QWORD *)v45 + 16LL);
          if ( (char *)v46 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v45);
          else
            v46();
        }
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v66);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v62);
    if ( v59 )
      (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v59 + 16LL))(v59);
    if ( v63 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v63 + 16LL))(v63);
    if ( v64 )
    {
      v47 = *(void (**)(void))(*(_QWORD *)v64 + 16LL);
      if ( (char *)v47 == (char *)CAudioSession::Release )
        CAudioSession::Release(v64);
      else
        v47();
    }
    return v30;
  }
}
