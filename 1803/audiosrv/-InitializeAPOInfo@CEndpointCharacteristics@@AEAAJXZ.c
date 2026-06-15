/*
 * XREFs of ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x1800EC1C0
 * Callers:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180038C5C (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180095750 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18009586C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180095998 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180097458 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x1800EABD8 (-FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::InitializeAPOInfo(CEndpointCharacteristics *this)
{
  unsigned int v2; // esi
  int *v3; // r14
  int SupportedProcessingModes; // eax
  unsigned int v5; // edi
  int v6; // edi
  struct IAudioSystemEffects2 *v7; // rcx
  unsigned int v8; // edi
  int *v9; // r14
  int v10; // eax
  unsigned int v11; // esi
  int v12; // esi
  struct IAudioSystemEffects2 *v13; // rcx
  unsigned int v14; // edi
  int *v15; // rsi
  int EndpointEffect; // r14d
  struct IAudioSystemEffects2 *v17; // rcx
  struct IAudioSystemEffects2 *v19; // [rsp+48h] [rbp-19h] BYREF
  __int64 v20; // [rsp+50h] [rbp-11h] BYREF
  __int64 v21; // [rsp+58h] [rbp-9h]
  struct _GUID v22; // [rsp+68h] [rbp+7h] BYREF
  __int64 v23; // [rsp+78h] [rbp+17h]
  _DWORD v24[4]; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v23 = -2LL;
  v24[0] = 0;
  v24[1] = 1;
  v24[2] = 3;
  *((_DWORD *)this + 51) = 1;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  v2 = 0;
  v3 = v24;
  do
  {
    v20 = 0LL;
    v21 = 0LL;
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(
                                 (__int64)this + 96 * v2 + 232,
                                 (__int64)&v20,
                                 1);
    v5 = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x296,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SupportedProcessingModes);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
      return v5;
    }
    v6 = 0;
    if ( (int)v21 > 0 )
    {
      while ( 1 )
      {
        v19 = 0LL;
        v22 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)&v20,
                                 v6);
        if ( (int)CEndpointCharacteristics::GetStreamEffect(this, &v22, 1, *v3, 0LL, 0LL, &v19) < 0 )
          goto LABEL_7;
        v7 = v19;
        if ( v19 )
          break;
LABEL_8:
        if ( v7 )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))v7->lpVtbl->Release)(v7);
        if ( ++v6 >= (int)v21 )
          goto LABEL_11;
      }
      if ( (unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v19, v19) )
      {
        *((_DWORD *)this + 53) = 1;
        if ( v19 )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))v19->lpVtbl->Release)(v19);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
        break;
      }
LABEL_7:
      v7 = v19;
      goto LABEL_8;
    }
LABEL_11:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  v8 = 0;
  v9 = v24;
  while ( 1 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v10 = SystemEffectDescriptor::GetSupportedProcessingModes((__int64)this + 96 * v8 + 616, (__int64)&v20, 1);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AB,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
      return v11;
    }
    v12 = 0;
    if ( (int)v21 > 0 )
      break;
LABEL_26:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
    ++v8;
    ++v9;
    if ( v8 >= 3 )
      goto LABEL_31;
  }
  while ( 1 )
  {
    v19 = 0LL;
    v22 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v20, v12);
    if ( (int)CEndpointCharacteristics::GetModeEffect(this, &v22, 1, *v9, 0LL, 0LL, &v19) < 0 )
      goto LABEL_22;
    v13 = v19;
    if ( v19 )
      break;
LABEL_23:
    if ( v13 )
      ((void (__fastcall *)(struct IAudioSystemEffects2 *))v13->lpVtbl->Release)(v13);
    if ( ++v12 >= (int)v21 )
      goto LABEL_26;
  }
  if ( !(unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v19, v19) )
  {
LABEL_22:
    v13 = v19;
    goto LABEL_23;
  }
  *((_DWORD *)this + 54) = 1;
  if ( v19 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v19->lpVtbl->Release)(v19);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
LABEL_31:
  v14 = 0;
  v15 = v24;
  while ( 2 )
  {
    v19 = 0LL;
    EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(this, 1, *v15, 0LL, 0LL, &v19);
    if ( EndpointEffect < 0 )
    {
LABEL_35:
      v17 = v19;
LABEL_36:
      if ( v17 )
        ((void (__fastcall *)(struct IAudioSystemEffects2 *))v17->lpVtbl->Release)(v17);
      ++v14;
      ++v15;
      if ( v14 >= 3 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  v17 = v19;
  if ( !v19 )
    goto LABEL_36;
  if ( !(unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v19, v19) )
    goto LABEL_35;
  *((_DWORD *)this + 55) = 1;
  if ( v19 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v19->lpVtbl->Release)(v19);
LABEL_42:
  *((_QWORD *)this + 25) = 1LL;
  return (unsigned int)EndpointEffect;
}
