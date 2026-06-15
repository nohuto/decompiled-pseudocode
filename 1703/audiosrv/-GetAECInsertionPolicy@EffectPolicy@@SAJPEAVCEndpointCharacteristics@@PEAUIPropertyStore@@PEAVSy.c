/*
 * XREFs of ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180046A64
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180032CDC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180041C10 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004415C (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPolicy::GetAECInsertionPolicy(
        struct CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct SystemEffectDescriptor *a3,
        enum INBOX_AEC_INSERTION_POLICY *a4,
        struct _AEC_POLICY_RESULTS *a5)
{
  LSTATUS ValueW; // eax
  struct _AEC_POLICY_RESULTS *v9; // rbx
  BOOL v10; // eax
  int IsAPOModeSupported; // eax
  int DefaultEffectChainClsids; // eax
  unsigned int v13; // esi
  unsigned int v15; // eax
  int v16; // [rsp+20h] [rbp-40h]
  DWORD v17; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  struct _GUID v20; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v22; // [rsp+88h] [rbp+28h] BYREF
  int v23; // [rsp+8Ch] [rbp+2Ch]

  v23 = HIDWORD(a2);
  v19 = -2LL;
  v22 = 0;
  v17 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"InboxAECPolicy",
             0x18u,
             0LL,
             &v22,
             &v17);
  v9 = a5;
  if ( !ValueW )
  {
    v15 = v22;
    if ( v22 < 4 )
    {
      *((_DWORD *)a5 + 1) = v22;
      if ( v15 == 1 )
      {
        *(_DWORD *)a4 = 0;
LABEL_17:
        *((_DWORD *)v9 + 16) = 0;
        goto LABEL_8;
      }
      if ( v15 == 3 )
      {
        *(_DWORD *)a4 = 1;
        goto LABEL_17;
      }
    }
  }
  v10 = *((_DWORD *)this + 6) == 3;
  *((_DWORD *)v9 + 2) = v10;
  if ( v10 )
  {
    *(_DWORD *)a4 = 1;
    *((_DWORD *)v9 + 16) = 1;
    goto LABEL_8;
  }
  v20 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  *((_DWORD *)v9 + 3) = CEndpointCharacteristics::IsConnectorModeSupported(this, 0LL, &v20);
  v20 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  IsAPOModeSupported = CEndpointCharacteristics::IsAPOModeSupported(this, &v20, eHostProcessConnector);
  *((_DWORD *)v9 + 4) = IsAPOModeSupported;
  if ( !*((_DWORD *)v9 + 3) && !IsAPOModeSupported )
  {
    *(_DWORD *)a4 = 2;
    *((_DWORD *)v9 + 16) = 3;
LABEL_8:
    *((_DWORD *)v9 + 15) = *(_DWORD *)a4;
    return 0LL;
  }
  *(_QWORD *)&v20.Data1 = 0LL;
  *(_DWORD *)v20.Data4 = 0;
  *(_DWORD *)&v20.Data4[4] = 0;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               a3,
                               (struct CAudioSignalProcessingModeArray *)&v20,
                               &v18,
                               0LL);
  v13 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids >= 0 )
  {
    if ( v18 )
    {
      *(_DWORD *)a4 = 4;
      *((_DWORD *)v9 + 16) = 4;
    }
    else
    {
      *((_DWORD *)v9 + 9) = 0;
      *(_DWORD *)a4 = 2;
      *((_DWORD *)v9 + 16) = 2;
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xD4,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids,
    v16);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
  return v13;
}
