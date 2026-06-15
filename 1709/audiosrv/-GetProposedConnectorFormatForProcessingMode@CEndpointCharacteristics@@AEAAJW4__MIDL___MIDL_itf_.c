/*
 * XREFs of ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180021268
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000A70C (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180030384 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18005A524 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x1800ADD54 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BE0F8 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180031050 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // rsi
  GUID fmtid; // xmm0
  HRESULT v9; // ebx
  void *v10; // rcx
  DWORD pid; // eax
  char *v13; // rsi
  struct tWAVEFORMATEX *v14; // rbx
  _QWORD v15[5]; // [rsp+30h] [rbp-A1h] BYREF
  void *v16; // [rsp+58h] [rbp-79h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-71h] BYREF
  __int64 v18; // [rsp+68h] [rbp-69h] BYREF
  __int64 v19; // [rsp+70h] [rbp-61h] BYREF
  __int64 v20; // [rsp+78h] [rbp-59h] BYREF
  __int64 v21; // [rsp+80h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp-49h] BYREF
  PROPVARIANT pvar; // [rsp+90h] [rbp-41h] BYREF
  __int64 v24; // [rsp+98h] [rbp-39h]
  __int64 v25; // [rsp+A0h] [rbp-31h]
  PROPVARIANT v26; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-21h]
  __int64 v28; // [rsp+B8h] [rbp-19h]
  __int64 v29; // [rsp+C0h] [rbp-11h]
  GUID v30; // [rsp+C8h] [rbp-9h] BYREF
  int v31; // [rsp+D8h] [rbp+7h]
  __int128 v32; // [rsp+E0h] [rbp+Fh] BYREF
  int v33; // [rsp+F0h] [rbp+1Fh]

  v29 = -2LL;
  v7 = 0LL;
  v16 = 0LL;
  ppv = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  pv = 0LL;
  pvar = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == eOffloadConnector )
    {
      v15[1] = 0x4C7D1B2C233164C8LL;
      v15[2] = 0x67257A6871B668BCLL;
      v32 = *(_OWORD *)&v15[1];
      fmtid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.fmtid;
      pid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.pid;
    }
    else
    {
      if ( a2 != eKeywordDetectorConnector )
      {
        v9 = -2147024809;
        goto LABEL_11;
      }
      v15[1] = 0x4C7D1B2C233164C8LL;
      v15[2] = 0x67257A6871B668BCLL;
      v32 = *(_OWORD *)&v15[1];
      fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
      pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
    }
    v31 = pid;
  }
  else
  {
    v15[1] = 0x4C7D1B2C233164C8LL;
    v15[2] = 0x67257A6871B668BCLL;
    *(_QWORD *)&v30.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v30.Data4 = 0xFC181731B718BA83uLL;
    v32 = *(_OWORD *)&v15[1];
    fmtid = v30;
    v31 = 1;
  }
  v33 = 1;
  v30 = fmtid;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &v32,
         &pvar);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &v30,
           &v26);
    if ( v9 >= 0 )
    {
      v9 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v24, &v21);
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v21 + 24LL))(
                 v21,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL,
                 0LL,
                 &v20);
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 56LL))(
                   v20,
                   (unsigned int)v27,
                   &v19);
            if ( v9 >= 0 )
            {
              v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v19 + 104LL))(
                     v19,
                     23LL,
                     &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                     &v18);
              if ( v9 >= 0 )
              {
                *(struct _GUID *)&v15[1] = *a3;
                v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *, LPVOID *))(*(_QWORD *)v18 + 24LL))(v18, &v15[1], &pv);
                if ( v9 >= 0 )
                {
                  v13 = (char *)pv;
                  v9 = CTCoAllocPolicy::Alloc(v10, 1u, *((unsigned __int16 *)pv + 40) + 18LL, &v16);
                  if ( v9 < 0 )
                  {
                    v7 = v16;
                  }
                  else
                  {
                    v14 = (struct tWAVEFORMATEX *)v16;
                    memcpy_0(v16, v13 + 64, *((unsigned __int16 *)v13 + 40) + 18LL);
                    *a4 = v14;
                    v7 = 0LL;
                    v9 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  PropVariantClear(&pvar);
  PropVariantClear(&v26);
  CoTaskMemFree(v7);
  CoTaskMemFree(pv);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v9;
}
