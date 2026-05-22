/*
 * XREFs of ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009B58 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18004DBE8 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ProcessSourceDetectedAndLoss@MPCSixDofProcessor@@AEAAXPEAUIMPCInputTarget@@0PEAUInputInfo@@_NPEA_N@Z @ 0x18004F1B4 (-ProcessSourceDetectedAndLoss@MPCSixDofProcessor@@AEAAXPEAUIMPCInputTarget@@0PEAUInputInfo@@_NPE.c)
 *     ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180050F6C (-TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180051A40 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA-AW4wil_deta.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180056C0C (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18005FED0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCSixDofProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  char v4; // r13
  _OWORD *v5; // rax
  struct InputInfo *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  MPCHolographicInputManager *Instance; // rax
  MPCSixDofProcessor *v12; // r12
  struct IInputDisplay *v13; // rsi
  MPCHolographicInputManager *v14; // rax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  struct IMPCInputTarget *v18; // rcx
  struct IMPCInputTarget *v19; // rdi
  struct IInputTarget *v20; // rcx
  int v21; // eax
  struct IMPCInputTarget *v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  __int16 v26; // [rsp+A4h] [rbp+4Ch]
  struct IMPCInputTarget *v27; // [rsp+A8h] [rbp+50h] BYREF
  struct IInputTarget *v28; // [rsp+B0h] [rbp+58h] BYREF
  struct IMPCInputTarget *v29; // [rsp+B8h] [rbp+60h] BYREF

  v4 = 0;
  v25 = 0;
  v5 = (_OWORD *)(this + 1032);
  v6 = a2;
  v7 = 22LL;
  do
  {
    *v5 = *(_OWORD *)v6;
    v5[1] = *((_OWORD *)v6 + 1);
    v5[2] = *((_OWORD *)v6 + 2);
    v5[3] = *((_OWORD *)v6 + 3);
    v5[4] = *((_OWORD *)v6 + 4);
    v5[5] = *((_OWORD *)v6 + 5);
    v5[6] = *((_OWORD *)v6 + 6);
    v5 += 8;
    *(v5 - 1) = *((_OWORD *)v6 + 7);
    v6 = (struct InputInfo *)((char *)v6 + 128);
    --v7;
  }
  while ( v7 );
  *v5 = *(_OWORD *)v6;
  v5[1] = *((_OWORD *)v6 + 1);
  v8 = *(_QWORD *)(this + 512);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(this + 512), 128LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, v9);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v10);
  }
  if ( *((_BYTE *)a2 + 1548) && *((_BYTE *)a2 + 1549) )
  {
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      && MPCSixDofProcessor::AreButtonsOrAxesActive((MPCSixDofProcessor *)(this - 24), a2) )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetCachedFeatureEnabledState();
      v25 = 0;
      LOBYTE(v26) = 3;
      LODWORD(v27) = 0;
      WORD2(v27) = v26;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data,
        0xAC02ABu,
        (const struct FEATURE_LOGGED_TRAITS *)&v27,
        1,
        3);
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
  }
  else if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::DemoteProviderPrimary(
      Instance,
      (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)));
  }
  v28 = 0LL;
  v12 = (MPCSixDofProcessor *)(this - 24);
  v13 = *(struct IInputDisplay **)(this + 32);
  v14 = MPCHolographicInputManager::GetInstance();
  v15 = MPCHolographicInputManager::Process3DInput(
          v14,
          v13,
          a2,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
          &v28);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v15);
LABEL_40:
    v20 = v28;
    goto LABEL_41;
  }
  MPCSixDofProcessor::ProcessHomeGesture(v12, a2);
  v29 = 0LL;
  if ( v28
    && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, struct IMPCInputTarget **))v28)(
         v28,
         &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
         &v29) >= 0
    && v29
    && !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v29 + 56LL))(v29) )
  {
    MPCSixDofProcessor::TreatTouchpadPressAsInteraction(v12, a2);
  }
  if ( v8 )
  {
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IMPCInputTarget **))v8)(
            v8,
            &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042,
            &v27);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v4 = 3;
    v18 = v27;
    v19 = v27;
  }
  else
  {
    v19 = 0LL;
    v18 = v27;
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v19 + 8LL))(v19);
    v18 = v27;
  }
  if ( (v4 & 1) != 0 && v18 )
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
  LOBYTE(v25) = 0;
  MPCSixDofProcessor::ProcessSourceDetectedAndLoss(v12, v19, v29, a2, 1, (bool *)&v25);
  v20 = v28;
  if ( v28 && !(_BYTE)v25 )
  {
    v21 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)v28 + 24LL))(v28, a2);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1D5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v20 = v28;
  }
  v16 = 0;
  if ( v19 )
  {
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
    v20 = v28;
  }
  v22 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
    goto LABEL_40;
  }
LABEL_41:
  if ( v20 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v16;
}
