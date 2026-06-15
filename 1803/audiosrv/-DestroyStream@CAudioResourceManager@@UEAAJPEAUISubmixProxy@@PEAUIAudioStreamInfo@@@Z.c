/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?GetSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ @ 0x180018600 (-GetSerialWorkQueue@CAudioSrv@@UEAAAEAVCSerialWorkQueue@@XZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18001C000 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18001C8E0 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?GetNonLoopbackStreamCount@CProcessSubmixProxy@@UEAAIXZ @ 0x18001D630 (-GetNonLoopbackStreamCount@CProcessSubmixProxy@@UEAAIXZ.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18001E020 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18002A83C (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x18002F120 (-GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18002F700 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18002F730 (-GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800354D0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800448C0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Copy @ 0x180045C40 (std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this @ 0x180045C80 (std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Delete_this.c)
 *     ?IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x1800463E0 (-IsFormatSensitive@CProcessSubmixProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ @ 0x1800463F0 (-IsPeriodicitySensitive@CProcessSubmixProxy@@UEAA_NXZ.c)
 *     ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x180046400 (-IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180097070 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800979F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800C7BD8 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800CEC80 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800CFC44 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 (__fastcall *v5)(CAudioStream *, struct IAudioSessionInfo **); // rax
  int SessionInfo; // eax
  __int64 (__fastcall *v7)(CAudioStream *, struct IAudioProcess **); // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(CAudioStream *); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 (*v12)(void); // rax
  __int64 Identifier; // rax
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rdx
  __int64 (__fastcall *v16)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  int ConnectedStreamGroup; // eax
  unsigned int v18; // ebx
  __int64 (__fastcall *v19)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **); // rax
  CProcessSubmixProxy *v20; // rbx
  bool (__fastcall *v21)(CProcessSubmixProxy *__hidden); // rax
  bool IsPeriodicitySensitive; // al
  bool (__fastcall *v23)(CSaDeviceProxy *__hidden); // rax
  bool IsLockedToPeriodicity; // al
  bool (__fastcall *v25)(CProcessSubmixProxy *__hidden); // rax
  __int64 (*v26)(void); // rax
  int NonLoopbackStreamCount; // r13d
  __int64 (__fastcall *v28)(CProcessSubmixProxy *, struct IAudioStreamInfo *); // rax
  unsigned int v29; // eax
  unsigned int v30; // r14d
  CProcessSubmixProxy *v31; // rbx
  bool (__fastcall *v32)(CProcessSubmixProxy *__hidden); // rax
  bool v33; // al
  bool (__fastcall *v34)(CSaDeviceProxy *__hidden); // rax
  bool v35; // al
  bool v36; // si
  bool (__fastcall *v37)(CProcessSubmixProxy *__hidden); // rax
  bool v38; // al
  __int64 (__fastcall *v39)(CProcessSubmixProxy *); // rdx
  __int64 (__fastcall *v40)(CProcessSubmixProxy *); // rax
  int v41; // eax
  __int64 v42; // rbx
  __int64 (*v43)(void); // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  struct CSerialWorkQueue *v45; // r15
  signed int v46; // esi
  _QWORD *v47; // rax
  _QWORD *v48; // rbx
  __int64 (__fastcall *v49)(void *, _BYTE *); // rax
  void *v50; // rax
  HANDLE ProcessHeap; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rsi
  __int64 (__fastcall *v54)(void *, _QWORD *); // rax
  _QWORD *v55; // rdx
  __int64 v56; // rax
  std::_Ref_count_base *v57; // rcx
  __int64 (__fastcall *v58)(void *); // rax
  struct _TP_WORK *ThreadpoolWork; // r14
  __int64 (__fastcall *v60)(void *); // rax
  void (*v61)(void); // rax
  CProcessSubmixProxy *v62; // rcx
  struct IStreamGroupProxy *v63; // rcx
  void (*v64)(void); // rax
  __int64 v66; // rdx
  void *v67; // r8
  void *v68; // rax
  CAudioResourceManager *v69; // rsi
  _RecurringTask **v70; // rbx
  unsigned int v71; // edx
  _RecurringTask *v72; // rcx
  std::_Ref_count_base *v73; // rcx
  __int64 v74; // rax
  int v75; // eax
  const char *v76; // r9
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v79; // eax
  signed int v80; // eax
  int v81; // [rsp+20h] [rbp-278h]
  bool v82; // [rsp+30h] [rbp-268h]
  bool IsFormatSensitive; // [rsp+31h] [rbp-267h]
  CProcessSubmixProxy *v84; // [rsp+38h] [rbp-260h] BYREF
  unsigned int v85; // [rsp+40h] [rbp-258h]
  struct IStreamGroupProxy *v86; // [rsp+48h] [rbp-250h] BYREF
  int v87; // [rsp+50h] [rbp-248h]
  struct IAudioProcess *v88; // [rsp+58h] [rbp-240h] BYREF
  CAudioSession *v89; // [rsp+60h] [rbp-238h] BYREF
  CProcessSubmixProxy *v90; // [rsp+68h] [rbp-230h] BYREF
  _BYTE *v91; // [rsp+70h] [rbp-228h]
  WINBOOL fPending; // [rsp+78h] [rbp-220h] BYREF
  int v93; // [rsp+7Ch] [rbp-21Ch] BYREF
  LPVOID Context; // [rsp+80h] [rbp-218h] BYREF
  __int64 v95; // [rsp+88h] [rbp-210h] BYREF
  CAudioResourceManager *v96; // [rsp+90h] [rbp-208h]
  __int64 v97; // [rsp+98h] [rbp-200h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-1F8h] BYREF
  _QWORD *v99; // [rsp+A8h] [rbp-1F0h]
  __int64 v100; // [rsp+B0h] [rbp-1E8h] BYREF
  std::_Ref_count_base *v101; // [rsp+B8h] [rbp-1E0h]
  _DWORD v102[2]; // [rsp+C0h] [rbp-1D8h] BYREF
  __int64 v103; // [rsp+C8h] [rbp-1D0h]
  union _RTL_RUN_ONCE *v104; // [rsp+D0h] [rbp-1C8h] BYREF
  int v105; // [rsp+D8h] [rbp-1C0h]
  _BYTE v106[56]; // [rsp+E0h] [rbp-1B8h] BYREF
  void *v107; // [rsp+118h] [rbp-180h]
  _QWORD v108[7]; // [rsp+120h] [rbp-178h] BYREF
  void *v109; // [rsp+158h] [rbp-140h]
  __int64 v110; // [rsp+160h] [rbp-138h]
  _QWORD *v111; // [rsp+168h] [rbp-130h]
  __int64 v112; // [rsp+170h] [rbp-128h] BYREF
  _QWORD v113[11]; // [rsp+180h] [rbp-118h] BYREF
  void *v114[2]; // [rsp+1D8h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+1E8h] [rbp-B0h]
  unsigned __int16 *v116; // [rsp+200h] [rbp-98h] BYREF
  int v117; // [rsp+208h] [rbp-90h]
  int v118; // [rsp+20Ch] [rbp-8Ch]
  void *v119; // [rsp+210h] [rbp-88h]
  int v120; // [rsp+218h] [rbp-80h]
  int v121; // [rsp+21Ch] [rbp-7Ch]
  __int64 *v122; // [rsp+220h] [rbp-78h]
  __int64 v123; // [rsp+228h] [rbp-70h]
  const WCHAR *v124; // [rsp+230h] [rbp-68h]
  int v125; // [rsp+238h] [rbp-60h]
  int v126; // [rsp+23Ch] [rbp-5Ch]
  int *v127; // [rsp+240h] [rbp-58h]
  __int64 v128; // [rsp+248h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  v110 = -2LL;
  v96 = this;
  v88 = 0LL;
  v89 = 0LL;
  v5 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioSessionInfo **))(*(_QWORD *)a3 + 32LL);
  if ( v5 == CAudioStream::GetSessionInfo )
    SessionInfo = CAudioStream::GetSessionInfo(a3, &v89);
  else
    SessionInfo = v5(a3, &v89);
  if ( SessionInfo >= 0 && v89 )
  {
    v88 = 0LL;
    v7 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioProcess **))(*(_QWORD *)a3 + 24LL);
    v8 = v7 == CAudioStream::GetProcess ? CAudioStream::GetProcess(a3, &v88) : v7(a3, &v88);
    if ( v8 >= 0 && v89 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v104 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_18018A2A0;
        qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
        qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v105 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v104, v66, v67);
      }
      v9 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v9 > 4u )
      {
        v10 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a3 + 80LL);
        if ( v10 == CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(a3);
        else
          UniqueStreamIdentifier = v10(a3);
        v97 = UniqueStreamIdentifier;
        v122 = &v97;
        v123 = 8LL;
        v12 = *(__int64 (**)(void))(*(_QWORD *)v89 + 64LL);
        if ( (char *)v12 == (char *)CAudioSession::GetIdentifier )
          Identifier = (__int64)CAudioSession::GetIdentifier(v89);
        else
          Identifier = v12();
        v14 = (const WCHAR *)Identifier;
        v15 = &word_180133238;
        LODWORD(Identifier) = 0;
        if ( v14 )
        {
          v15 = v14;
          Identifier = -1LL;
          do
            ++Identifier;
          while ( v14[Identifier] );
        }
        v124 = v15;
        v125 = 2 * Identifier + 2;
        v126 = 0;
        v93 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v88 + 40LL))(v88);
        v127 = &v93;
        v128 = 4LL;
        v102[0] = ((unsigned int)&unk_180146937 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v102[1] = 4;
        v103 = 0LL;
        v116 = *(unsigned __int16 **)(v9 + 8);
        v117 = *v116;
        v118 = 2;
        v119 = &unk_180146942;
        v120 = 62;
        v121 = 1;
        EtwEventWriteTransfer(*(_QWORD *)(v9 + 32), v102, 0LL, 0LL, 5, &v116);
      }
    }
  }
  v84 = 0LL;
  v86 = 0LL;
  v16 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)a2 + 80LL);
  if ( v16 == CProcessSubmixProxy::GetConnectedStreamGroup )
    ConnectedStreamGroup = CProcessSubmixProxy::GetConnectedStreamGroup(a2, &v86);
  else
    ConnectedStreamGroup = v16(a2, &v86);
  v18 = ConnectedStreamGroup;
  if ( ConnectedStreamGroup < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)ConnectedStreamGroup,
      v81);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v86);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v84);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v88);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v89);
    return v18;
  }
  v84 = 0LL;
  v19 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **))(*(_QWORD *)v86 + 208LL);
  if ( v19 == CBaseStreamGroupProxy::GetConnectedSaDevice )
    CBaseStreamGroupProxy::GetConnectedSaDevice(v86, &v84);
  else
    v19(v86, &v84);
  v90 = 0LL;
  (**(void (__fastcall ***)(struct ISubmixProxy *, GUID *, CProcessSubmixProxy **))a2)(
    a2,
    &GUID_f6433915_a28f_478e_ab30_7d0e99580da0,
    &v90);
  v20 = v84;
  if ( v84 )
  {
    v21 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v84 + 152LL);
    if ( v21 == CProcessSubmixProxy::IsPeriodicitySensitive )
    {
      IsPeriodicitySensitive = CProcessSubmixProxy::IsPeriodicitySensitive(v84);
    }
    else
    {
      IsPeriodicitySensitive = v21(v84);
      v20 = v84;
    }
    v82 = 1;
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
        v20 = v84;
      }
      if ( !IsLockedToPeriodicity )
        v82 = 0;
    }
    if ( v20 )
    {
      v25 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v20 + 128LL);
      if ( v25 == CProcessSubmixProxy::IsFormatSensitive )
        IsFormatSensitive = CProcessSubmixProxy::IsFormatSensitive(v20);
      else
        IsFormatSensitive = v25(v20);
      goto LABEL_37;
    }
  }
  else
  {
    v82 = 0;
  }
  IsFormatSensitive = 0;
LABEL_37:
  if ( v90 )
  {
    v26 = *(__int64 (**)(void))(*(_QWORD *)v90 + 208LL);
    if ( (char *)v26 == (char *)CProcessSubmixProxy::GetNonLoopbackStreamCount )
      NonLoopbackStreamCount = CProcessSubmixProxy::GetNonLoopbackStreamCount(v90);
    else
      NonLoopbackStreamCount = v26();
  }
  else
  {
    NonLoopbackStreamCount = 0;
  }
  v87 = NonLoopbackStreamCount;
  v28 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL);
  if ( v28 == CProcessSubmixProxy::DestroyStream )
    v29 = CProcessSubmixProxy::DestroyStream(a2, a3);
  else
    v29 = v28(a2, a3);
  v30 = v29;
  v85 = v29;
  v31 = v84;
  if ( v84 )
  {
    v32 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v84 + 152LL);
    if ( v32 == CProcessSubmixProxy::IsPeriodicitySensitive )
    {
      v33 = CProcessSubmixProxy::IsPeriodicitySensitive(v84);
    }
    else
    {
      v33 = v32(v84);
      v31 = v84;
    }
    v36 = 1;
    if ( !v33 )
    {
      v34 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v31 + 120LL);
      if ( v34 == CSaDeviceProxy::IsLockedToPeriodicity )
      {
        v35 = CSaDeviceProxy::IsLockedToPeriodicity(v31);
      }
      else
      {
        v35 = v34(v31);
        v31 = v84;
      }
      if ( !v35 )
        v36 = 0;
    }
    if ( v31 )
    {
      v37 = *(bool (__fastcall **)(CProcessSubmixProxy *__hidden))(*(_QWORD *)v31 + 128LL);
      if ( v37 == CProcessSubmixProxy::IsFormatSensitive )
      {
        v38 = CProcessSubmixProxy::IsFormatSensitive(v31);
      }
      else
      {
        v38 = v37(v31);
        v31 = v84;
      }
      goto LABEL_53;
    }
  }
  else
  {
    v36 = 0;
  }
  v38 = 0;
LABEL_53:
  if ( v82 && !v36 || IsFormatSensitive && v38 )
  {
    try
    {
      v68 = (void *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v86 + 120LL))(v86);
      std::wstring::wstring(v114, v68);
      v69 = v96;
      std::map<std::wstring,std::unique_ptr<_RecurringTask>>::_Try_emplace<std::wstring,>((char *)v96 + 48, &v112, v114);
      v70 = (_RecurringTask **)(v112 + 64);
      v71 = si128.m128i_u32[2];
      if ( si128.m128i_i64[1] >= 8uLL )
        std::_Deallocate((_QWORD *)v114[0], si128.m128i_i64[1] + 1, 2uLL);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v114[0]) = 0;
      v72 = *v70;
      *v70 = 0LL;
      if ( v72 )
        _RecurringTask::`scalar deleting destructor'(v72, v71);
      v98 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v86 + 120LL))(v86);
      std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v100, &v98);
      v96 = (CAudioResourceManager *)v113;
      v73 = v101;
      if ( v101 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v101 + 2);
        v73 = v101;
      }
      v113[0] = off_180122F68;
      v113[1] = (char *)v69 - 8;
      v113[2] = v100;
      v113[3] = v73;
      v113[7] = v113;
      v74 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
      v75 = CSerialWorkQueue::QueueRecurringItem(v74, 0x2710u, 0, (__int64)v113, v70);
      if ( v75 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6A0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v75,
          v81);
      if ( v101 )
        std::_Ref_count_base::_Decref(v101);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x6A2,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        v76);
      NonLoopbackStreamCount = v87;
      v30 = v85;
    }
    v31 = v84;
  }
  v39 = CProcessSubmixProxy::GetNonLoopbackStreamCount;
  if ( !NonLoopbackStreamCount )
    goto LABEL_107;
  v40 = *(__int64 (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v90 + 208LL);
  if ( v40 == CProcessSubmixProxy::GetNonLoopbackStreamCount )
  {
    v41 = CProcessSubmixProxy::GetNonLoopbackStreamCount(v90);
  }
  else
  {
    v41 = ((__int64 (__fastcall *)(CProcessSubmixProxy *, __int64 (__fastcall *)(CProcessSubmixProxy *)))v40)(
            v90,
            CProcessSubmixProxy::GetNonLoopbackStreamCount);
    v31 = v84;
  }
  if ( v41 )
    goto LABEL_107;
  v95 = 0LL;
  if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v86, &v95) >= 0 )
  {
    v99 = v108;
    v42 = v95;
    if ( v95 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 8LL))(v95);
    v108[0] = off_1801213E8;
    v108[1] = v42;
    v109 = v108;
    v96 = (CAudioResourceManager *)v108;
    v43 = *(__int64 (**)(void))(*(_QWORD *)g_AudioService + 112LL);
    if ( (char *)v43 == (char *)CAudioSrv::GetSerialWorkQueue )
      SerialWorkQueue = CAudioSrv::GetSerialWorkQueue(g_AudioService);
    else
      SerialWorkQueue = (struct CSerialWorkQueue *)v43();
    v45 = SerialWorkQueue;
    v46 = 0;
    if ( *((_BYTE *)SerialWorkQueue + 80) )
      goto LABEL_95;
    if ( !*(_QWORD *)SerialWorkQueue )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v45 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v46 = LastError;
        if ( LastError > 0 )
          v46 = (unsigned __int16)LastError | 0x80070000;
        if ( v46 < 0 )
          goto LABEL_95;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v45, 1u) )
      {
        v79 = GetLastError();
        v46 = v79;
        if ( v79 > 0 )
          v46 = (unsigned __int16)v79 | 0x80070000;
        if ( v46 < 0 )
          goto LABEL_95;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v45, 1u);
      *((_QWORD *)v45 + 2) = *(_QWORD *)v45;
    }
    v47 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v48 = v47;
    v91 = v47;
    if ( v47 )
    {
      *v47 = 0LL;
      v47[1] = 0LL;
      v47[2] = 0LL;
    }
    else
    {
      v48 = 0LL;
    }
    v111 = v48;
    if ( v48 )
    {
      v91 = v106;
      v107 = 0LL;
      if ( v109 )
      {
        v49 = **(__int64 (__fastcall ***)(void *, _BYTE *))v109;
        if ( (char *)v49 == (char *)std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Copy )
          v50 = (void *)std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Copy(v109, v106);
        else
          v50 = (void *)v49(v109, v106);
        v107 = v50;
      }
      v91 = v106;
      v48[2] = v45;
      ProcessHeap = GetProcessHeap();
      v52 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v53 = v52;
      v99 = v52;
      if ( v52 )
      {
        *((_DWORD *)v52 + 2) = 1;
        *((_DWORD *)v52 + 3) = 1;
        *v52 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
        v98 = (__int64)(v52 + 2);
        v52[9] = 0LL;
        if ( v107 )
        {
          v54 = **(__int64 (__fastcall ***)(void *, _QWORD *))v107;
          v55 = v53 + 2;
          if ( (char *)v54 == (char *)std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Copy )
            v56 = std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Copy(v107, v55);
          else
            v56 = v54(v107, v55);
          v53[9] = v56;
        }
      }
      else
      {
        v53 = 0LL;
      }
      *v48 = v53 + 2;
      v57 = (std::_Ref_count_base *)v48[1];
      v48[1] = v53;
      if ( v57 )
        std::_Ref_count_base::_Decref(v57);
      if ( *v48 )
        v46 = 0;
      else
        v46 = -2147024882;
      if ( v107 )
      {
        if ( v107 == v106 )
          v39 = 0LL;
        else
          LOBYTE(v39) = 1;
        v58 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v107 + 32LL);
        if ( v58 == std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this )
          std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this(v107);
        else
          ((void (__fastcall *)(void *, __int64 (__fastcall *)(CProcessSubmixProxy *)))v58)(v107, v39);
        v107 = 0LL;
      }
      if ( v46 < 0 )
        goto LABEL_92;
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v48,
                         (PTP_CALLBACK_ENVIRON)((char *)v45 + 8));
      if ( ThreadpoolWork )
      {
        v46 = 0;
      }
      else
      {
        v80 = GetLastError();
        v46 = v80;
        if ( v80 > 0 )
          v46 = (unsigned __int16)v80 | 0x80070000;
        if ( v46 < 0 )
          goto LABEL_92;
      }
      v48 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v46 = -2147024882;
    }
LABEL_92:
    if ( v48 )
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v48, (unsigned int)v39);
    v30 = v85;
LABEL_95:
    if ( v109 )
    {
      if ( v109 == v108 )
        v39 = 0LL;
      else
        LOBYTE(v39) = 1;
      v60 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL);
      if ( v60 == std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this )
        std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this(v109);
      else
        ((void (__fastcall *)(void *, __int64 (__fastcall *)(CProcessSubmixProxy *)))v60)(v109, v39);
      v109 = 0LL;
    }
    if ( v46 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6B5,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v46,
        v81);
  }
  if ( v95 )
  {
    v61 = *(void (**)(void))(*(_QWORD *)v95 + 16LL);
    if ( (char *)v61 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v95);
    else
      v61();
  }
  v31 = v84;
LABEL_107:
  v62 = v90;
  if ( v90 )
  {
    v90 = 0LL;
    (*(void (__fastcall **)(CProcessSubmixProxy *, __int64 (__fastcall *)(CProcessSubmixProxy *)))(*(_QWORD *)v62 + 16LL))(
      v62,
      v39);
    v31 = v84;
  }
  v63 = v86;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(struct IStreamGroupProxy *, __int64 (__fastcall *)(CProcessSubmixProxy *)))(*(_QWORD *)v63 + 16LL))(
      v63,
      v39);
    v31 = v84;
  }
  if ( v31 )
    (*(void (__fastcall **)(CProcessSubmixProxy *, __int64 (__fastcall *)(CProcessSubmixProxy *)))(*(_QWORD *)v31 + 16LL))(
      v31,
      v39);
  if ( v88 )
    (*(void (__fastcall **)(struct IAudioProcess *, __int64 (__fastcall *)(CProcessSubmixProxy *)))(*(_QWORD *)v88 + 16LL))(
      v88,
      v39);
  if ( v89 )
  {
    v64 = *(void (**)(void))(*(_QWORD *)v89 + 16LL);
    if ( (char *)v64 == (char *)CAudioSession::Release )
      CAudioSession::Release(v89);
    else
      v64();
  }
  return v30;
}
