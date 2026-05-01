/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180042C54
 * Callers:
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180041BC0 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180041DB0 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     WPP_SF_ @ 0x180006B2C (WPP_SF_.c)
 *     WPP_SF_d @ 0x180006C40 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x180006DCC (WPP_SF_qd.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     WPP_SF_qqL @ 0x18003D11C (WPP_SF_qqL.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180043660 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18004521C (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180047D08 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_PrepareToSwitchHelper(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        struct IImmersiveApplicationInternal **a6,
        _BYTE *a7,
        _BYTE *a8)
{
  HWND v9; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  struct IImmersiveApplicationInternal *v13; // rsi
  struct IImmersiveApplicationInternal *v14; // rbx
  struct IImmersiveApplicationInternal *v15; // rdi
  bool v16; // al
  int GlomForWindow; // r15d
  CAppViewManager *v18; // rbx
  CAppViewManager *v19; // rcx
  bool IsMultiViewOperationAllowed; // al
  int v21; // ecx
  int v22; // r14d
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r14d
  int v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  int v29; // eax
  struct IImmersiveApplicationInternal *v30; // rax
  __int64 v32; // [rsp+28h] [rbp-E0h]
  bool v33[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IImmersiveApplicationInternal *v34; // [rsp+40h] [rbp-C8h] BYREF
  CAppViewManager *v35; // [rsp+48h] [rbp-C0h]
  struct IImmersiveApplicationInternal *v36; // [rsp+50h] [rbp-B8h]
  struct IImmersiveApplicationInternal *v37; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE *v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  HWND v40; // [rsp+70h] [rbp-98h]
  _BYTE *v41; // [rsp+78h] [rbp-90h]
  struct IImmersiveApplicationInternal **v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h]
  _QWORD v44[4]; // [rsp+98h] [rbp-70h] BYREF
  int v45; // [rsp+B8h] [rbp-50h]
  int *v46; // [rsp+C0h] [rbp-48h]
  int *v47; // [rsp+C8h] [rbp-40h]
  int v48; // [rsp+D0h] [rbp-38h] BYREF
  char v49; // [rsp+D4h] [rbp-34h]
  int v50; // [rsp+F8h] [rbp-10h] BYREF
  const char *v51; // [rsp+100h] [rbp-8h]
  __int64 v52; // [rsp+108h] [rbp+0h]
  char v53; // [rsp+110h] [rbp+8h]
  __int64 v54; // [rsp+118h] [rbp+10h]
  _BYTE v55[144]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  __int64 v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  __int64 v59; // [rsp+1C8h] [rbp+C0h]

  v43 = -2LL;
  v9 = a3;
  v40 = a3;
  v35 = a1;
  v39 = a5;
  v42 = a6;
  v41 = a7;
  v38 = a8;
  v44[1] = 0LL;
  v44[2] = v44;
  v44[3] = 0LL;
  v45 = 0;
  v46 = &v50;
  v47 = &v48;
  v48 = 0;
  v49 = 0;
  v53 = 0;
  v50 = 0;
  v51 = "PrepareToSwitchHelper";
  v52 = 0LL;
  v54 = 1LL;
  v56 = 0LL;
  v57 = 0LL;
  memset(v55, 0, sizeof(v55));
  v58 = 0LL;
  v59 = 0LL;
  v44[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v44);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqL(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, a2, v9, a4);
  v13 = 0LL;
  v36 = 0LL;
  v33[4] = 0;
  v14 = 0LL;
  v34 = 0LL;
  v15 = 0LL;
  v37 = 0LL;
  v33[0] = 0;
  v16 = 0;
  v33[1] = 0;
  v33[2] = 1;
  if ( a2 == v9 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_17;
  }
  v18 = v35;
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v35, a2, &v34, v33);
  if ( GlomForWindow < 0 )
    goto LABEL_11;
  if ( !v33[0] )
  {
    GlomForWindow = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        &WPP_dd55687d9f3130295d495cf49017a234_Traceguids,
        -2147024891);
    goto LABEL_11;
  }
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v18, v9, &v37, &v33[1]);
  v15 = v37;
  if ( GlomForWindow < 0 )
  {
LABEL_11:
    v14 = v34;
    goto LABEL_64;
  }
  IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v19, v37);
  v21 = GlomForWindow;
  if ( !IsMultiViewOperationAllowed )
    v21 = -2147024891;
  GlomForWindow = v21;
  v14 = v34;
  if ( v21 >= 0 )
  {
    v22 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v34 + 616LL))(v34);
    v33[2] = (*(unsigned int (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 616LL))(v15) == v22;
    v16 = v33[1];
    v9 = v40;
LABEL_17:
    if ( GlomForWindow < 0 )
      goto LABEL_64;
    if ( v16 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 400LL))(v14)
        && !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 400LL))(v15) )
      {
        if ( (a4 & 2) != 0 )
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v35 + 16) + 96LL))(
                  *((_QWORD *)v35 + 16),
                  v14,
                  v15,
                  0LL);
          GlomForWindow = v23;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids, v23);
        }
        else if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids);
        }
LABEL_48:
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 8LL))(v15);
        v13 = v15;
        v36 = v15;
        v28 = 0;
        goto LABEL_58;
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 400LL))(v15)
        || !v33[2] && (a4 & 2) != 0 )
      {
        v33[4] = ((*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 280LL))(v14) & 2) != 0;
        if ( (a4 & 2) != 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 400LL))(v14) )
            *v38 = 1;
          v27 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v35 + 16) + 96LL))(
                  *((_QWORD *)v35 + 16),
                  v14,
                  v15,
                  0LL);
          GlomForWindow = v27;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids, v27);
        }
        goto LABEL_48;
      }
      if ( (~(a4 >> 1) & 1) != 0 )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids);
        v24 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 280LL))(v14);
        v25 = v24 >> 1;
        LOBYTE(v25) = (v24 & 2) != 0;
        *(_DWORD *)&v33[4] = v25;
        if ( (v24 & 2) == 0 )
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *))(**((_QWORD **)v35 + 16) + 72LL))(
                            *((_QWORD *)v35 + 16),
                            v15);
        *v38 = 1;
        goto LABEL_48;
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, __int64))(**((_QWORD **)v35 + 16) + 96LL))(
              *((_QWORD *)v35 + 16),
              v15,
              v14,
              v39);
      GlomForWindow = v26;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids, v26);
    }
    else
    {
      if ( (unsigned int)SHIsSameObject(
                           (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v14,
                           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15) )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids);
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, __int64))(**((_QWORD **)v35 + 16) + 88LL))(
                *((_QWORD *)v35 + 16),
                v9,
                v15,
                v14,
                v39);
        GlomForWindow = v29;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v32) = v29;
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Au,
            &WPP_dd55687d9f3130295d495cf49017a234_Traceguids,
            a2,
            v32);
        }
      }
      v28 = 1;
      if ( !v14 )
        goto LABEL_58;
    }
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 8LL))(v14);
    v28 = 1;
    v36 = v14;
    v13 = v14;
LABEL_58:
    if ( GlomForWindow >= 0 )
    {
      GlomForWindow = v28;
      if ( v33[4] )
      {
        *v41 = 1;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids);
      }
      v30 = v13;
      v13 = 0LL;
      v36 = 0LL;
      *v42 = v30;
    }
  }
LABEL_64:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v44, GlomForWindow);
  if ( v15 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v14 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 16LL))(v13);
  v44[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v44);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v44);
  return (unsigned int)GlomForWindow;
}
