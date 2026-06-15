/*
 * XREFs of ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180086D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z @ 0x180036398 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18005A44C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180080228 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18008767C (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::ResetDeviceFormat(CPolicyConfig *this, const unsigned __int16 *a2)
{
  struct IMMDevice *v2; // rbx
  int v5; // edi
  void (*v6)(void); // rax
  struct _GUID v8; // [rsp+30h] [rbp-10h] BYREF
  CEndpointCharacteristics *v9; // [rsp+78h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v11; // [rsp+88h] [rbp+48h] BYREF

  pv = 0LL;
  v2 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v8 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ResetDeviceFormat", 3747, v5);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         &v9);
  if ( v5 < 0 )
    goto LABEL_10;
  v2 = (struct IMMDevice *)*((_QWORD *)v9 + 2);
  ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->AddRef)(v2);
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(v9, 0, &v8, 0LL, 0LL);
  v5 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         0LL,
         &v11);
  if ( v5 < 0 )
    goto LABEL_10;
  v5 = CPolicyConfig::ConfirmDeviceFormat(v9, v11, &v8, 0, 0);
  if ( v5 < 0 )
  {
    v5 = CPolicyConfig::SetDeviceFormat(this, v2, 0LL);
    if ( v5 < 0 )
      goto LABEL_10;
    v5 = CEndpointCharacteristics::ClearMixFormatCache((struct IPropertyStore **)v9, 0);
    if ( v5 < 0 )
      goto LABEL_10;
    v5 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, __int64, LPVOID *))(*(_QWORD *)this + 32LL))(
           this,
           a2,
           1LL,
           &pv);
    if ( v5 < 0 )
      goto LABEL_10;
    v5 = CPolicyConfig::SetDeviceFormat(this, v2, (const struct tWAVEFORMATEX *)pv);
    if ( v5 < 0 )
      goto LABEL_10;
  }
LABEL_11:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v11 )
  {
    CoTaskMemFree(v11);
    v11 = 0LL;
  }
  if ( v9 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v9);
    else
      v6();
  }
  if ( v2 )
    ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->Release)(v2);
  return (unsigned int)v5;
}
