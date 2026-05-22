/*
 * XREFs of ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009880 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18003B8D8 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z @ 0x18003BA6C (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N@Z.c)
 *     ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003FAA4 (-TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041298 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA-AW4wil_deta.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180049A70 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z @ 0x18004A03C (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCInputTarget@@0PEA_NI@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004DDF0 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCSixDofProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  char v4; // r13
  struct IInputTarget *v5; // rdi
  char v6; // r15
  char v7; // bl
  bool IsPrimary; // al
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  struct IMPCInputTarget *v13; // rbx
  int v14; // eax
  struct IMPCInputTarget *v15; // rdx
  int v16; // eax
  struct IMPCInputTarget *v17; // rcx
  struct IInputTarget *v18; // rcx
  struct IInputTarget *v20[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  int v22; // [rsp+A0h] [rbp+48h] BYREF
  __int16 v23; // [rsp+A4h] [rbp+4Ch]
  int v24; // [rsp+A8h] [rbp+50h]
  struct IMPCInputTarget *v25; // [rsp+B0h] [rbp+58h] BYREF
  struct IMPCInputTarget *v26; // [rsp+B8h] [rbp+60h] BYREF

  v20[1] = (struct IInputTarget *)-2LL;
  v4 = 0;
  v24 = 0;
  v5 = *(struct IInputTarget **)(this + 2240);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(this + 2240));
  v20[2] = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = 1;
  if ( !*((_BYTE *)a2 + 1380) || (v7 = 1, !*((_BYTE *)a2 + 1381)) )
    v7 = 0;
  IsPrimary = MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this);
  if ( v7 )
  {
    if ( !IsPrimary && MPCSixDofProcessor::AreButtonsOrAxesActive((MPCSixDofProcessor *)(this - 24), a2) )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetCachedFeatureEnabledState();
      v22 = 0;
      LOBYTE(v23) = 3;
      LODWORD(v25) = 0;
      WORD2(v25) = v23;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data,
        0xAC02ABu,
        (const struct FEATURE_LOGGED_TRAITS *)&v25,
        1,
        3u);
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
  }
  else if ( IsPrimary )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::DemoteProviderPrimary(
      Instance,
      (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)));
  }
  v20[0] = 0LL;
  v10 = MPCHolographicInputManager::GetInstance();
  v11 = MPCHolographicInputManager::Process3DInput(
          v10,
          a2,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
          v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_43;
  }
  LOBYTE(v22) = 0;
  MPCSixDofProcessor::ProcessHomeGesture((MPCSixDofProcessor *)(this - 24), a2, (bool *)&v22);
  v26 = 0LL;
  if ( !v20[0] )
    goto LABEL_24;
  if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, struct IMPCInputTarget **))v20[0])(
         v20[0],
         &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
         &v26) >= 0 )
  {
    if ( !v26 )
    {
LABEL_24:
      v13 = 0LL;
      goto LABEL_25;
    }
    if ( !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v26 + 56LL))(v26) )
      MPCSixDofProcessor::TreatTouchpadPressAsInteraction((MPCSixDofProcessor *)(this - 24), a2);
  }
  v13 = v26;
  if ( !v26 )
    goto LABEL_24;
LABEL_25:
  if ( v5 )
  {
    v14 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IMPCInputTarget **))v5)(
            v5,
            &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
            &v25);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x163B,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v14);
      JUMPOUT(0x18003CF78LL);
    }
    v4 = 3;
    v24 = 3;
    v15 = v25;
  }
  else
  {
    v15 = 0LL;
  }
  MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)(this - 24), v15, v13, (bool *)&v22, 0);
  if ( (v4 & 1) != 0 && v25 )
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( !(_BYTE)v22 && ((*((_DWORD *)a2 + 131) - 1) & 0xFFFFFFFB) != 0 )
    v6 = 0;
  if ( v20[0] && !v6 )
  {
    v16 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v20[0] + 24LL))(v20[0], a2);
    if ( v16 == -2147417853 )
    {
      *(_BYTE *)(this + 2176) = 0;
    }
    else if ( v16 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v16);
    }
  }
  v12 = 0;
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_43:
  v18 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  return v12;
}
