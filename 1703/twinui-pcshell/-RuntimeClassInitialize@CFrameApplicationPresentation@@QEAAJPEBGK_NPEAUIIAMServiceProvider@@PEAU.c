/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180065F64
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800578EC (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     WPP_SF_Sdd @ 0x180006B18 (WPP_SF_Sdd.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     WPP_SF_Sd @ 0x18004FC08 (WPP_SF_Sd.c)
 *     ??$Start@AEAPEBG@Initialization@CFramePresentationTelemetry@@SA?AV01@AEAPEBG@Z @ 0x18005B268 (--$Start@AEAPEBG@Initialization@CFramePresentationTelemetry@@SA-AV01@AEAPEBG@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___ @ 0x180069818 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CFrameApplicationPresentation::RuntimeClassInitialize(
        CFrameApplicationPresentation *this,
        unsigned __int16 *a2,
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
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 pvAttribute; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  HWND hwnd; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  bool v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  struct IIAMServiceProvider *v29; // [rsp+70h] [rbp-90h]
  struct IIAMServiceProvider *v30; // [rsp+78h] [rbp-88h]
  _QWORD v31[40]; // [rsp+90h] [rbp-70h] BYREF

  v28 = -2LL;
  hwnd = (HWND)a2;
  CFramePresentationTelemetry::Initialization::Start<unsigned short const * &>(
    (CFramePresentationTelemetry::Initialization *)v31,
    (const unsigned __int16 **)&hwnd);
  *((_BYTE *)this + 45) = a4;
  v29 = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)a5 + 24LL))(
          a5,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &v24);
  if ( v10 < 0 )
    goto LABEL_26;
  v23 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)v24 + 72LL))(
          v24,
          a2,
          a3,
          &v23);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &hwnd);
    if ( v10 >= 0 )
    {
      if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr)
        && DwmGetWindowAttribute(hwnd, 0xEu, &pvAttribute, 4u) >= 0 )
      {
        *((_BYTE *)this + 44) = (pvAttribute & 2) == 0;
      }
      v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)this + 208,
              a2,
              0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 >= 0 )
      {
        v11 = v23;
        if ( *((_QWORD *)this + 14) != v23 )
        {
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
          v12 = *((_QWORD *)this + 14);
          *((_QWORD *)this + 14) = v11;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        *((_QWORD *)this + 15) = hwnd;
        *((_QWORD *)this + 29) = a6;
        v30 = a5;
        (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
        v13 = 0;
        pvAttribute = 0LL;
        v14 = (int (__fastcall **)(_QWORD, GUID *, __int64 *))**((_QWORD **)this + 29);
        v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&pvAttribute);
        if ( (*v14)(*((_QWORD *)this + 29), &GUID_8b14e88b_5663_4caf_b196_c31479262831, v15) >= 0 )
          v13 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)pvAttribute + 328LL))(pvAttribute, 6LL) == 0;
        v26[0] = this;
        v26[1] = a5;
        (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
        v27 = v13;
        v10 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___(this, v26);
        v16 = pvAttribute;
        if ( pvAttribute )
        {
          pvAttribute = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
      }
    }
    goto LABEL_23;
  }
  v17 = WPP_GLOBAL_Control;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_a1658e10cf12387b63d474d4cc4de9d3_Traceguids, a2, a3);
LABEL_23:
    v17 = WPP_GLOBAL_Control;
  }
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_26:
    v17 = WPP_GLOBAL_Control;
  }
  if ( (*((_BYTE *)v17 + 28) & 1) != 0 && *((_BYTE *)v17 + 25) >= 4u )
  {
    LODWORD(v21) = a3;
    WPP_SF_Sdd(v17[2], 0xBu, &WPP_a1658e10cf12387b63d474d4cc4de9d3_Traceguids, a2, v21, *((_DWORD *)this + 10));
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v31, v10);
  v19 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
  v31[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v31);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
  return (unsigned int)v10;
}
