/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180040B88
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180040140 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCall.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__&___ptr64_1__1_::Invoke @ 0x180044BE0 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__-.c)
 * Callees:
 *     WPP_SF_ @ 0x180006A8C (WPP_SF_.c)
 *     WPP_SF_d @ 0x180006BA0 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x180006D2C (WPP_SF_qd.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     WPP_SF_qqL @ 0x18003BF2C (WPP_SF_qqL.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800412E0 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180042D1C (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$Start@$$V@PrepareToSwitchHelper@CAppViewManagerTelemetry@@SA?AV01@XZ @ 0x1800446AC (--$Start@$$V@PrepareToSwitchHelper@CAppViewManagerTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  struct IImmersiveApplicationInternal *v13; // rsi
  struct IImmersiveApplicationInternal *v14; // rbx
  struct IImmersiveApplicationInternal *v15; // rdi
  bool v16; // al
  int GlomForWindow; // r14d
  CAppViewManager *v18; // rbx
  CAppViewManager *v19; // rcx
  bool IsMultiViewOperationAllowed; // al
  int v21; // ecx
  int v22; // eax
  _QWORD *v23; // rcx
  USHORT v24; // dx
  unsigned int v25; // eax
  unsigned int v26; // r12d
  char v27; // al
  unsigned __int8 v28; // al
  int v29; // eax
  int v30; // eax
  struct IImmersiveApplicationInternal *v31; // rax
  __int64 v33; // [rsp+28h] [rbp-E0h]
  bool v34[8]; // [rsp+38h] [rbp-D0h] BYREF
  CAppViewManager *v35; // [rsp+40h] [rbp-C8h]
  struct IImmersiveApplicationInternal *v36; // [rsp+48h] [rbp-C0h]
  struct IImmersiveApplicationInternal *v37; // [rsp+50h] [rbp-B8h] BYREF
  struct IImmersiveApplicationInternal *v38; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE *v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  _BYTE *v41; // [rsp+70h] [rbp-98h]
  struct IImmersiveApplicationInternal **v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  _QWORD v44[40]; // [rsp+88h] [rbp-80h] BYREF

  v43 = -2LL;
  v35 = a1;
  v40 = a5;
  v42 = a6;
  v41 = a7;
  v39 = a8;
  CAppViewManagerTelemetry::PrepareToSwitchHelper::Start<>((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v44);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqL(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, a2, a3, a4);
  v13 = 0LL;
  v36 = 0LL;
  v34[4] = 0;
  v14 = 0LL;
  v37 = 0LL;
  v15 = 0LL;
  v38 = 0LL;
  v34[0] = 0;
  v16 = 0;
  v34[1] = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_16;
  }
  v18 = v35;
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v35, a2, &v37, v34);
  if ( GlomForWindow < 0 )
    goto LABEL_11;
  if ( !v34[0] )
  {
    GlomForWindow = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        &WPP_99aca6d361263e91c27c68872c80b102_Traceguids,
        -2147024891);
    goto LABEL_11;
  }
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v18, a3, &v38, &v34[1]);
  v15 = v38;
  if ( GlomForWindow < 0 )
  {
LABEL_11:
    v14 = v37;
    goto LABEL_61;
  }
  IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v19, v38);
  v21 = GlomForWindow;
  if ( !IsMultiViewOperationAllowed )
    v21 = -2147024891;
  GlomForWindow = v21;
  v14 = v37;
  v16 = v34[1];
LABEL_16:
  if ( GlomForWindow < 0 )
    goto LABEL_61;
  if ( v16 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 400LL))(v14)
      && !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 400LL))(v15) )
    {
      if ( (a4 & 2) == 0 )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids);
        goto LABEL_42;
      }
      v22 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v35 + 14) + 96LL))(
              *((_QWORD *)v35 + 14),
              v14,
              v15,
              0LL);
      GlomForWindow = v22;
      v23 = WPP_GLOBAL_Control;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_42:
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 8LL))(v15);
        v13 = v15;
        v36 = v15;
        v28 = 0;
        goto LABEL_55;
      }
      v24 = 20;
LABEL_34:
      WPP_SF_d(v23[2], v24, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids, v22);
      goto LABEL_42;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v15 + 400LL))(v15) )
    {
      v25 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 280LL))(v14);
      v26 = v25 >> 1;
      LOBYTE(v26) = (v25 & 2) != 0;
      *(_DWORD *)&v34[4] = v26;
      if ( (a4 & 2) == 0 )
        goto LABEL_42;
      if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 400LL))(v14) )
        *v39 = 1;
      v22 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v35 + 14) + 96LL))(
              *((_QWORD *)v35 + 14),
              v14,
              v15,
              0LL);
      GlomForWindow = v22;
      v23 = WPP_GLOBAL_Control;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        goto LABEL_42;
      v24 = 22;
      goto LABEL_34;
    }
    if ( (~(a4 >> 1) & 1) != 0 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids);
      v27 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 280LL))(v14);
      v34[4] = (v27 & 2) != 0;
      if ( (v27 & 2) == 0 )
        GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *))(**((_QWORD **)v35 + 14)
                                                                                                  + 72LL))(
                          *((_QWORD *)v35 + 14),
                          v15);
      *v39 = 1;
      goto LABEL_42;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, __int64))(**((_QWORD **)v35 + 14) + 96LL))(
            *((_QWORD *)v35 + 14),
            v15,
            v14,
            v40);
    GlomForWindow = v29;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids, v29);
  }
  else
  {
    if ( (unsigned int)SHIsSameObject(
                         (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v14,
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids);
    }
    else
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, __int64))(**((_QWORD **)v35 + 14) + 88LL))(
              *((_QWORD *)v35 + 14),
              a3,
              v15,
              v14,
              v40);
      GlomForWindow = v30;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v33) = v30;
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids, a2, v33);
      }
    }
    v28 = 1;
    if ( !v14 )
      goto LABEL_55;
  }
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 8LL))(v14);
  v28 = 1;
  v36 = v14;
  v13 = v14;
LABEL_55:
  if ( GlomForWindow >= 0 )
  {
    GlomForWindow = v28;
    if ( v34[4] )
    {
      *v41 = 1;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids);
    }
    v31 = v13;
    v13 = 0LL;
    v36 = 0LL;
    *v42 = v31;
  }
LABEL_61:
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
