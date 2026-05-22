/*
 * XREFs of ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080
 * Callers:
 *     ?Invoke@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAUIHolographicDisplay@785@@Z @ 0x1800A5390 (-Invoke@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18002CA5C (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ?StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800A3ED4 (-StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A49CC (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A50D4 (-EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800A6458 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _lambda_df3ea2b2c6b3ab40825ce20637938084_::operator() @ 0x1800A7930 (_lambda_df3ea2b2c6b3ab40825ce20637938084_--operator().c)
 *     ?RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800A8114 (-RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A8A90 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A8ED8 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800AA3C4 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800C88D0 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x1800CDCC0 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3,
        char a4)
{
  int v6; // ebx
  int v7; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v11; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rdx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  HSTRING *i; // rdi
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v33; // rcx
  HSTRING v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rdi
  __int64 *v40; // rbx
  int v41; // eax
  __int64 **v42; // rax
  __int64 *k; // rcx
  __int64 *j; // rax
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 (__fastcall ***v48)(_QWORD, GUID *, _QWORD *); // rcx
  int v50[2]; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v51; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v52)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING v54; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD InterfaceClassGuid[5]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+88h] [rbp-80h] BYREF
  __int64 v59; // [rsp+98h] [rbp-70h]
  __int128 v60; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-58h]
  __int128 v62; // [rsp+C0h] [rbp-48h]
  __int128 v63; // [rsp+D0h] [rbp-38h]
  __int64 v64; // [rsp+E0h] [rbp-28h]
  char *v65; // [rsp+E8h] [rbp-20h]
  _OWORD v66[4]; // [rsp+F8h] [rbp-10h] BYREF
  char v67; // [rsp+138h] [rbp+30h]
  __int128 v68; // [rsp+148h] [rbp+40h] BYREF
  int v69; // [rsp+158h] [rbp+50h]
  _QWORD v70[4]; // [rsp+168h] [rbp+60h] BYREF
  int v71; // [rsp+188h] [rbp+80h]
  int *v72; // [rsp+190h] [rbp+88h]
  int *v73; // [rsp+198h] [rbp+90h]
  int v74; // [rsp+1A0h] [rbp+98h] BYREF
  char v75; // [rsp+1A4h] [rbp+9Ch]
  int v76; // [rsp+1C8h] [rbp+C0h] BYREF
  const char *v77; // [rsp+1D0h] [rbp+C8h]
  __int64 v78; // [rsp+1D8h] [rbp+D0h]
  char v79; // [rsp+1E0h] [rbp+D8h]
  __int64 v80; // [rsp+1E8h] [rbp+E0h]
  char v81[144]; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v82; // [rsp+280h] [rbp+178h]
  __int64 v83; // [rsp+288h] [rbp+180h]
  __int64 v84; // [rsp+290h] [rbp+188h]
  __int64 v85; // [rsp+298h] [rbp+190h]
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]
  char v87; // [rsp+310h] [rbp+208h] BYREF

  v87 = a4;
  v64 = -2LL;
  v50[1] = 0;
  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C1,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v6;
  }
  v54 = 0LL;
  string = 0LL;
  LOWORD(v50[0]) = 256;
  v70[1] = 0LL;
  v70[2] = v70;
  v70[3] = 0LL;
  v71 = 0;
  v72 = &v76;
  v73 = &v74;
  v74 = 0;
  v75 = 0;
  v79 = 0;
  v76 = 0;
  v77 = "OnHolographicDisplayChanged";
  v78 = 0LL;
  v80 = 1LL;
  v82 = 0LL;
  memset_0(v81, 0, sizeof(v81));
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v70[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::StartActivity((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)v70);
  *(_QWORD *)&v60 = (char *)v50 + 1;
  *((_QWORD *)&v60 + 1) = this;
  *(_QWORD *)&v61 = &v54;
  *((_QWORD *)&v61 + 1) = v70;
  *(_QWORD *)&v62 = &v50[1];
  *((_QWORD *)&v62 + 1) = &string;
  *(_QWORD *)&v63 = &v87;
  *((_QWORD *)&v63 + 1) = v50;
  v66[0] = v60;
  v66[1] = v61;
  v66[2] = v62;
  v66[3] = v63;
  v67 = 1;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::IHolographicDisplay *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string);
  v6 = v7;
  v50[1] = v7;
  if ( v7 < 0 )
  {
    v9 = 741LL;
LABEL_18:
    v13 = (unsigned int)v7;
    goto LABEL_19;
  }
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(this, v8);
  v6 = v7;
  v50[1] = v7;
  if ( v7 < 0 )
  {
    v9 = 742LL;
    goto LABEL_18;
  }
  if ( v87 )
  {
    v51 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(struct Windows::Graphics::Holographic::IHolographicDisplay *, GUID *, struct Windows::Internal::Holographic::ISpatialGraphDriverClient **))a3)(
            a3,
            &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7,
            &v51);
    v6 = v10;
    if ( v10 >= 0 )
    {
      std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
        (__int64 **)this + 40,
        (__int64 *)&v51);
      v12 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DB,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v10);
      v11 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    v50[1] = v6;
    if ( v6 < 0 )
    {
      v13 = (unsigned int)v6;
      v9 = 748LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)v13);
      goto LABEL_96;
    }
  }
  else
  {
    v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDisplay(this, a3);
    v6 = v7;
    v50[1] = v7;
    if ( v7 < 0 )
    {
      v9 = 752LL;
      goto LABEL_18;
    }
  }
  InterfaceClassGuid[1] = 0LL;
  InterfaceClassGuid[2] = 0LL;
  *((_OWORD *)this + 9) = 0u;
  *((_DWORD *)this + 40) = 0;
  v14 = *((_QWORD *)this + 52);
  if ( v14 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 16);
  if ( v15 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 15);
  if ( v16 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  WindowsDeleteString(*((HSTRING *)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  v52 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 49)
                                                                                                + 48LL))(
          *((_QWORD *)this + 49),
          &v52);
  v6 = v17;
  v50[1] = v17;
  if ( v17 < 0 )
  {
    v18 = (unsigned int)v17;
    v19 = 765LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v18);
    goto LABEL_94;
  }
  if ( !v52 )
  {
    LOBYTE(v50[0]) = 1;
    v20 = (_QWORD *)*((_QWORD *)this + 40);
    if ( (__int64)(*((_QWORD *)this + 41) - (_QWORD)v20) >> 3 )
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
      v19 = 769LL;
      goto LABEL_34;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 51);
  v22 = v52;
  if ( v21 != v52 )
  {
    v23 = v52;
    if ( v52 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v52)[1])(v52);
      v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 51);
      v22 = v52;
    }
    *((_QWORD *)this + 51) = v23;
    if ( v21 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
      v22 = v52;
    }
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-344LL )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    v22 = v52;
  }
  v56 = 0LL;
  v24 = (**v22)(v22, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v56);
  v6 = v24;
  v50[1] = v24;
  if ( v24 < 0 )
  {
    v25 = 778LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_92;
  }
  v26 = v56;
  WindowsDeleteString(v54);
  v54 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 64LL))(v26, &v54);
  v6 = v24;
  v50[1] = v24;
  if ( v24 < 0 )
  {
    v25 = 780LL;
    goto LABEL_46;
  }
  v55 = 0LL;
  v27 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(&v55);
  v6 = v27;
  if ( v27 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v27);
  v50[1] = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x311,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_90;
  }
  v58 = 0LL;
  v59 = 0LL;
  *(GUID *)&InterfaceClassGuid[1] = GUID_DEVINTERFACE_SPATIAL_GRAPH;
  v28 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices(
          (LPGUID)&InterfaceClassGuid[1],
          (__int64)&v58);
  v6 = v28;
  v50[1] = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x314,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v28);
    goto LABEL_89;
  }
  for ( i = (HSTRING *)v58; ; ++i )
  {
    if ( i == *((HSTRING **)&v58 + 1) )
    {
      v50[1] = -2147023728;
      v6 = -2147023728;
      goto LABEL_89;
    }
    v51 = 0LL;
    v30 = CreateSpatialGraphDriverClient(*i, &v51);
    v31 = v30;
    if ( v30 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x319,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v30);
    if ( v31 >= 0 )
      break;
LABEL_61:
    v33 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  v32 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, HSTRING, __int128 *))(*(_QWORD *)v51 + 64LL))(
          v51,
          v54,
          &v68);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31C,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v32);
    goto LABEL_61;
  }
  v34 = *i;
  *i = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 17));
  *((_QWORD *)this + 17) = v34;
  v35 = v55;
  v55 = 0LL;
  v36 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = v35;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  v37 = v51;
  v51 = 0LL;
  v38 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = v37;
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  *((_OWORD *)this + 9) = v68;
  *((_DWORD *)this + 40) = v69;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  v65 = (char *)this + 424;
  v39 = (__int64 *)*((_QWORD *)this + 58);
  v40 = (__int64 *)*v39;
  while ( v40 != v39 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v40[5] + 40LL))(v40[5]) )
    {
      *(_QWORD *)&v60 = off_1800F2078;
      *((_QWORD *)&v60 + 1) = this;
      *((_QWORD *)&v63 + 1) = &v60;
      v41 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              (__int64)this,
              (__int64)(v40 + 5),
              (__int64)&v60,
              1);
      if ( v41 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x332,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v41);
    }
    if ( !*((_BYTE *)v40 + 25) )
    {
      v42 = (__int64 **)v40[2];
      if ( *((_BYTE *)v42 + 25) )
      {
        for ( j = (__int64 *)v40[1]; !*((_BYTE *)j + 25) && v40 == (__int64 *)j[2]; j = (__int64 *)j[1] )
          v40 = j;
        v40 = j;
      }
      else
      {
        v40 = (__int64 *)v40[2];
        for ( k = *v42; !*((_BYTE *)k + 25); k = (__int64 *)*k )
          v40 = k;
      }
    }
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-424LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  BYTE1(v50[0]) = 0;
  v45 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v6 = 0;
LABEL_89:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(&v58);
LABEL_90:
  v46 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_92:
  v47 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
LABEL_94:
  v48 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v48)[2])(v48);
  }
LABEL_96:
  v67 = 0;
  lambda_df3ea2b2c6b3ab40825ce20637938084_::operator()(v66);
  v70[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v70);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v70);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v54);
  return (unsigned int)v6;
}
