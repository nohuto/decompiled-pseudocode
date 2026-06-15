/*
 * XREFs of ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BD9F8
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800B21B4 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180020D74 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18005A578 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800BC5D4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
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
  unsigned int v10; // esi
  const WCHAR *v11; // r8
  int v12; // ecx
  int IsAPOModeSupported; // eax
  int DefaultEffectChainClsids; // eax
  unsigned int v15; // esi
  unsigned int pvData[4]; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v21 = -2LL;
  v9 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
    v9 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
  v10 = v9 == 0;
  pvData[0] = 0;
  pcbData = 4;
  v11 = L"InboxAECPolicyCommsTmp";
  if ( v9 )
    v11 = L"InboxAECPolicy";
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          v11,
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
LABEL_12:
    *((_DWORD *)a6 + 16) = 0;
    goto LABEL_24;
  }
  if ( v10 == 3 )
  {
    *(_DWORD *)a5 = 1;
    goto LABEL_12;
  }
  v12 = *((_DWORD *)this + 6);
  *((_DWORD *)a6 + 2) = v12 == 3;
  if ( v12 == 3 )
  {
    *(_DWORD *)a5 = 1;
    *((_DWORD *)a6 + 16) = 1;
  }
  else
  {
    v18 = *a4;
    *((_DWORD *)a6 + 3) = CEndpointCharacteristics::IsConnectorModeSupported(this, *((_DWORD *)a3 + 12), &v18);
    v18 = *a4;
    IsAPOModeSupported = CEndpointCharacteristics::IsAPOModeSupported(
                           this,
                           &v18,
                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 12));
    *((_DWORD *)a6 + 4) = IsAPOModeSupported;
    if ( *((_DWORD *)a6 + 3) || IsAPOModeSupported )
    {
      *(_QWORD *)&v18.Data1 = 0LL;
      *(_DWORD *)v18.Data4 = 0;
      *(_DWORD *)&v18.Data4[4] = 0;
      DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                   a3,
                                   (struct CAudioSignalProcessingModeArray *)&v18,
                                   &v20,
                                   0LL);
      v15 = DefaultEffectChainClsids;
      if ( DefaultEffectChainClsids < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xF9,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
          (const char *)(unsigned int)DefaultEffectChainClsids);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v18);
        return v15;
      }
      if ( v20 )
      {
        *(_DWORD *)a5 = 4;
        *((_DWORD *)a6 + 16) = 4;
      }
      else
      {
        *((_DWORD *)a6 + 9) = 0;
        *(_DWORD *)a5 = 2;
        *((_DWORD *)a6 + 16) = 2;
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v18);
    }
    else
    {
      *(_DWORD *)a5 = 2;
      *((_DWORD *)a6 + 16) = 3;
    }
  }
LABEL_24:
  *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
  return 0LL;
}
