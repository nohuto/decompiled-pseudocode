/*
 * XREFs of ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800ECC14
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800BCB5C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18005057C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180050950 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180064368 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095AB0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x180099F70 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800E9760 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::RefreshDefaultConnectorFormats(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int i; // esi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  int j; // edi
  LPVOID *v12; // rcx
  int k; // edi
  void **v14; // rax
  int DeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced; // ebx
  struct _GUID v16; // rdi
  void *v17; // rcx
  LPVOID pv; // [rsp+38h] [rbp-39h] BYREF
  struct _GUID p_pv; // [rsp+48h] [rbp-29h] BYREF
  char v21; // [rsp+58h] [rbp-19h]
  _BYTE v22[24]; // [rsp+68h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp+Fh]
  struct _GUID v24; // [rsp+88h] [rbp+17h] BYREF
  __int64 v25; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v23 = -2LL;
  pv = 0LL;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v24, 0LL, 0LL);
  *(_QWORD *)v22 = this;
  *(struct _GUID *)&v22[8] = v24;
  if ( *((_QWORD *)this + 23) )
  {
    p_pv = v24;
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v24, 0, &p_pv, 0);
    for ( i = 0; ; ++i )
    {
      v7 = *((_QWORD *)this + 23);
      if ( i >= *(_DWORD *)(v7 + 8) )
        break;
      v8 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                       v7,
                       i);
      v9 = (_QWORD *)*v8;
      v10 = *(_QWORD *)*v8 - *(_QWORD *)&v24.Data1;
      if ( !v10 )
        v10 = v9[1] - *(_QWORD *)v24.Data4;
      if ( !v10 )
      {
        for ( j = 0; j < *((_DWORD *)v9 + 6); ++j )
        {
          v12 = *(LPVOID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                              (__int64)(v9 + 2),
                              j);
          if ( v12 )
            CConnectorFormatCharacteristics::`scalar deleting destructor'(v12);
        }
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)(v9 + 2));
        for ( k = 0; k < *((_DWORD *)v9 + 10); ++k )
        {
          v14 = (void **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                           (__int64)(v9 + 4),
                           k);
          operator delete(*v14, (const struct std::nothrow_t *)0x12);
        }
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)(v9 + 4));
      }
    }
  }
  p_pv = (struct _GUID)(unsigned __int64)&pv;
  v21 = 1;
  v24 = *(struct _GUID *)v22;
  v25 = *(_QWORD *)&v22[16];
  DeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___(
                                                                    (__int64)this,
                                                                    v3,
                                                                    v4,
                                                                    v5,
                                                                    (__int64)&v24,
                                                                    (struct tWAVEFORMATEX **)p_pv.Data4);
  if ( v21 )
  {
    v16 = p_pv;
    v17 = **(void ***)&p_pv.Data1;
    if ( *(_QWORD *)p_pv.Data4 != **(_QWORD **)&p_pv.Data1 )
    {
      if ( v17 )
        CoTaskMemFree(v17);
      **(_QWORD **)&v16.Data1 = *(_QWORD *)v16.Data4;
    }
  }
  if ( DeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced >= 0 )
    DeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1785,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced);
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)DeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced;
}
