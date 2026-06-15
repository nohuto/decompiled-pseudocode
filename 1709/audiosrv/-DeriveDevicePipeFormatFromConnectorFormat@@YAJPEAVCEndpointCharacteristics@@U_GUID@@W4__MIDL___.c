/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18008222C
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021B6C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180080B18 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180084E00 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1800895F0 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800B5498 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DeriveDevicePipeFormatFromConnectorFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v8; // rsi
  struct IAudioMediaType *v9; // rdi
  struct IAudioMediaType *v10; // rbx
  const struct tWAVEFORMATEX *v11; // rax
  int v12; // r15d
  int v13; // eax
  const struct tWAVEFORMATEX *v14; // rax
  struct tWAVEFORMATEX *v15; // r14
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v17; // eax
  const struct tWAVEFORMATEX *v18; // rax
  __int64 v19; // r14
  struct IAudioMediaType *v20; // rax
  struct IAudioProcessingObject **v22; // [rsp+28h] [rbp-61h]
  LPVOID pv; // [rsp+38h] [rbp-51h] BYREF
  int v24; // [rsp+40h] [rbp-49h] BYREF
  struct IAudioProcessingObject *v25; // [rsp+48h] [rbp-41h] BYREF
  struct IAudioMediaType *v26; // [rsp+50h] [rbp-39h] BYREF
  struct IAudioMediaType *v27; // [rsp+58h] [rbp-31h] BYREF
  struct IUnknown *v28; // [rsp+60h] [rbp-29h] BYREF
  struct IAudioMediaType **v29; // [rsp+68h] [rbp-21h]
  __int64 v30; // [rsp+70h] [rbp-19h]
  _BYTE v31[40]; // [rsp+78h] [rbp-11h] BYREF

  v30 = -2LL;
  v29 = a5;
  v8 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v27 = 0LL;
  v11 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *, struct _GUID *))a4->lpVtbl[1].Release)(
                                        a4,
                                        a2);
  v24 = ValidateUncompressedWaveFormatEx(v11);
  v12 = v24;
  if ( v24 < 0 )
    goto LABEL_48;
  v13 = (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3)
      ? CEndpointCharacteristics::GetEndpointEffect(this, 0, a3, 0LL, &v25, 0LL)
      : CEndpointCharacteristics::GetGfx(this, a3, 0LL, &v25, (struct IAudioSystemEffects2 **)v22);
  v12 = v13;
  if ( v13 < 0 )
    goto LABEL_48;
  if ( v24 != 1 )
  {
    pv = 0LL;
    v14 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4);
    if ( (int)CloneWaveFormat(v14, (struct tWAVEFORMATEX **)&pv) < 0 )
    {
      v12 = -2004287480;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_48;
    }
    v15 = (struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v12 = CAudioMediaType::Create(v15, (unsigned int)v15->cbSize + 18, &v27, 0.0, 0);
    if ( v12 < 0 )
    {
      CoTaskMemFree(v15);
      pv = 0LL;
      v10 = v27;
      goto LABEL_47;
    }
    v10 = v27;
    if ( v27 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)&v26, (struct IUnknown *)v27);
      v9 = v26;
    }
    CoTaskMemFree(v15);
    pv = 0LL;
    goto LABEL_27;
  }
  memset(v31, 0, sizeof(v31));
  if ( v25 )
  {
    pv = 0LL;
    if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, LPVOID *))v25->lpVtbl->IsOutputFormatSupported)(
           v25,
           0LL,
           a4,
           &pv) )
    {
      v12 = -2004287480;
      goto LABEL_11;
    }
    *(_DWORD *)v31 = 196606;
    *(_DWORD *)&v31[4] = *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    *(_DWORD *)&v31[12] = 2097160;
    *(_DWORD *)&v31[8] = 8 * *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    *(_DWORD *)&v31[16] = 2097174;
    *(_DWORD *)&v31[20] = 3;
    *(GUID *)&v31[24] = GUID_00000003_0000_0010_8000_00aa00389b71;
    v12 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v31, 0x28u, &v26, 0.0, 0);
    if ( v12 < 0 )
    {
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      v9 = v26;
      goto LABEL_47;
    }
    ATL::AtlComPtrAssign((struct IUnknown **)&v27, a4);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    v9 = v26;
    v10 = v27;
LABEL_27:
    if ( v25 )
    {
      v24 = 0;
      pv = 0LL;
      lpVtbl = v25->lpVtbl;
      if ( *((_DWORD *)this + 37) )
        v17 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))lpVtbl->IsOutputFormatSupported)(
                v25,
                v10,
                v9,
                &pv);
      else
        v17 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))lpVtbl->IsInputFormatSupported)(
                v25,
                v10,
                v9,
                &pv);
      if ( v17 < 0 || (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v24) < 0 || v24 )
      {
        v12 = -2004287480;
LABEL_11:
        if ( pv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        goto LABEL_48;
      }
      if ( pv )
      {
        ATL::AtlComPtrAssign(&v28, (struct IUnknown *)pv);
        v8 = (struct IAudioMediaType *)v28;
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    }
    else if ( v9 )
    {
      ATL::AtlComPtrAssign(&v28, (struct IUnknown *)v9);
      v8 = (struct IAudioMediaType *)v28;
    }
    v12 = ValidateAPOInputFormat(v8);
    if ( v12 < 0 )
      goto LABEL_48;
    if ( !*((_DWORD *)this + 37) )
    {
      v18 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->GetAudioFormat)(v10);
      if ( !IsDolbyMatFormat(v18) )
      {
        v19 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->GetAudioFormat)(v8);
        if ( *(_DWORD *)(v19 + 4) != *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4)
                                               + 4) )
          goto LABEL_8;
      }
    }
    v20 = v8;
    v8 = 0LL;
    v28 = 0LL;
    *v29 = v20;
LABEL_47:
    if ( v12 >= 0 )
      goto LABEL_49;
    goto LABEL_48;
  }
LABEL_8:
  v12 = -2004287480;
LABEL_48:
  AudSrvTraceLoggingErrorHelper("DeriveDevicePipeFormatFromConnectorFormat", 1250, v12);
LABEL_49:
  if ( v10 )
    ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  if ( v25 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v25->lpVtbl->Release)(v25);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v12;
}
