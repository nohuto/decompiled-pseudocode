/*
 * XREFs of ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x180043C90
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
        CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct _tagpropertykey *a3,
        char a4,
        struct CAudioSignalProcessingModeArray *a5)
{
  HRESULT v6; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  PROPVARIANT pvar; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h]
  GUID pclsid; // [rsp+38h] [rbp-18h] BYREF

  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v6 = 0;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a2->lpVtbl->GetValue)(
         a2,
         a3,
         &pvar) >= 0
    && (_WORD)pvar == 4127
    && (_DWORD)v12 )
  {
    v8 = 0LL;
    do
    {
      v6 = CLSIDFromString(*(LPCOLESTR *)(v13 + 8 * v8), &pclsid);
      if ( v6 < 0 )
        break;
      if ( a4 )
        goto LABEL_11;
      v9 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v9 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v9 )
      {
LABEL_11:
        v10 = 0;
        while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                (__int64)a5,
                                (_OWORD *)&pclsid.Data1 + v10) )
        {
          if ( ++v10 )
          {
            v6 = 0;
            goto LABEL_15;
          }
        }
        v6 = -2147024882;
        break;
      }
LABEL_15:
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < (unsigned int)v12 );
  }
  PropVariantClear(&pvar);
  return (unsigned int)v6;
}
