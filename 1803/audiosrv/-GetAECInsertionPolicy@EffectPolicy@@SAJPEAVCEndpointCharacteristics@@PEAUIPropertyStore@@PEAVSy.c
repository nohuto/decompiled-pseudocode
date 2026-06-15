/*
 * XREFs of ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18005BE28
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800516AC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180050A70 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180052E4C (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800535EC (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPolicy::GetAECInsertionPolicy(
        struct CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct SystemEffectDescriptor *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  __int64 v9; // rax
  unsigned int v10; // r14d
  int v11; // esi
  const WCHAR *v12; // r8
  bool v13; // zf
  BOOL IsAPOModeSupported; // eax
  int DefaultEffectChainClsids; // eax
  unsigned int v17; // r14d
  int v18; // [rsp+20h] [rbp-50h]
  unsigned int pvData[4]; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v23 = -2LL;
  v9 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
    v9 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
  v10 = v9 == 0;
  pvData[0] = 0;
  v11 = 4;
  pcbData = 4;
  v12 = L"InboxAECPolicyCommsTmp";
  if ( v9 )
    v12 = L"InboxAECPolicy";
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          v12,
          0x18u,
          0LL,
          pvData,
          &pcbData)
    && pvData[0] < 4 )
  {
    v10 = pvData[0];
    *((_DWORD *)a6 + 1) = pvData[0];
  }
  if ( v10 == 1 )
  {
    *(_DWORD *)a5 = 0;
LABEL_14:
    *((_DWORD *)a6 + 16) = 0;
    goto LABEL_12;
  }
  if ( v10 == 3 )
  {
    *(_DWORD *)a5 = 1;
    goto LABEL_14;
  }
  v13 = *((_DWORD *)this + 6) == 3;
  *((_DWORD *)a6 + 2) = v13;
  if ( v13 )
  {
    *(_DWORD *)a5 = 1;
    *((_DWORD *)a6 + 16) = 1;
    goto LABEL_12;
  }
  v20 = *a4;
  *((_DWORD *)a6 + 3) = CEndpointCharacteristics::IsConnectorModeSupported(this, *((_DWORD *)a3 + 12), &v20);
  v20 = *a4;
  IsAPOModeSupported = CEndpointCharacteristics::IsAPOModeSupported(
                         this,
                         &v20,
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 12));
  *((_DWORD *)a6 + 4) = IsAPOModeSupported;
  if ( !*((_DWORD *)a6 + 3) && !IsAPOModeSupported )
  {
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 3;
LABEL_12:
    *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
    return 0LL;
  }
  *(_QWORD *)&v20.Data1 = 0LL;
  *(_QWORD *)v20.Data4 = 0LL;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               a3,
                               (struct CAudioSignalProcessingModeArray *)&v20,
                               &v22,
                               0LL);
  v17 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids >= 0 )
  {
    if ( !v22 )
    {
      *((_DWORD *)a6 + 9) = 0;
      v11 = 2;
    }
    *(_DWORD *)a5 = v11;
    *((_DWORD *)a6 + 16) = v11;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids,
    v18);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
  return v17;
}
