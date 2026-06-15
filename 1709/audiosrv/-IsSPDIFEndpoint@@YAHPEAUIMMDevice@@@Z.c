/*
 * XREFs of ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x18008C08C
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x18008ACD4 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsSPDIFEndpoint(struct IMMDevice *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  BOOL v4; // eax
  BOOL v5; // edi
  PROPVARIANT pvar; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = 0;
  pvar = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v10);
  if ( v3 < 0 )
    goto LABEL_17;
  v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
         v10,
         &PKEY_AudioEndpoint_FormFactor,
         &pvar);
  if ( v3 < 0 )
    goto LABEL_17;
  if ( (_WORD)pvar != 19 )
  {
    v3 = -2147467259;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("IsSPDIFEndpoint", 4744, v3);
    goto LABEL_18;
  }
  if ( (unsigned __int16)v8 == 8 || (unsigned __int16)v8 == 7 )
    goto LABEL_16;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x46u, (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
  }
  v4 = EndpointRequiresAC97VistaShim(a1);
  v5 = v4;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x47u, (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, v4);
  }
  if ( v5 )
LABEL_16:
    v2 = 1;
LABEL_18:
  PropVariantClear(&pvar);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v2;
}
