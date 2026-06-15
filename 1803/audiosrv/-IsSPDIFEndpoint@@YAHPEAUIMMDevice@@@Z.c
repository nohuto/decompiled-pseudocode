/*
 * XREFs of ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800C1D2C
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180001740 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x1800C0970 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsSPDIFEndpoint(struct IMMDevice *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  BOOL v5; // eax
  BOOL v6; // edi
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
    goto LABEL_5;
  v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
         v10,
         &PKEY_AudioEndpoint_FormFactor,
         &pvar);
  if ( v3 < 0 )
    goto LABEL_5;
  if ( (_WORD)pvar != 19 )
  {
    v3 = -2147467259;
LABEL_5:
    AudSrvTraceLoggingErrorHelper("IsSPDIFEndpoint", 5198, v3);
    goto LABEL_6;
  }
  if ( (unsigned __int16)v8 == 8 || (unsigned __int16)v8 == 7 )
    goto LABEL_20;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x43u, (__int64)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
  }
  v5 = EndpointRequiresAC97VistaShim(a1);
  v6 = v5;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, v5);
  }
  if ( v6 )
LABEL_20:
    v2 = 1;
LABEL_6:
  PropVariantClear(&pvar);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v2;
}
