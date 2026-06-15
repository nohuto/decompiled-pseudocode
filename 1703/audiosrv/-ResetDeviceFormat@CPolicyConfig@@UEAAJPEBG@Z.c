/*
 * XREFs of ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18009D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000D2D0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098F40 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DBFC (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 */

__int64 __fastcall CPolicyConfig::ResetDeviceFormat(CPolicyConfig *this, const unsigned __int16 *a2)
{
  struct IMMDevice *v2; // rbx
  int AliasedEndpointCharacteristics; // edi
  struct _GUID v7; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointCharacteristics *v8; // [rsp+78h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v10; // [rsp+88h] [rbp+48h] BYREF

  pv = 0LL;
  v2 = 0LL;
  v8 = 0LL;
  v10 = 0LL;
  v7 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a2 )
  {
    AliasedEndpointCharacteristics = -2147467261;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ResetDeviceFormat", 3746, AliasedEndpointCharacteristics);
    goto LABEL_11;
  }
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v8);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_10;
  v2 = (struct IMMDevice *)*((_QWORD *)v8 + 2);
  ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->AddRef)(v2);
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v8, eHostProcessConnector, &v7, 0LL, 0LL);
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
                                     this,
                                     a2,
                                     0LL,
                                     &v10);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_10;
  AliasedEndpointCharacteristics = CPolicyConfig::ConfirmDeviceFormat(v8, v10, &v7, 0, 0);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    AliasedEndpointCharacteristics = CPolicyConfig::SetDeviceFormat(this, v2, 0LL);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_10;
    AliasedEndpointCharacteristics = CEndpointCharacteristics::ClearMixFormatCache(v8);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_10;
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, __int64, LPVOID *))(*(_QWORD *)this + 32LL))(
                                       this,
                                       a2,
                                       1LL,
                                       &pv);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_10;
    AliasedEndpointCharacteristics = CPolicyConfig::SetDeviceFormat(this, v2, (const struct tWAVEFORMATEX *)pv);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_10;
  }
LABEL_11:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v10 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v2 )
    ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->Release)(v2);
  return (unsigned int)AliasedEndpointCharacteristics;
}
