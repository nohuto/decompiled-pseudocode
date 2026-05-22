/*
 * XREFs of ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180084A78 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z @ 0x18000AD9C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800177BC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x180023E28 (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x180063E10 (-Create@DragNDropProcessor@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@Z@std@@@Z @ 0x180080FF8 (-Initialize@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x1800811BC (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ??$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVActivationProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x180081AE8 (--$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180089C3C (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z @ 0x1800AF55C (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z.c)
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800B2144 (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1800B2ECC (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x1800B4C9C (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1800B60A4 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800B673C (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800B6B0C (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=28
__int64 __fastcall DWMInputRouter::Initialize(DWMInputRouter *this)
{
  __int64 *v2; // r14
  __int64 v3; // rcx
  int Descriptor; // r15d
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  _QWORD *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // r8
  const char *v30; // r9
  __int64 v31; // rcx
  const char *v32; // r9
  _QWORD *v33; // rsi
  __int64 v34; // rcx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  void (__fastcall ***v36)(_QWORD); // rax
  void (__fastcall ***v37)(_QWORD); // r14
  void (__fastcall ***v38)(_QWORD); // rdi
  void (__fastcall ***v39)(_QWORD); // rcx
  void (__fastcall **v40)(_QWORD); // rcx
  void (__fastcall **v41)(_QWORD); // rsi
  _DWORD *v42; // rax
  _DWORD *v43; // rdi
  struct IContextualProcessor *v44; // rcx
  struct TapProcessor *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  DWMInputRouter *v48; // rcx
  struct IContextualProcessor *v49; // rcx
  struct TapProcessor *v50; // rsi
  struct IContextualProcessor *v51; // rcx
  struct IContextualProcessor *v52; // rcx
  struct IContextualProcessor *v53; // rcx
  struct IContextualProcessor *v54; // rcx
  struct IContextualProcessor *v55; // rcx
  struct IContextualProcessor *v56; // rcx
  struct IContextualProcessor *v57; // rcx
  struct IContextualProcessor *v58; // rcx
  struct IContextualProcessor *v59; // rcx
  struct IContextualProcessor *v60; // rcx
  struct IContextualProcessor *v61; // rcx
  struct IContextualProcessor *v62; // rcx
  char *v63; // rsi
  struct IContextualProcessor *v64; // rcx
  struct IContextualProcessor *v65; // rcx
  struct TapProcessor *v66; // r14
  struct IContextualProcessor *v67; // rcx
  struct IContextualProcessor *v68; // rcx
  struct IContextualProcessor *v69; // rcx
  struct IContextualProcessor *v70; // rcx
  struct IContextualProcessor *v71; // rcx
  struct IContextualProcessor *v72; // rcx
  struct IContextualProcessor *v73; // rcx
  struct IContextualProcessor *v74; // rcx
  struct IContextualProcessor *v75; // rcx
  struct IContextualProcessor *v76; // rcx
  struct IContextualProcessor *v77; // rcx
  struct IContextualProcessor *v78; // rcx
  struct IContextualProcessor *v79; // rcx
  struct IContextualProcessor *v80; // rcx
  struct TapProcessor *v81; // rax
  struct IContextualProcessor *v82; // rcx
  struct IContextualProcessor *v83; // rcx
  struct IContextualProcessor *v84; // rcx
  struct IContextualProcessor *v85; // rcx
  __int64 v86; // rcx
  struct InputSystemServerConnection *v87; // rsi
  char *v88; // r14
  __int64 v89; // rcx
  struct IContextualProcessor *v91; // [rsp+40h] [rbp-C0h] BYREF
  struct IContextualProcessor *v92; // [rsp+48h] [rbp-B8h] BYREF
  struct IContextualProcessor *v93; // [rsp+50h] [rbp-B0h] BYREF
  struct IContextualProcessor *v94; // [rsp+58h] [rbp-A8h] BYREF
  struct IContextualProcessor *v95; // [rsp+60h] [rbp-A0h] BYREF
  struct IContextualProcessor *v96; // [rsp+68h] [rbp-98h] BYREF
  struct IContextualProcessor *v97; // [rsp+70h] [rbp-90h] BYREF
  __int64 v98; // [rsp+78h] [rbp-88h] BYREF
  struct TapProcessor *v99; // [rsp+80h] [rbp-80h] BYREF
  struct InputRedirectionProcessor *v100; // [rsp+88h] [rbp-78h] BYREF
  struct TapProcessor *v101; // [rsp+90h] [rbp-70h] BYREF
  struct EdgyProcessor *v102; // [rsp+98h] [rbp-68h] BYREF
  struct TapProcessor *v103; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER *v104; // [rsp+A8h] [rbp-58h] BYREF
  struct ComboButtonProcessor *v105; // [rsp+B0h] [rbp-50h] BYREF
  struct RawButtonProcessor *v106; // [rsp+B8h] [rbp-48h] BYREF
  char *v107; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v109; // [rsp+D0h] [rbp-30h] BYREF
  char v110; // [rsp+D8h] [rbp-28h]
  __int64 v111; // [rsp+E0h] [rbp-20h] BYREF
  char v112; // [rsp+E8h] [rbp-18h]
  __int64 v113; // [rsp+F0h] [rbp-10h] BYREF
  char v114; // [rsp+F8h] [rbp-8h]
  _DWORD *v115; // [rsp+100h] [rbp+0h]
  DWMInputRouter *v116; // [rsp+108h] [rbp+8h] BYREF
  struct TapProcessor *v117; // [rsp+110h] [rbp+10h]
  __int64 v118; // [rsp+118h] [rbp+18h]
  DWMInputRouter *v119; // [rsp+120h] [rbp+20h]
  DWMInputRouter *v120; // [rsp+128h] [rbp+28h]
  DWMInputRouter *v121; // [rsp+130h] [rbp+30h]
  _QWORD v122[8]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v123[17]; // [rsp+178h] [rbp+78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]
  unsigned int v125; // [rsp+210h] [rbp+110h] BYREF
  int v126; // [rsp+218h] [rbp+118h]
  struct IContextualProcessor *v127; // [rsp+220h] [rbp+120h] BYREF
  struct IContextualProcessor *v128; // [rsp+228h] [rbp+128h] BYREF

  v118 = -2LL;
  v126 = 0;
  v113 = 0LL;
  v114 = 0;
  v111 = 0LL;
  v112 = 0;
  v109 = 0LL;
  v110 = 0;
  v125 = 0;
  v98 = 0LL;
  v2 = (__int64 *)((char *)this + 144);
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Descriptor = CoreUICreate(v2);
  if ( Descriptor < 0 )
    goto LABEL_4;
  v5 = (_QWORD *)((char *)this + 152);
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Descriptor = CoreUIFactoryCreate((char *)this + 152);
  if ( Descriptor < 0 )
    goto LABEL_4;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v113, v7, (__int64)c_wszMessagePortNames);
  if ( Descriptor < 0 )
    goto LABEL_4;
  v8 = *v2;
  v9 = *((_QWORD *)this + 20);
  if ( v9 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v8 + 56LL))(
                 v8,
                 v113,
                 (char *)this + 160);
  if ( Descriptor < 0 )
    goto LABEL_4;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v111, v10, (__int64)c_wszMessagePortNames);
  if ( Descriptor < 0 )
    goto LABEL_4;
  v11 = *v2;
  v12 = (_QWORD *)((char *)this + 168);
  v13 = *((_QWORD *)this + 21);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v11 + 56LL))(
                 v11,
                 v111,
                 (char *)this + 168);
  if ( Descriptor < 0 )
    goto LABEL_4;
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v5 + 24LL))(
                 *v5,
                 &GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300,
                 &v125);
  if ( Descriptor < 0 )
    goto LABEL_4;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v14);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v15 = *v5;
    v16 = *((_QWORD *)this + 23);
    if ( v16 )
    {
      *((_QWORD *)this + 23) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    Descriptor = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v15 + 32LL))(
                   v15,
                   (char *)this + 16,
                   0LL,
                   v125,
                   L"IInputDisplayDeviceBindingApi",
                   *v12,
                   (char *)this + 184);
    if ( Descriptor < 0 )
      goto LABEL_4;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v5 + 24LL))(
                 *v5,
                 &GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062,
                 &v125);
  if ( Descriptor < 0 )
    goto LABEL_4;
  v17 = *v5;
  v18 = *((_QWORD *)this + 38);
  if ( v18 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v17 + 32LL))(
                 v17,
                 (char *)this + 24,
                 0LL,
                 v125,
                 L"IRemoteViewHitTestApi",
                 *v12,
                 (char *)this + 304);
  if ( Descriptor < 0 )
    goto LABEL_4;
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v5 + 24LL))(
                 *v5,
                 &GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc,
                 &v125);
  if ( Descriptor < 0 )
    goto LABEL_4;
  v19 = *v5;
  v20 = *((_QWORD *)this + 39);
  if ( v20 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v19 + 32LL))(
                 v19,
                 (char *)this + 32,
                 0LL,
                 v125,
                 L"IRemoteViewHitTestRequestApi",
                 *v12,
                 (char *)this + 312);
  if ( Descriptor < 0 )
    goto LABEL_4;
  v21 = *((_QWORD *)this + 33);
  if ( v21 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  Descriptor = DWMCursorBroker::Create(this, (struct ICursorBroker **)this + 33);
  if ( Descriptor < 0 )
    goto LABEL_4;
  v22 = *v2;
  v23 = v98;
  if ( v98 )
  {
    v98 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v98);
  if ( Descriptor < 0 )
    goto LABEL_4;
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v109,
                 v24,
                 (__int64)L"Input\\Service.AlpcPort\\Server");
  if ( Descriptor < 0 )
    goto LABEL_4;
  v25 = *v2;
  v26 = (_QWORD *)((char *)this + 176);
  v27 = *((_QWORD *)this + 22);
  if ( v27 )
  {
    *v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v25 + 56LL))(
                 v25,
                 v109,
                 (char *)this + 176);
  if ( Descriptor < 0 )
    goto LABEL_4;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 60,
    *v2);
  v28 = *v2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 60,
    *((_QWORD *)this + 60));
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), DWMInputRouter *, _QWORD, char *))(*(_QWORD *)v28 + 80LL))(
                 v28,
                 DWMInputRouter::OnFocusedThreadChangedStatic,
                 this,
                 *v26,
                 (char *)this + 488);
  if ( Descriptor < 0 )
    goto LABEL_4;
  Descriptor = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v98 + 40LL))(
                 v98,
                 L"System\\Input\\InputFocusEndpoint",
                 *((_QWORD *)this + 61),
                 1LL);
  if ( Descriptor < 0 )
    goto LABEL_4;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v30);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    {
      v119 = this;
      v122[0] = off_1800F0340;
      v122[1] = this;
      v122[7] = v122;
      KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize((char *)this + 352, v2, v29, v122);
    }
    v120 = this;
    v123[0] = off_1800F0310;
    v123[1] = this;
    v123[7] = v123;
    KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::Initialize((char *)this + 496, v2, v29, v123);
  }
  v31 = *((_QWORD *)this + 27);
  if ( v31 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  Descriptor = DWMInputDisplay::Create(0LL, (struct IInputDisplay **)this + 27);
  if ( Descriptor < 0 )
    goto LABEL_4;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v32);
    JUMPOUT(0x18007D208LL);
  }
  v33 = (_QWORD *)((char *)this + 336);
  v34 = *((_QWORD *)this + 42);
  if ( *(_BYTE *)ISMTestMode::s_instance )
  {
    if ( v34 )
    {
      *v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    Descriptor = NonBamoInputDeliveryServer::Create(
                   (__int64)this + 56,
                   (__int64)L"InputDeliveryTest",
                   1,
                   (struct IInputDeliveryServer **)this + 42);
    if ( Descriptor < 0 )
    {
LABEL_4:
      if ( IsDebuggerPresent() )
        __debugbreak();
LABEL_6:
      RaiseFailFastException(0LL, 0LL, 0);
      goto LABEL_258;
    }
  }
  else
  {
    if ( v34 )
    {
      *v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    Descriptor = NonBamoInputDeliveryServer::Create(
                   (__int64)this + 56,
                   (__int64)L"System\\InputDelivery",
                   0,
                   (struct IInputDeliveryServer **)this + 42);
    if ( Descriptor < 0 )
      goto LABEL_4;
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v36 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                          + 19)
                                                                                        + 8LL)
                                                                            + 72LL))(*((_QWORD *)BamoServerConnection
                                                                                     + 19) + 8LL);
    v37 = v36;
    v38 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 43);
    if ( v38 != v36 )
    {
      if ( v36 )
      {
        (**v36)(v36);
        v38 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 43);
      }
      v39 = v38;
      *((_QWORD *)this + 43) = v37;
      v38 = v37;
      if ( v39 )
      {
        (*v39)[1](v39);
        v38 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 43);
      }
    }
    v40 = v38[29];
    v41 = (void (__fastcall **)(_QWORD))*v33;
    if ( v40 != v41 )
    {
      if ( v41 )
      {
        (*((void (__fastcall **)(_QWORD))*v41 + 1))(v41);
        v40 = v38[29];
      }
      v38[29] = v41;
      if ( v40 )
        (*((void (__fastcall **)(_QWORD))*v40 + 2))(v40);
    }
  }
  v115 = 0LL;
  v42 = malloc(0x28uLL);
  v43 = v42;
  if ( v42 )
  {
    memset_0(v42, 0, 0x28uLL);
    *(_QWORD *)v43 = &RefCountedObject::`vftable';
    v43[2] = 1;
    *(_QWORD *)v43 = &ContextualProcessorManager::`vftable';
    *((_QWORD *)v43 + 2) = 0LL;
    *((_QWORD *)v43 + 3) = 0LL;
    *((_QWORD *)v43 + 4) = 0LL;
  }
  else
  {
    v43 = 0LL;
  }
  if ( !v43 )
  {
    Descriptor = -2147024882;
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_6;
  }
  v115 = v43;
  v99 = 0LL;
  v127 = 0LL;
  Descriptor = TapProcessor::Create(&v99);
  if ( Descriptor < 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    v44 = v127;
    if ( v127 )
    {
      v127 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = v99;
    goto LABEL_84;
  }
  v49 = v127;
  if ( v127 )
  {
    v127 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v49 + 16LL))(v49);
  }
  v50 = v99;
  Descriptor = (**(__int64 (__fastcall ***)(struct TapProcessor *, GUID *, struct IContextualProcessor **))v99)(
                 v99,
                 &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                 &v127);
  if ( Descriptor < 0
    || (Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v127),
        Descriptor < 0) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    v51 = v127;
    if ( v127 )
    {
      v127 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v51 + 16LL))(v51);
    }
    goto LABEL_95;
  }
  v52 = v127;
  if ( v127 )
  {
    v127 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v52 + 16LL))(v52);
  }
  v99 = 0LL;
  (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
  v100 = 0LL;
  v128 = 0LL;
  Descriptor = InputRedirectionProcessor::Create((DWMInputRouter *)((char *)this + 48), &v100);
  if ( Descriptor < 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    v53 = v128;
    if ( v128 )
    {
      v128 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v45 = v100;
    goto LABEL_84;
  }
  v54 = v128;
  if ( v128 )
  {
    v128 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v50 = v100;
  Descriptor = (**(__int64 (__fastcall ***)(struct InputRedirectionProcessor *, GUID *, struct IContextualProcessor **))v100)(
                 v100,
                 &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                 &v128);
  if ( Descriptor < 0
    || (Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v128),
        Descriptor < 0) )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    v55 = v128;
    if ( v128 )
    {
      v128 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v55 + 16LL))(v55);
    }
    goto LABEL_95;
  }
  v56 = v128;
  if ( v128 )
  {
    v128 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v56 + 16LL))(v56);
  }
  v100 = 0LL;
  (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
  if ( ((1LL << gdwDeviceFamily) & 0xDDB5) != 0 )
  {
    v101 = 0LL;
    v91 = 0LL;
    v116 = this;
    Descriptor = Microsoft::WRL::Details::MakeAndInitialize<ActivationProcessor,ActivationProcessor,DWMInputRouter *>(
                   &v101,
                   &v116);
    if ( Descriptor < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      v45 = v101;
      goto LABEL_84;
    }
    v50 = v101;
    Descriptor = (**(__int64 (__fastcall ***)(struct TapProcessor *, GUID *, struct IContextualProcessor **))v101)(
                   v101,
                   &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                   &v91);
    if ( Descriptor < 0
      || (Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v91),
          Descriptor < 0) )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      v57 = v91;
      if ( v91 )
      {
        v91 = 0LL;
        (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v57 + 16LL))(v57);
      }
      goto LABEL_95;
    }
    v58 = v91;
    if ( v91 )
    {
      v91 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v101 = 0LL;
    (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
  }
  if ( gbIsRunningWithCShell )
  {
    v102 = 0LL;
    v92 = 0LL;
    Descriptor = EdgyProcessor::Create(&v102);
    if ( Descriptor < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      v59 = v92;
      if ( v92 )
      {
        v92 = 0LL;
        (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v59 + 16LL))(v59);
      }
      v45 = v102;
      goto LABEL_84;
    }
    v60 = v92;
    if ( v92 )
    {
      v92 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v60 + 16LL))(v60);
    }
    v50 = v102;
    Descriptor = (**(__int64 (__fastcall ***)(struct EdgyProcessor *, GUID *, struct IContextualProcessor **))v102)(
                   v102,
                   &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                   &v92);
    if ( Descriptor < 0
      || (Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v92),
          Descriptor < 0) )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      v61 = v92;
      if ( v92 )
      {
        v92 = 0LL;
        (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v61 + 16LL))(v61);
      }
      goto LABEL_95;
    }
    v62 = v92;
    if ( v92 )
    {
      v92 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v102 = 0LL;
    (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
    if ( gbIsRunningWithCShell )
    {
      v103 = 0LL;
      v93 = 0LL;
      v63 = (char *)this + 8;
      v107 = (char *)this + 8;
      if ( this != (DWMInputRouter *)-8LL )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v63 + 8LL))((char *)this + 8);
      Descriptor = DragNDropProcessorLegacy::Create(&v107, &v103);
      if ( this != (DWMInputRouter *)-8LL )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v63 + 16LL))((char *)this + 8);
      }
      if ( Descriptor < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
        v64 = v93;
        if ( v93 )
        {
          v93 = 0LL;
          (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v64 + 16LL))(v64);
        }
        v45 = v103;
        goto LABEL_84;
      }
      v65 = v93;
      if ( v93 )
      {
        v93 = 0LL;
        (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v65 + 16LL))(v65);
      }
      v66 = v103;
      Descriptor = (**(__int64 (__fastcall ***)(struct TapProcessor *, GUID *, struct IContextualProcessor **))v103)(
                     v103,
                     &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                     &v93);
      if ( Descriptor < 0
        || (Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v93),
            Descriptor < 0) )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
        v67 = v93;
        if ( v93 )
        {
          v93 = 0LL;
          (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v67 + 16LL))(v67);
        }
        if ( !v66 )
          goto LABEL_87;
        v46 = *(_QWORD *)v66;
        goto LABEL_86;
      }
      v68 = v93;
      if ( v93 )
      {
        v93 = 0LL;
        (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v103 = 0LL;
      (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v66 + 16LL))(v66);
      if ( gbIsRunningWithCShell )
      {
        v104 = 0LL;
        v94 = 0LL;
        v108 = (__int64)this + 8;
        if ( this != (DWMInputRouter *)-8LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v63 + 8LL))((char *)this + 8);
        Descriptor = DragNDropProcessor::Create(&v108, &v104);
        if ( this != (DWMInputRouter *)-8LL )
        {
          v108 = 0LL;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v63 + 16LL))((char *)this + 8);
        }
        if ( Descriptor < 0 )
        {
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
          v69 = v94;
          if ( v94 )
          {
            v94 = 0LL;
            (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v69 + 16LL))(v69);
          }
          v45 = (struct TapProcessor *)v104;
          goto LABEL_84;
        }
        v70 = v94;
        if ( v94 )
        {
          v94 = 0LL;
          (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v70 + 16LL))(v70);
        }
        v50 = (struct TapProcessor *)v104;
        Descriptor = (*(__int64 (__fastcall **)(LARGE_INTEGER *, GUID *, struct IContextualProcessor **))v104->QuadPart)(
                       v104,
                       &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                       &v94);
        if ( Descriptor < 0
          || (Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v94),
              Descriptor < 0) )
        {
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
          v71 = v94;
          if ( v94 )
          {
            v94 = 0LL;
            (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v71 + 16LL))(v71);
          }
          goto LABEL_95;
        }
        v72 = v94;
        if ( v94 )
        {
          v94 = 0LL;
          (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v72 + 16LL))(v72);
        }
        v104 = 0LL;
        (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
        if ( gbIsRunningWithCShell )
        {
          v105 = 0LL;
          v95 = 0LL;
          Descriptor = ComboButtonProcessor::Create(&v105);
          if ( Descriptor < 0 )
          {
            if ( IsDebuggerPresent() )
              __debugbreak();
            RaiseFailFastException(0LL, 0LL, 0);
            v73 = v95;
            if ( v95 )
            {
              v95 = 0LL;
              (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v73 + 16LL))(v73);
            }
            v45 = v105;
            goto LABEL_84;
          }
          v74 = v95;
          if ( v95 )
          {
            v95 = 0LL;
            (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v74 + 16LL))(v74);
          }
          v50 = v105;
          Descriptor = (**(__int64 (__fastcall ***)(struct ComboButtonProcessor *, GUID *, struct IContextualProcessor **))v105)(
                         v105,
                         &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                         &v95);
          if ( Descriptor < 0
            || (Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v95),
                Descriptor < 0) )
          {
            if ( IsDebuggerPresent() )
              __debugbreak();
            RaiseFailFastException(0LL, 0LL, 0);
            v75 = v95;
            if ( v95 )
            {
              v95 = 0LL;
              (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v75 + 16LL))(v75);
            }
            goto LABEL_95;
          }
          v76 = v95;
          if ( v95 )
          {
            v95 = 0LL;
            (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v76 + 16LL))(v76);
          }
          v105 = 0LL;
          (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
    }
  }
  if ( ((1LL << gdwDeviceFamily) & 0xDDB5) == 0 )
  {
LABEL_233:
    v117 = 0LL;
    v97 = 0LL;
    v81 = (struct TapProcessor *)malloc(0x18uLL);
    v50 = v81;
    if ( v81 )
    {
      *(_QWORD *)v81 = 0LL;
      *((_QWORD *)v81 + 2) = 0LL;
      *((_QWORD *)v81 + 1) = &RefCountedObject::`vftable';
      *((_DWORD *)v81 + 4) = 1;
      *(_QWORD *)v81 = &InputServiceProcessor::`vftable'{for `IContextualProcessor'};
      *((_QWORD *)v81 + 1) = &InputServiceProcessor::`vftable'{for `RefCountedObject'};
    }
    else
    {
      v50 = 0LL;
    }
    if ( !v50 )
    {
      Descriptor = -2147024882;
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      v82 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v82 + 16LL))(v82);
      }
      goto LABEL_87;
    }
    v117 = v50;
    v83 = v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v83 + 16LL))(v83);
    }
    Descriptor = (**(__int64 (__fastcall ***)(struct TapProcessor *, GUID *, struct IContextualProcessor **))v50)(
                   v50,
                   &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                   &v97);
    if ( Descriptor >= 0 )
    {
      Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v97);
      if ( Descriptor >= 0 )
      {
        v85 = v97;
        if ( v97 )
        {
          v97 = 0LL;
          (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v85 + 16LL))(v85);
        }
        (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
        if ( *((_DWORD **)this + 32) != v43 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v43 + 8LL))(v43);
          v86 = *((_QWORD *)this + 32);
          *((_QWORD *)this + 32) = v43;
          if ( v86 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
        }
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v43 + 16LL))(v43);
        v87 = ISMStatics::GetBamoServerConnection();
        v88 = (char *)operator new(0x40uLL);
        v127 = (struct IContextualProcessor *)v88;
        v121 = this;
        (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
        v126 = 1;
        *(_QWORD *)v88 = &BamoTestCommandsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
        *((_QWORD *)v88 + 1) = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
        v128 = (struct IContextualProcessor *)(v88 + 16);
        Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
          (Microsoft::BamoImpl::BamoPrincipalImpl *)(v88 + 16),
          v87);
        *((_QWORD *)v88 + 2) = &BamoImpl::BamoTestCommandsPrincipalImpl::`vftable';
        *(_QWORD *)v88 = &TestCommands::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
        *((_QWORD *)v88 + 1) = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
        *((_QWORD *)v88 + 7) = this;
        (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)v87 + 19) + 8LL) + 128LL))(
          *((_QWORD *)v87 + 19) + 8LL,
          v88);
        v47 = *(_QWORD *)this;
        v48 = this;
        goto LABEL_257;
      }
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    v84 = v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v84 + 16LL))(v84);
    }
    goto LABEL_95;
  }
  v106 = 0LL;
  v96 = 0LL;
  Descriptor = RawButtonProcessor::Create(&v106);
  if ( Descriptor >= 0 )
  {
    v78 = v96;
    if ( v96 )
    {
      v96 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v78 + 16LL))(v78);
    }
    v50 = v106;
    Descriptor = (**(__int64 (__fastcall ***)(struct RawButtonProcessor *, GUID *, struct IContextualProcessor **))v106)(
                   v106,
                   &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                   &v96);
    if ( Descriptor >= 0 )
    {
      Descriptor = ContextualProcessorManager::RegisterProcessor((ContextualProcessorManager *)v43, v96);
      if ( Descriptor >= 0 )
      {
        v80 = v96;
        if ( v96 )
        {
          v96 = 0LL;
          (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v80 + 16LL))(v80);
        }
        v106 = 0LL;
        (*(void (__fastcall **)(struct TapProcessor *))(*(_QWORD *)v50 + 16LL))(v50);
        goto LABEL_233;
      }
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    v79 = v96;
    if ( v96 )
    {
      v96 = 0LL;
      (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v79 + 16LL))(v79);
    }
LABEL_95:
    if ( !v50 )
      goto LABEL_87;
    v46 = *(_QWORD *)v50;
    goto LABEL_86;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  v77 = v96;
  if ( v96 )
  {
    v96 = 0LL;
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v77 + 16LL))(v77);
  }
  v45 = v106;
LABEL_84:
  if ( v45 )
  {
    v46 = *(_QWORD *)v45;
LABEL_86:
    (*(void (**)(void))(v46 + 16))();
  }
LABEL_87:
  v47 = *(_QWORD *)v43;
  v48 = (DWMInputRouter *)v43;
LABEL_257:
  (*(void (__fastcall **)(DWMInputRouter *))(v47 + 16))(v48);
LABEL_258:
  v89 = v98;
  if ( v98 )
  {
    v98 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v109);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v111);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v113);
  return (unsigned int)Descriptor;
}
