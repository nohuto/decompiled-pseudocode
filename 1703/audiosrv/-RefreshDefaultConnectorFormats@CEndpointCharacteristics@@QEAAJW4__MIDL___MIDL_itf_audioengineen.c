/*
 * XREFs of ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BE6F8
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18009D148 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 * Callees:
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000D2D0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180041B34 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18004738C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C1F0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18007D334 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCB8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAXXZ @ 0x1800BEAA0 (-RemoveAll@-$CSimpleArray@PEAUtWAVEFORMATEX@@V-$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::RefreshDefaultConnectorFormats(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  int i; // r14d
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  int j; // edi
  LPVOID *v9; // rcx
  int k; // edi
  void **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int DeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2; // ebx
  __int64 v17; // rdi
  _QWORD *v18; // rsi
  void *v19; // rcx
  LPVOID pv[2]; // [rsp+38h] [rbp-39h] BYREF
  struct _GUID v22; // [rsp+48h] [rbp-29h] BYREF
  char v23; // [rsp+58h] [rbp-19h]
  _BYTE v24[24]; // [rsp+68h] [rbp-9h]
  __int64 v25; // [rsp+80h] [rbp+Fh]
  struct _GUID v26; // [rsp+88h] [rbp+17h] BYREF
  __int64 v27; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v25 = -2LL;
  pv[0] = 0LL;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, eHostProcessConnector, &v26, 0LL, 0LL);
  *(_QWORD *)v24 = this;
  *(struct _GUID *)&v24[8] = v26;
  if ( *((_QWORD *)this + 23) )
  {
    v22 = v26;
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v26, 0, &v22, 0);
    for ( i = 0; ; ++i )
    {
      v4 = *((_QWORD *)this + 23);
      if ( i >= *(_DWORD *)(v4 + 8) )
        break;
      v5 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                       v4,
                       i);
      v6 = (_QWORD *)*v5;
      v7 = *(_QWORD *)*v5 - *(_QWORD *)&v26.Data1;
      if ( !v7 )
        v7 = v6[1] - *(_QWORD *)v26.Data4;
      if ( !v7 )
      {
        for ( j = 0; j < *((_DWORD *)v6 + 6); ++j )
        {
          v9 = *(LPVOID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)(v6 + 2),
                             j);
          if ( v9 )
            CConnectorFormatCharacteristics::`scalar deleting destructor'(v9);
        }
        ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::RemoveAll(v6 + 2);
        for ( k = 0; k < *((_DWORD *)v6 + 10); ++k )
        {
          v11 = (void **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                           (__int64)(v6 + 4),
                           k);
          operator delete(*v11, (const struct std::nothrow_t *)0x12);
        }
        ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::RemoveAll(v6 + 4);
      }
    }
  }
  v12 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v22, (__int64)pv);
  v26 = *(struct _GUID *)v24;
  v27 = *(_QWORD *)&v24[16];
  DeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___(
                                                                    (__int64)this,
                                                                    v13,
                                                                    v14,
                                                                    v15,
                                                                    (__int128 *)&v26,
                                                                    (struct tWAVEFORMATEX **)(v12 + 8));
  if ( v23 )
  {
    v17 = *(_QWORD *)v22.Data4;
    v18 = *(_QWORD **)&v22.Data1;
    v19 = **(void ***)&v22.Data1;
    if ( *(_QWORD *)v22.Data4 != **(_QWORD **)&v22.Data1 )
    {
      if ( v19 )
        CoTaskMemFree(v19);
      *v18 = v17;
    }
  }
  if ( DeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 >= 0 )
    DeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x16F7,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)DeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2;
}
