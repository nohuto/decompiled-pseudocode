/*
 * XREFs of ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800A8B3C (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180011CEC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180011D68 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ContextualInputProcessing@@@.c)
 *     ?Create@GestureTargetingComponent@@SAJPEAPEAV1@@Z @ 0x18001316C (-Create@GestureTargetingComponent@@SAJPEAPEAV1@@Z.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x18001CB5C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_FIREVIEWHITTEST_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_FIREVIEWHITTEST_MESSAGE@@@Z@std@@@Z @ 0x18001D8B0 (-Initialize@-$KernelInputConnection@U_MIT_FIREVIEWHITTEST_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessage.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x18001DBF0 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800208BC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x1800237E4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18002508C (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 *     ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180029FEC (-Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAV1@@Z.c)
 *     ?Create@InputServiceComponent@@SAJPEAPEAV1@@Z @ 0x18002E998 (-Create@InputServiceComponent@@SAJPEAPEAV1@@Z.c)
 *     ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x18002F504 (-Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z.c)
 *     ?Get@PropertyDefinitions@@SAJPEAPEAV1@@Z @ 0x1800331C0 (-Get@PropertyDefinitions@@SAJPEAPEAV1@@Z.c)
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180033254 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180033864 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x18007DDA8 (-Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeli.c)
 *     ?Create@TargetingArbitrationComponent@@SAJPEAPEAV1@@Z @ 0x1800A3F50 (-Create@TargetingArbitrationComponent@@SAJPEAPEAV1@@Z.c)
 *     ?AddTargetingComponent@TargetingArbitrationComponent@@QEAAJPEAUIInputTargetingComponent@@@Z @ 0x1800A498C (-AddTargetingComponent@TargetingArbitrationComponent@@QEAAJPEAUIInputTargetingComponent@@@Z.c)
 *     ?Create@MagnifierComponent@@SAJPEAPEAV1@@Z @ 0x1800A56A8 (-Create@MagnifierComponent@@SAJPEAPEAV1@@Z.c)
 *     ?Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x1800A6F3C (-Create@InputRedirectionComponent@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall DWMInputRouter::Initialize(DWMInputRouter *this)
{
  __int64 *v2; // r12
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r9d
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // r12
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // edi
  unsigned int v24; // esi
  const unsigned __int16 **v25; // r12
  const unsigned __int16 *v26; // r13
  __int64 v27; // rcx
  int DisplayBindingFromId; // eax
  __int64 v29; // rcx
  int v30; // r9d
  struct IInputDisplay *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  DisplayBinding **v35; // r12
  __int64 v36; // rcx
  struct IInputDisplay *v37; // rsi
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  TargetingArbitrationComponent *v42; // rsi
  int v43; // eax
  struct InputServiceComponent *v44; // r12
  int v45; // eax
  __int64 v46; // rcx
  int v47; // r9d
  struct IInputDisplay *v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  struct IInputDisplay *v51; // rcx
  struct InputServiceComponent *v52; // r12
  int v53; // eax
  __int64 v54; // rcx
  int v55; // r9d
  struct IInputDisplay *v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  struct IInputDisplay *v59; // rcx
  struct InputServiceComponent *v60; // r12
  int v61; // eax
  __int64 v62; // rcx
  int v63; // r9d
  struct IInputDisplay *v64; // rcx
  int v65; // eax
  struct InputServiceComponent *v66; // r12
  int v67; // eax
  __int64 v68; // rcx
  int v69; // r9d
  struct IInputDisplay *v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  struct IInputDisplay *v73; // rcx
  struct InputServiceComponent *v74; // r12
  int v75; // eax
  __int64 v76; // rcx
  int v77; // r9d
  struct IInputDisplay *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rcx
  int v84; // r9d
  __int64 *v85; // rdi
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 *v88; // r13
  __int64 v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rdi
  _QWORD *v92; // r12
  __int64 v93; // rcx
  __int64 v94; // rsi
  __int64 v95; // r8
  const char *v96; // r9
  struct ISMTestMode *v97; // rax
  unsigned __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // rdi
  __int64 v102; // rcx
  __int64 v103; // rcx
  LPDWORD pdwType; // [rsp+28h] [rbp-E0h]
  struct IInputDisplay *v106; // [rsp+48h] [rbp-C0h] BYREF
  struct InputServiceComponent *v107; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v109; // [rsp+60h] [rbp-A8h] BYREF
  TargetingArbitrationComponent *v110; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD pvData[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v112; // [rsp+88h] [rbp-80h] BYREF
  char v113; // [rsp+90h] [rbp-78h]
  __int64 v114; // [rsp+98h] [rbp-70h] BYREF
  char v115; // [rsp+A0h] [rbp-68h]
  __int64 v116; // [rsp+A8h] [rbp-60h] BYREF
  char v117; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall **v118)(); // [rsp+B8h] [rbp-50h] BYREF
  DWMInputRouter *v119; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall ***v120)(); // [rsp+F0h] [rbp-18h]
  __int64 v121; // [rsp+F8h] [rbp-10h]
  struct _GUID v122; // [rsp+108h] [rbp+0h] BYREF
  __int128 v123; // [rsp+118h] [rbp+10h] BYREF
  const wchar_t *v124; // [rsp+128h] [rbp+20h] BYREF
  __int128 v125; // [rsp+130h] [rbp+28h]
  __int128 v126; // [rsp+140h] [rbp+38h]
  const wchar_t *v127; // [rsp+150h] [rbp+48h]
  struct _GUID v128; // [rsp+158h] [rbp+50h]
  __int128 v129; // [rsp+168h] [rbp+60h]
  const wchar_t *v130; // [rsp+178h] [rbp+70h]
  struct _GUID v131; // [rsp+180h] [rbp+78h]
  __int128 v132; // [rsp+190h] [rbp+88h]
  const wchar_t *v133; // [rsp+1A0h] [rbp+98h]
  __int128 v134; // [rsp+1A8h] [rbp+A0h]
  __int128 v135; // [rsp+1B8h] [rbp+B0h]
  const wchar_t *v136; // [rsp+1C8h] [rbp+C0h]
  __int128 v137; // [rsp+1D0h] [rbp+C8h]
  __int128 v138; // [rsp+1E0h] [rbp+D8h]
  const wchar_t *v139; // [rsp+1F0h] [rbp+E8h]
  struct _GUID v140; // [rsp+1F8h] [rbp+F0h]
  __int128 v141; // [rsp+208h] [rbp+100h]
  const wchar_t *v142; // [rsp+218h] [rbp+110h]
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  v121 = -2LL;
  v116 = 0LL;
  v117 = 0;
  v114 = 0LL;
  v115 = 0;
  v112 = 0LL;
  v113 = 0;
  LODWORD(v108) = 0;
  v109 = 0LL;
  v2 = (__int64 *)((char *)this + 136);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_7;
    v6 = 142;
    goto LABEL_6;
  }
  v7 = (_QWORD *)((char *)this + 144);
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v4 = CoreUIFactoryCreate((char *)this + 144);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 148;
LABEL_6:
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v6, v4);
      goto LABEL_7;
    }
    goto LABEL_7;
  }
  v4 = InputSecurityDescriptor::QueryDescriptor(&v116, 8LL, c_wszMessagePortNames);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 155;
      goto LABEL_6;
    }
LABEL_7:
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_9;
  }
  v9 = *v2;
  v10 = *((_QWORD *)this + 19);
  if ( v10 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v9 + 56LL))(v9, v116, (char *)this + 152);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 159;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v4 = InputSecurityDescriptor::QueryDescriptor(&v114, 8LL, c_wszMessagePortNames);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 168;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v11 = *v2;
  v12 = (_QWORD *)((char *)this + 160);
  v13 = *((_QWORD *)this + 20);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v11 + 56LL))(v11, v114, (char *)this + 160);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 172;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v7 + 24LL))(
         *v7,
         &GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300,
         &v108);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 180;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
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
    v15 = *v7;
    v16 = *((_QWORD *)this + 22);
    if ( v16 )
    {
      *((_QWORD *)this + 22) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v15 + 32LL))(
           v15,
           ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
           0LL,
           (unsigned int)v108,
           L"IInputDisplayDeviceBindingApi",
           *v12,
           (char *)this + 176);
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 190;
        goto LABEL_6;
      }
      goto LABEL_7;
    }
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v7 + 24LL))(
         *v7,
         &GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062,
         &v108);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 199;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v17 = *v7;
  v18 = *((_QWORD *)this + 40);
  if ( v18 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v17 + 32LL))(
         v17,
         ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
         0LL,
         (unsigned int)v108,
         L"IRemoteViewHitTestApi",
         *v12,
         (char *)this + 320);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 207;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v7 + 24LL))(
         *v7,
         &GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc,
         &v108);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 215;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v19 = *v7;
  v20 = *((_QWORD *)this + 41);
  if ( v20 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  pdwType = (LPDWORD)L"IRemoteViewHitTestRequestApi";
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 32LL))(
         v19,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         0LL,
         (unsigned int)v108);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 223;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v122 = DISPLAYBINDING_MONITORS;
  v123 = PROPTYPE_VECTOR;
  v124 = L"DisplayBinding.Monitors";
  v125 = DISPLAYBINDING_MONITOR_ENTRY;
  v126 = PROPTYPE_UINT64;
  v127 = L"DisplayBinding.MonitorEntry";
  v128 = DISPLAYBINDING_INPUTDISPLAY_BOUNDS_WIDTH;
  v129 = PROPTYPE_INT32;
  v130 = L"DisplayBinding.InputDisplay.Bounds.Width";
  v131 = DISPLAYBINDING_INPUTDISPLAY_BOUNDS_HEIGHT;
  v132 = PROPTYPE_INT32;
  v133 = L"DisplayBinding.InputDisplay.Bounds.Height";
  v134 = INPUTTARGET_ROUTETOMT;
  v135 = PROPTYPE_BOOLEAN;
  v136 = L"InputTarget.routeToMT";
  v137 = INPUTTARGET_HITTESTEDINTERACTION;
  v138 = PROPTYPE_UINT32;
  v139 = L"InputTarget.hitTestedInteraction";
  v140 = DISPLAYBINDING_ORIENTATION;
  v141 = PROPTYPE_UINT32;
  v142 = L"DisplayBinding.Orientation";
  v21 = PropertyDefinitions::ProcessInit();
  v23 = v21;
  if ( v21 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v22, &MinInput_Warning_CheckResult, 0, 246, v21);
    goto LABEL_266;
  }
  v24 = 0;
  v25 = &v124;
  do
  {
    v26 = *v25;
    v23 = PropertyDefinitions::Get(&v110);
    if ( v23 >= 0 )
      v23 = PropertyDefinitions::DefineProperty(
              v110,
              (struct _GUID *)((char *)&v122 + 40 * (int)v24),
              v26,
              (const struct _GUID *)((char *)&v123 + 40 * (int)v24),
              (unsigned int)pdwType);
    if ( v23 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 256, v23);
      goto LABEL_266;
    }
    ++v24;
    v25 += 5;
  }
  while ( v24 < 7 );
  v106 = 0LL;
  DisplayBindingFromId = DWMInputDisplay::Create(0LL, &v106);
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v30 = 265;
      goto LABEL_69;
    }
    goto LABEL_70;
  }
  *(_OWORD *)&pvData[1] = DWM_COMPOSITOR_ID;
  v33 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD *, _QWORD))(*((_QWORD *)this + 6) + 40LL))(
          (char *)this + 48,
          1LL,
          &pvData[1],
          0LL);
  v23 = v33;
  if ( v33 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v34, &MinInput_Warning_CheckResult, 0, 273, v33);
    v31 = v106;
    if ( v106 )
    {
      v32 = *(_QWORD *)v106;
      goto LABEL_75;
    }
    goto LABEL_266;
  }
  v35 = (DisplayBinding **)((char *)this + 432);
  v36 = *((_QWORD *)this + 54);
  if ( v36 )
  {
    *v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId(this, 1u, (struct DisplayBinding **)this + 54);
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v30 = 278;
LABEL_69:
      McTemplateU0qqq(v29, &MinInput_Warning_CheckResult, 0, v30, DisplayBindingFromId);
    }
LABEL_70:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v37 = v106;
  v38 = DisplayBinding::SetInputDisplay(*v35, v106);
  v23 = v38;
  if ( v38 >= 0 )
  {
    if ( v37 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v110 = 0LL;
    v40 = TargetingArbitrationComponent::Create(&v110);
    if ( v40 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v41, &MinInput_Warning_CheckResult, 0, 294, v40);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    pvData[1] = 0LL;
    if ( (gdwMitConfig & 7) != 0 && gbIsRunningWithCShell )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetCachedFeatureEnabledState();
      LODWORD(v107) = 0;
      BYTE4(v107) = 0;
      LODWORD(v106) = 0;
      WORD2(v106) = WORD2(v107);
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_ContextualInputProcessing>::GetFeaturePropertyCache'::`2'::data,
        0xAABF26u,
        (const struct FEATURE_LOGGED_TRAITS *)&v106,
        0,
        3);
    }
    v42 = v110;
    if ( ((1LL << gdwDeviceFamily) & 0x5DB5) != 0 )
    {
      v107 = 0LL;
      v43 = EdgeGestureComponent::Create(
              *((struct IDWMInputProxy **)this + 23),
              (struct IInputDisplay *)(((unsigned __int64)*v35 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v35 >> 64)),
              &v107);
      v44 = v107;
      if ( v43 >= 0 && v42 )
      {
        v106 = 0LL;
        v45 = (**(__int64 (__fastcall ***)(struct InputServiceComponent *, GUID *, struct IInputDisplay **))v107)(
                v107,
                &GUID_e187cae3_0bed_435a_a136_e7f29a05243f,
                &v106);
        if ( v45 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_109;
          v47 = 330;
          goto LABEL_108;
        }
        v45 = TargetingArbitrationComponent::AddTargetingComponent(v42, v106);
        if ( v45 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          {
LABEL_109:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v47 = 331;
LABEL_108:
          McTemplateU0qqq(v46, &MinInput_Warning_CheckResult, 0, v47, v45);
          goto LABEL_109;
        }
        v48 = v106;
        if ( v106 )
        {
          v106 = 0LL;
          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
      if ( v44 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct InputServiceComponent *))(*(_QWORD *)v44 + 16LL))(v44);
      }
    }
    v107 = 0LL;
    v106 = 0LL;
    v49 = InputRedirectionComponent::Create(
            (struct IInputDeviceInfoStore *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
            &v107);
    if ( v49 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v50, &MinInput_Warning_CheckResult, 0, 374, v49);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v51 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v52 = v107;
    v53 = (**(__int64 (__fastcall ***)(struct InputServiceComponent *, GUID *, struct IInputDisplay **))v107)(
            v107,
            &GUID_e187cae3_0bed_435a_a136_e7f29a05243f,
            &v106);
    if ( v53 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_131;
      v55 = 375;
      goto LABEL_130;
    }
    v53 = TargetingArbitrationComponent::AddTargetingComponent(v42, v106);
    if ( v53 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_131:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v55 = 376;
LABEL_130:
      McTemplateU0qqq(v54, &MinInput_Warning_CheckResult, 0, v55, v53);
      goto LABEL_131;
    }
    v56 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v56 + 16LL))(v56);
    }
    v107 = 0LL;
    (*(void (__fastcall **)(struct InputServiceComponent *))(*(_QWORD *)v52 + 16LL))(v52);
    v107 = 0LL;
    v106 = 0LL;
    v57 = InputServiceComponent::Create(&v107);
    if ( v57 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v58, &MinInput_Warning_CheckResult, 0, 387, v57);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v59 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v59 + 16LL))(v59);
    }
    v60 = v107;
    v61 = (**(__int64 (__fastcall ***)(struct InputServiceComponent *, GUID *, struct IInputDisplay **))v107)(
            v107,
            &GUID_e187cae3_0bed_435a_a136_e7f29a05243f,
            &v106);
    if ( v61 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_151;
      v63 = 388;
      goto LABEL_150;
    }
    v61 = TargetingArbitrationComponent::AddTargetingComponent(v42, v106);
    if ( v61 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_151:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v63 = 389;
LABEL_150:
      McTemplateU0qqq(v62, &MinInput_Warning_CheckResult, 0, v63, v61);
      goto LABEL_151;
    }
    v64 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v64 + 16LL))(v64);
    }
    v107 = 0LL;
    (*(void (__fastcall **)(struct InputServiceComponent *))(*(_QWORD *)v60 + 16LL))(v60);
    if ( ((1LL << gdwDeviceFamily) & 0x5DB5) != 0 && !gbIsRunningWithCShell )
    {
      v107 = 0LL;
      v65 = MagnifierComponent::Create(&v107);
      v66 = v107;
      if ( v65 >= 0 )
      {
        v106 = 0LL;
        v67 = (**(__int64 (__fastcall ***)(struct InputServiceComponent *, GUID *, struct IInputDisplay **))v107)(
                v107,
                &GUID_e187cae3_0bed_435a_a136_e7f29a05243f,
                &v106);
        if ( v67 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_166;
          v69 = 404;
          goto LABEL_165;
        }
        v67 = TargetingArbitrationComponent::AddTargetingComponent(v42, v106);
        if ( v67 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          {
LABEL_166:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v69 = 405;
LABEL_165:
          McTemplateU0qqq(v68, &MinInput_Warning_CheckResult, 0, v69, v67);
          goto LABEL_166;
        }
        v70 = v106;
        if ( v106 )
        {
          v106 = 0LL;
          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v70 + 16LL))(v70);
        }
      }
      if ( v66 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct InputServiceComponent *))(*(_QWORD *)v66 + 16LL))(v66);
      }
    }
    if ( ((1LL << gdwDeviceFamily) & 0x5DB5) != 0 )
    {
      v107 = 0LL;
      v106 = 0LL;
      v71 = GestureTargetingComponent::Create(&v107);
      if ( v71 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v72, &MinInput_Warning_CheckResult, 0, 426, v71);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v73 = v106;
      if ( v106 )
      {
        v106 = 0LL;
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v73 + 16LL))(v73);
      }
      v74 = v107;
      v75 = (**(__int64 (__fastcall ***)(struct InputServiceComponent *, GUID *, struct IInputDisplay **))v107)(
              v107,
              &GUID_e187cae3_0bed_435a_a136_e7f29a05243f,
              &v106);
      if ( v75 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_189;
        v77 = 427;
        goto LABEL_188;
      }
      v75 = TargetingArbitrationComponent::AddTargetingComponent(v42, v106);
      if ( v75 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_189:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v77 = 428;
LABEL_188:
        McTemplateU0qqq(v76, &MinInput_Warning_CheckResult, 0, v77, v75);
        goto LABEL_189;
      }
      v78 = v106;
      if ( v106 )
      {
        v106 = 0LL;
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v78 + 16LL))(v78);
      }
      (*(void (__fastcall **)(struct InputServiceComponent *))(*(_QWORD *)v74 + 16LL))(v74);
    }
    if ( v42 )
      (*(void (__fastcall **)(TargetingArbitrationComponent *))(*(_QWORD *)v42 + 8LL))(v42);
    v79 = *((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = v42;
    if ( v79 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
    v80 = *((_QWORD *)this + 28);
    if ( v80 )
    {
      *((_QWORD *)this + 28) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
    }
    if ( v42 )
      (*(void (__fastcall **)(TargetingArbitrationComponent *))(*(_QWORD *)v42 + 16LL))(v42);
    LODWORD(pvData[0]) = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Shell\\CShellUseCoreShell",
           L"Enabled",
           0x10u,
           0LL,
           (char *)pvData + 4,
           (LPDWORD)pvData)
      || !HIDWORD(pvData[0]) )
    {
      v85 = (__int64 *)((char *)this + 232);
      v86 = *((_QWORD *)this + 29);
      if ( v86 )
      {
        *v85 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
      }
      if ( (int)MobileCursorBroker::Create((struct ICursorBroker **)this + 29) < 0 )
      {
        v87 = *v85;
        if ( *v85 )
        {
          *v85 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
        }
        v82 = DWMCursorBroker::Create(this, (struct ICursorBroker **)this + 29);
        if ( v82 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v84 = 460;
LABEL_213:
            McTemplateU0qqq(v83, &MinInput_Warning_CheckResult, 0, v84, v82);
          }
LABEL_214:
          if ( IsDebuggerPresent() )
            __debugbreak();
LABEL_9:
          __fastfail(7u);
        }
      }
    }
    else
    {
      v81 = *((_QWORD *)this + 29);
      if ( v81 )
      {
        *((_QWORD *)this + 29) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
      }
      v82 = DWMCursorBroker::Create(this, (struct ICursorBroker **)this + 29);
      if ( v82 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_214;
        v84 = 453;
        goto LABEL_213;
      }
    }
    v88 = (__int64 *)((char *)this + 136);
    v89 = *((_QWORD *)this + 17);
    v90 = v109;
    if ( v109 )
    {
      v109 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
    }
    v82 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v89 + 24LL))(v89, &v109);
    if ( v82 >= 0 )
    {
      v82 = InputSecurityDescriptor::QueryDescriptor(&v112, 8LL, L"Input\\Service.AlpcPort\\Server");
      if ( v82 >= 0 )
      {
        v91 = *v88;
        v92 = (_QWORD *)((char *)this + 168);
        v93 = *((_QWORD *)this + 21);
        if ( v93 )
        {
          *v92 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
        }
        v82 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v91 + 56LL))(
                v91,
                v112,
                (char *)this + 168);
        if ( v82 >= 0 )
        {
          wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
            (_QWORD *)this + 72,
            *v88);
          v94 = *v88;
          wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
            (_QWORD *)this + 72,
            *((_QWORD *)this + 72));
          v82 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), DWMInputRouter *, _QWORD, char *))(*(_QWORD *)v94 + 80LL))(
                  v94,
                  DWMInputRouter::OnFocusedThreadChangedStatic,
                  this,
                  *v92,
                  (char *)this + 584);
          if ( v82 >= 0 )
          {
            v82 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v109 + 40LL))(
                    v109,
                    L"System\\Input\\InputFocusEndpoint",
                    *((_QWORD *)this + 73),
                    1LL);
            if ( v82 >= 0 )
            {
              v97 = ISMTestMode::s_instance;
              if ( (gdwMitConfig & 7) != 0 )
              {
                if ( !ISMTestMode::s_instance )
                {
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x20,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
                    v96);
                  __debugbreak();
                }
                if ( !*(_BYTE *)ISMTestMode::s_instance )
                {
                  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
                  {
                    v118 = off_1800D3B38;
                    v119 = this;
                    v120 = &v118;
                    KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize(
                      (char *)this + 448,
                      (char *)this + 136,
                      v95,
                      &v118);
                  }
                  v118 = off_1800D38A0;
                  v119 = this;
                  v120 = &v118;
                  KernelInputConnection<_MIT_FIREVIEWHITTEST_MESSAGE>::Initialize(
                    (char *)this + 592,
                    (char *)this + 136,
                    v95,
                    &v118);
                  v97 = ISMTestMode::s_instance;
                }
              }
              if ( !v97 )
              {
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x20,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
                  v96);
                __debugbreak();
              }
              v98 = (unsigned __int64)this + 56;
              if ( *(_BYTE *)v97 )
              {
                v99 = v98 & -(__int64)(this != 0LL);
                v100 = *((_QWORD *)this + 55);
                if ( v100 )
                {
                  *((_QWORD *)this + 55) = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 16LL))(v100);
                }
                v82 = InputDeliveryServer::Create(v99, L"InputDeliveryTest", 1LL, (char *)this + 440);
                v23 = v82;
                if ( v82 >= 0 )
                  goto LABEL_266;
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  goto LABEL_214;
                v84 = 551;
              }
              else
              {
                v101 = v98 & -(__int64)(this != 0LL);
                v102 = *((_QWORD *)this + 55);
                if ( v102 )
                {
                  *((_QWORD *)this + 55) = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
                }
                v82 = InputDeliveryServer::Create(v101, L"System\\InputDelivery", 0LL, (char *)this + 440);
                v23 = v82;
                if ( v82 >= 0 )
                  goto LABEL_266;
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  goto LABEL_214;
                v84 = 557;
              }
              goto LABEL_213;
            }
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v84 = 489;
              goto LABEL_213;
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v84 = 484;
            goto LABEL_213;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v84 = 476;
          goto LABEL_213;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v84 = 472;
        goto LABEL_213;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v84 = 469;
      goto LABEL_213;
    }
    goto LABEL_214;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v39, &MinInput_Warning_CheckResult, 0, 280, v38);
  if ( v37 )
  {
    v32 = *(_QWORD *)v37;
    v31 = v37;
LABEL_75:
    (*(void (__fastcall **)(struct IInputDisplay *))(v32 + 16))(v31);
  }
LABEL_266:
  v103 = v109;
  if ( v109 )
  {
    v109 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v112);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v114);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v116);
  return (unsigned int)v23;
}
