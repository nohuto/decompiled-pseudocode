/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180067DA4
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180059F38 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     WPP_SF_Sdd @ 0x180006BB8 (WPP_SF_Sdd.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     WPP_SF_Sd @ 0x180052138 (WPP_SF_Sd.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18005FE54 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1bed2b100b1af394f2735e08786001a___ @ 0x18006BFC4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e1bed2b100b1af394f2735e08786001a___.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CFrameApplicationPresentation::RuntimeClassInitialize(
        CFrameApplicationPresentation *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        char a4,
        struct IIAMServiceProvider *a5,
        struct IImmersiveApplicationInternal *a6)
{
  int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool v13; // r15
  int (__fastcall **v14)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-E0h]
  __int64 pvAttribute; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  HWND hwnd; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  struct IIAMServiceProvider *v30; // [rsp+78h] [rbp-90h]
  struct IIAMServiceProvider *v31; // [rsp+80h] [rbp-88h]
  _QWORD v32[4]; // [rsp+98h] [rbp-70h] BYREF
  int v33; // [rsp+B8h] [rbp-50h]
  int *v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-38h] BYREF
  char v37; // [rsp+D4h] [rbp-34h]
  int v38; // [rsp+F8h] [rbp-10h] BYREF
  const char *v39; // [rsp+100h] [rbp-8h]
  __int64 v40; // [rsp+108h] [rbp+0h]
  char v41; // [rsp+110h] [rbp+8h]
  __int64 v42; // [rsp+118h] [rbp+10h]
  _BYTE v43[144]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v44; // [rsp+1B0h] [rbp+A8h]
  __int64 v45; // [rsp+1B8h] [rbp+B0h]
  __int64 v46; // [rsp+1C0h] [rbp+B8h]
  __int64 v47; // [rsp+1C8h] [rbp+C0h]

  v29 = -2LL;
  v32[1] = 0LL;
  v32[2] = v32;
  v32[3] = 0LL;
  v33 = 0;
  v34 = &v38;
  v35 = &v36;
  v36 = 0;
  v37 = 0;
  v41 = 0;
  v38 = 0;
  v39 = "Initialization";
  v40 = 0LL;
  v42 = 1LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(v43, 0, sizeof(v43));
  v46 = 0LL;
  v47 = 0LL;
  v32[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)v32, a2);
  *((_BYTE *)this + 61) = a4;
  v30 = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)a5 + 24LL))(
          a5,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &v25);
  if ( v10 >= 0 )
  {
    v24 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)v25 + 72LL))(
            v25,
            a2,
            a3,
            &v24);
    if ( v10 < 0 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_7785cad5b4a736930de9968ca66fe3e3_Traceguids, a2, a3);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v24 + 24LL))(v24, &hwnd);
      if ( v10 >= 0 )
      {
        if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr)
          && DwmGetWindowAttribute(hwnd, 0xEu, &pvAttribute, 4u) >= 0 )
        {
          *((_BYTE *)this + 60) = (pvAttribute & 2) == 0;
        }
        v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)this + 552,
                (__int64)a2,
                0xFFFFFFFFFFFFFFFFuLL);
        if ( v10 >= 0 )
        {
          v11 = v24;
          if ( *((_QWORD *)this + 16) != v24 )
          {
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
            v12 = *((_QWORD *)this + 16);
            *((_QWORD *)this + 16) = v11;
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          *((_QWORD *)this + 17) = hwnd;
          *((_QWORD *)this + 72) = a6;
          v31 = a5;
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          v13 = 0;
          pvAttribute = 0LL;
          v14 = (int (__fastcall **)(_QWORD, GUID *, __int64 *))**((_QWORD **)this + 72);
          v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&pvAttribute);
          if ( (*v14)(*((_QWORD *)this + 72), &GUID_8b14e88b_5663_4caf_b196_c31479262831, v15) >= 0 )
            v13 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)pvAttribute + 328LL))(pvAttribute, 6LL) == 0;
          v27[0] = this;
          v27[1] = a5;
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          LOBYTE(v28) = v13;
          v10 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1bed2b100b1af394f2735e08786001a___(this, v27);
          v16 = pvAttribute;
          if ( pvAttribute )
          {
            pvAttribute = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
        }
      }
    }
    v17 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v10 >= 0 )
    {
      v18 = *(_QWORD *)a5;
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 73);
      v10 = (*(__int64 (__fastcall **)(struct IIAMServiceProvider *, SID *, GUID *, __int64 *))(v18 + 24))(
              a5,
              &SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              v19);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v22) = a3;
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      &WPP_7785cad5b4a736930de9968ca66fe3e3_Traceguids,
      a2,
      v22,
      *((_DWORD *)this + 14));
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v32, v10);
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
  v32[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v32);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v32);
  return (unsigned int)v10;
}
