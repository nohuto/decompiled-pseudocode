/*
 * XREFs of ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70
 * Callers:
 *     ?Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180090F40 (-Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18001FAD8 (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAAXXZ @ 0x18008EAD4 (-StartActivity@OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FCAC (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType_ea_18008FCAC.c)
 *     EnumerateDevices @ 0x180090968 (EnumerateDevices.c)
 *     ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091840 (-EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrap.c)
 *     ?DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ @ 0x180091E54 (-DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ.c)
 *     _lambda_c90380767cc5ac01c309f72366d316c3_::operator() @ 0x18009537C (_lambda_c90380767cc5ac01c309f72366d316c3_--operator().c)
 *     ?RemoveDisplay@SpatialInputControllerCollection@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@Windows@@@Z @ 0x180095C5C (-RemoveDisplay@SpatialInputControllerCollection@@AEAAJPEAUIHolographicDisplay@Holographic@Graphi.c)
 *     ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48 (-QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV-$shared_ptr@VSpatialInteractionContro.c)
 *     ?Destroy@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096594 (-Destroy@-$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180097930 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B8F50 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x1800BCAF4 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall SpatialInputControllerCollection::OnDisplayChanged(
        SpatialInputControllerCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3,
        char a4)
{
  int v6; // ebx
  int v7; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  HSTRING *i; // rbx
  int v30; // eax
  int v31; // edi
  int v32; // eax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v33; // rcx
  HSTRING v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 *v40; // rdi
  __int64 *v41; // rbx
  int v42; // eax
  __int64 *v43; // rax
  __int64 *j; // rax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 (__fastcall ***v48)(_QWORD, GUID *, _QWORD *); // rcx
  void *v49; // rdi
  int v51[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v52)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D8h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v53; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v56; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+78h] [rbp-90h]
  __int128 v61; // [rsp+80h] [rbp-88h] BYREF
  __int128 v62; // [rsp+90h] [rbp-78h]
  __int128 v63; // [rsp+A0h] [rbp-68h]
  __int128 v64; // [rsp+B0h] [rbp-58h]
  __int128 v65; // [rsp+C0h] [rbp-48h]
  int v66; // [rsp+D0h] [rbp-38h]
  __int64 v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E0h] [rbp-28h]
  __int64 v69; // [rsp+E8h] [rbp-20h]
  char *v70; // [rsp+F0h] [rbp-18h]
  GUID InterfaceClassGuid; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v72[4]; // [rsp+118h] [rbp+10h] BYREF
  char v73; // [rsp+158h] [rbp+50h]
  __int128 v74; // [rsp+168h] [rbp+60h] BYREF
  int v75; // [rsp+178h] [rbp+70h]
  void **v76; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v77[3]; // [rsp+190h] [rbp+88h] BYREF
  int v78; // [rsp+1A8h] [rbp+A0h]
  int *v79; // [rsp+1B0h] [rbp+A8h]
  int *v80; // [rsp+1B8h] [rbp+B0h]
  int v81; // [rsp+1C0h] [rbp+B8h] BYREF
  char v82; // [rsp+1C4h] [rbp+BCh]
  int v83; // [rsp+1E8h] [rbp+E0h] BYREF
  const char *v84; // [rsp+1F0h] [rbp+E8h]
  __int64 v85; // [rsp+1F8h] [rbp+F0h]
  char v86; // [rsp+200h] [rbp+F8h]
  __int64 v87; // [rsp+208h] [rbp+100h]
  _BYTE v88[144]; // [rsp+210h] [rbp+108h] BYREF
  __int64 v89; // [rsp+2A0h] [rbp+198h]
  __int64 v90; // [rsp+2A8h] [rbp+1A0h]
  __int64 v91; // [rsp+2B0h] [rbp+1A8h]
  void *Block; // [rsp+2B8h] [rbp+1B0h]
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]
  char v94; // [rsp+330h] [rbp+228h] BYREF

  v94 = a4;
  v67 = -2LL;
  v51[1] = 0;
  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v6;
  }
  v56 = 0LL;
  string = 0LL;
  LOWORD(v51[0]) = 256;
  v77[0] = 0LL;
  v77[1] = &v76;
  v77[2] = 0LL;
  v78 = 0;
  v79 = &v83;
  v80 = &v81;
  v81 = 0;
  v82 = 0;
  v86 = 0;
  v83 = 0;
  v84 = "OnHolographicDisplayChanged";
  v85 = 0LL;
  v87 = 1LL;
  v89 = 0LL;
  v90 = 0LL;
  memset(v88, 0, sizeof(v88));
  v91 = 0LL;
  Block = 0LL;
  v76 = &RawInputProvidersTracing::OnHolographicDisplayChanged::`vftable';
  RawInputProvidersTracing::OnHolographicDisplayChanged::StartActivity((RawInputProvidersTracing::OnHolographicDisplayChanged *)&v76);
  *(_QWORD *)&v61 = (char *)v51 + 1;
  *((_QWORD *)&v61 + 1) = this;
  *(_QWORD *)&v62 = &v56;
  *((_QWORD *)&v62 + 1) = &v76;
  *(_QWORD *)&v63 = &v51[1];
  *((_QWORD *)&v63 + 1) = &string;
  *(_QWORD *)&v64 = &v94;
  *((_QWORD *)&v64 + 1) = v51;
  v72[0] = v61;
  v72[1] = v62;
  v72[2] = v63;
  v72[3] = v64;
  v73 = 1;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::IHolographicDisplay *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string);
  v6 = v7;
  v51[1] = v7;
  if ( v7 < 0 )
  {
    v9 = 1570LL;
LABEL_18:
    v13 = (unsigned int)v7;
    goto LABEL_19;
  }
  v7 = SpatialInputControllerCollection::EnsureResources(this, v8);
  v6 = v7;
  v51[1] = v7;
  if ( v7 < 0 )
  {
    v9 = 1571LL;
    goto LABEL_18;
  }
  if ( v94 )
  {
    v54 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(struct Windows::Graphics::Holographic::IHolographicDisplay *, GUID *, __int64 *))a3)(
            a3,
            &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7,
            &v54);
    v6 = v10;
    if ( v10 >= 0 )
    {
      std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
        (unsigned __int64 *)this + 389,
        &v54);
      v12 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x73E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v10);
      v11 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    v51[1] = v6;
    if ( v6 < 0 )
    {
      v13 = (unsigned int)v6;
      v9 = 1577LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)v13);
      goto LABEL_94;
    }
  }
  else
  {
    v7 = SpatialInputControllerCollection::RemoveDisplay(this, a3);
    v6 = v7;
    v51[1] = v7;
    if ( v7 < 0 )
    {
      v9 = 1581LL;
      goto LABEL_18;
    }
  }
  v65 = 0uLL;
  v66 = 0;
  *(_OWORD *)((char *)this + 2936) = 0uLL;
  *((_DWORD *)this + 738) = 0;
  v14 = *((_QWORD *)this + 401);
  if ( v14 )
  {
    *((_QWORD *)this + 401) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 365);
  if ( v15 )
  {
    *((_QWORD *)this + 365) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 364);
  if ( v16 )
  {
    *((_QWORD *)this + 364) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  WindowsDeleteString(*((HSTRING *)this + 366));
  *((_QWORD *)this + 366) = 0LL;
  SpatialInputControllerCollection::DisableHeadEventHandler((struct _RTL_CRITICAL_SECTION *)this);
  v52 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 398)
                                                                                                + 48LL))(
          *((_QWORD *)this + 398),
          &v52);
  v6 = v17;
  v51[1] = v17;
  if ( v17 < 0 )
  {
    v18 = (unsigned int)v17;
    v19 = 1598LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v18);
    goto LABEL_92;
  }
  if ( !v52 )
  {
    LOBYTE(v51[0]) = 1;
    v20 = (_QWORD *)*((_QWORD *)this + 389);
    if ( (__int64)(*((_QWORD *)this + 390) - (_QWORD)v20) >> 3 )
    {
      v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v20)(
             *v20,
             &GUID_9acea414_1d9f_4090_a388_90c06f6eae9c,
             &v52);
    }
    else
    {
      v52 = 0LL;
      v6 = -2147023728;
    }
    if ( v6 < 0 )
    {
      v18 = (unsigned int)v6;
      v19 = 1602LL;
      goto LABEL_34;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  v21 = v52;
  if ( *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 400) != v52 )
  {
    v22 = v52;
    if ( v52 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v52)[1])(v52);
      v21 = v52;
    }
    v23 = *((_QWORD *)this + 400);
    *((_QWORD *)this + 400) = v22;
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v21 = v52;
    }
  }
  if ( this != (SpatialInputControllerCollection *)-3136LL )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
    v21 = v52;
  }
  v58 = 0LL;
  v24 = (**v21)(v21, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v58);
  v6 = v24;
  v51[1] = v24;
  if ( v24 < 0 )
  {
    v25 = 1611LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_90;
  }
  v26 = v58;
  WindowsDeleteString(v56);
  v56 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 64LL))(v26, &v56);
  v6 = v24;
  v51[1] = v24;
  if ( v24 < 0 )
  {
    v25 = 1613LL;
    goto LABEL_46;
  }
  v57 = 0LL;
  v27 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(&v57);
  v6 = v27;
  if ( v27 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5F5,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v27);
  v51[1] = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x652,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_88;
  }
  v59 = 0LL;
  v60 = 0LL;
  InterfaceClassGuid = GUID_DEVINTERFACE_SPATIAL_GRAPH;
  v28 = EnumerateDevices(&InterfaceClassGuid, (__int64)&v59);
  v6 = v28;
  v51[1] = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x655,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v28);
    goto LABEL_87;
  }
  for ( i = (HSTRING *)v59; ; ++i )
  {
    if ( i == *((HSTRING **)&v59 + 1) )
    {
      v51[1] = -2147023728;
      v6 = -2147023728;
      goto LABEL_87;
    }
    v53 = 0LL;
    v30 = CreateSpatialGraphDriverClient(*i, &v53);
    v31 = v30;
    if ( v30 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x65A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v30);
    if ( v31 >= 0 )
      break;
LABEL_61:
    v33 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  v32 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, HSTRING, __int128 *))(*(_QWORD *)v53 + 56LL))(
          v53,
          v56,
          &v74);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v32);
    goto LABEL_61;
  }
  v34 = *i;
  *i = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 366));
  *((_QWORD *)this + 366) = v34;
  v35 = v57;
  v57 = 0LL;
  v68 = *((_QWORD *)this + 364);
  v36 = v68;
  *((_QWORD *)this + 364) = v35;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  v37 = v53;
  v53 = 0LL;
  v69 = *((_QWORD *)this + 365);
  v38 = v69;
  *((_QWORD *)this + 365) = v37;
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  *(_OWORD *)((char *)this + 2936) = v74;
  *((_DWORD *)this + 738) = v75;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
  v70 = (char *)this + 2816;
  v40 = (__int64 *)*((_QWORD *)this + 357);
  v41 = (__int64 *)*v40;
  while ( v41 != v40 )
  {
    *(_QWORD *)&v61 = off_1800D7C88;
    *((_QWORD *)&v61 + 1) = this;
    *((_QWORD *)&v64 + 1) = &v61;
    LOBYTE(v39) = 1;
    v42 = SpatialInputControllerCollection::QueueWorkItem(this, v41 + 5, &v61, v39);
    if ( v42 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x671,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v42);
    if ( !*((_BYTE *)v41 + 25) )
    {
      v43 = (__int64 *)v41[2];
      if ( *((_BYTE *)v43 + 25) )
      {
        for ( j = (__int64 *)v41[1]; !*((_BYTE *)j + 25) && v41 == (__int64 *)j[2]; j = (__int64 *)j[1] )
          v41 = j;
        v41 = j;
      }
      else
      {
        do
        {
          v41 = v43;
          v43 = (__int64 *)*v43;
        }
        while ( !*((_BYTE *)v43 + 25) );
      }
    }
  }
  if ( this != (SpatialInputControllerCollection *)-2816LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
  BYTE1(v51[0]) = 0;
  v45 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v6 = 0;
LABEL_87:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(&v59);
LABEL_88:
  v46 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_90:
  v47 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
LABEL_92:
  v48 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v48)[2])(v48);
  }
LABEL_94:
  v73 = 0;
  lambda_c90380767cc5ac01c309f72366d316c3_::operator()(v72);
  v76 = &RawInputProvidersTracing::OnHolographicDisplayChanged::`vftable';
  wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v76);
  if ( Block )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 1 )
    {
      v49 = Block;
      if ( Block )
      {
        wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)Block + 8);
        operator delete(v49);
      }
    }
    Block = 0LL;
  }
  wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)&v81);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v77);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v56);
  return (unsigned int)v6;
}
