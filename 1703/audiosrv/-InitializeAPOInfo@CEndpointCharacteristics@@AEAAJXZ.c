/*
 * XREFs of ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x180033158
 * Callers:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z @ 0x18000E550 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z.c)
 *     ?IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z @ 0x180079FB4 (-IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x180032C50 (-FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032D48 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032FD4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800334D4 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::InitializeAPOInfo(CEndpointCharacteristics *this)
{
  unsigned int v2; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v3; // r14
  int SupportedProcessingModes; // eax
  unsigned int v5; // edi
  int v6; // edi
  unsigned int v7; // edi
  int *v8; // r14
  int v9; // eax
  unsigned int v10; // esi
  int v11; // esi
  unsigned int v12; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v13; // rsi
  int EndpointEffect; // r14d
  struct IAudioSystemEffects2 *v15; // rcx
  struct IAudioSystemEffects2 *v17; // rcx
  struct IAudioSystemEffects2 *v18; // rcx
  int v19; // [rsp+28h] [rbp-39h]
  struct IAudioSystemEffects2 *v20; // [rsp+48h] [rbp-19h] BYREF
  __int64 v21; // [rsp+50h] [rbp-11h] BYREF
  __int64 v22; // [rsp+58h] [rbp-9h]
  struct _GUID v23; // [rsp+68h] [rbp+7h] BYREF
  __int64 v24; // [rsp+78h] [rbp+17h]
  _DWORD v25[4]; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v24 = -2LL;
  v25[0] = 0;
  v25[1] = 1;
  v25[2] = 3;
  *((_DWORD *)this + 51) = 1;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  v2 = 0;
  v3 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v25;
  do
  {
    v21 = 0LL;
    v22 = 0LL;
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(
                                 (char *)this + 96 * v2 + 224,
                                 &v21,
                                 1LL);
    v5 = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x26D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SupportedProcessingModes,
        v19);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
      return v5;
    }
    v6 = 0;
    if ( (int)v22 > 0 )
    {
      while ( 1 )
      {
        v20 = 0LL;
        v23 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)&v21,
                                 v6);
        if ( (int)CEndpointCharacteristics::GetStreamEffect(this, &v23, 1, *v3, 0LL, 0LL, &v20) < 0 )
          goto LABEL_27;
        v18 = v20;
        if ( v20 )
          break;
LABEL_28:
        if ( v18 )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))v18->lpVtbl->Release)(v18);
        if ( ++v6 >= (int)v22 )
          goto LABEL_4;
      }
      if ( (unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v20, v20) )
      {
        *((_DWORD *)this + 53) = 1;
        if ( v20 )
          ((void (__fastcall *)(struct IAudioSystemEffects2 *))v20->lpVtbl->Release)(v20);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
        break;
      }
LABEL_27:
      v18 = v20;
      goto LABEL_28;
    }
LABEL_4:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
    ++v2;
    ++v3;
  }
  while ( v2 < 3 );
  v7 = 0;
  v8 = v25;
  while ( 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v9 = SystemEffectDescriptor::GetSupportedProcessingModes((char *)this + 96 * v7 + 608, &v21, 1LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x282,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9,
        v19);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
      return v10;
    }
    v11 = 0;
    if ( (int)v22 > 0 )
      break;
LABEL_8:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
    ++v7;
    ++v8;
    if ( v7 >= 3 )
      goto LABEL_9;
  }
  while ( 1 )
  {
    v20 = 0LL;
    v23 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v21, v11);
    if ( (int)CEndpointCharacteristics::GetModeEffect(this, &v23, 1, *v8, 0LL, 0LL, &v20) < 0 )
      goto LABEL_19;
    v17 = v20;
    if ( v20 )
      break;
LABEL_20:
    if ( v17 )
      ((void (__fastcall *)(struct IAudioSystemEffects2 *))v17->lpVtbl->Release)(v17);
    if ( ++v11 >= (int)v22 )
      goto LABEL_8;
  }
  if ( !(unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v20, v20) )
  {
LABEL_19:
    v17 = v20;
    goto LABEL_20;
  }
  *((_DWORD *)this + 54) = 1;
  if ( v20 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v20->lpVtbl->Release)(v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
LABEL_9:
  v12 = 0;
  v13 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v25;
  while ( 2 )
  {
    v20 = 0LL;
    EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(this, 1, *v13, 0LL, 0LL, &v20);
    if ( EndpointEffect < 0 )
      goto LABEL_41;
    v15 = v20;
    if ( !v20 )
      goto LABEL_12;
    if ( !(unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v20, v20) )
    {
LABEL_41:
      v15 = v20;
LABEL_12:
      if ( v15 )
        ((void (__fastcall *)(struct IAudioSystemEffects2 *))v15->lpVtbl->Release)(v15);
      ++v12;
      ++v13;
      if ( v12 >= 3 )
        goto LABEL_15;
      continue;
    }
    break;
  }
  *((_DWORD *)this + 55) = 1;
  if ( v20 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v20->lpVtbl->Release)(v20);
LABEL_15:
  *((_QWORD *)this + 25) = 1LL;
  return (unsigned int)EndpointEffect;
}
