/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18009AB70
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032D48 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033474 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180099830 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18009CAF4 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18009F4C4 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BD37C (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DeriveDevicePipeFormatFromConnectorFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        __int32 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v8; // rsi
  struct IUnknown *v9; // rbx
  struct IUnknown *v10; // rdi
  const struct tWAVEFORMATEX *v11; // rax
  int v12; // r15d
  int v13; // eax
  void (*v14)(void); // rax
  void (*v15)(void); // rax
  void (*v16)(void); // rax
  const struct tWAVEFORMATEX *v17; // rax
  struct tWAVEFORMATEX *v18; // r14
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v20; // eax
  void (*v21)(void); // rax
  const struct tWAVEFORMATEX *v22; // rax
  __int64 v23; // r14
  struct IAudioMediaType *v24; // rax
  ULONG (__stdcall *Release)(IUnknown *); // rax
  ULONG (__stdcall *v26)(IUnknown *); // rax
  ULONG (__stdcall *v27)(IAudioMediaType *); // rax
  struct IAudioProcessingObject **v29; // [rsp+28h] [rbp-61h]
  LPVOID pv; // [rsp+38h] [rbp-51h] BYREF
  int v31; // [rsp+40h] [rbp-49h] BYREF
  struct IUnknown *v32; // [rsp+48h] [rbp-41h] BYREF
  struct IAudioProcessingObject *v33; // [rsp+50h] [rbp-39h] BYREF
  struct IUnknown *v34; // [rsp+58h] [rbp-31h] BYREF
  struct IUnknown *v35; // [rsp+60h] [rbp-29h] BYREF
  struct IAudioMediaType **v36; // [rsp+68h] [rbp-21h]
  __int64 v37; // [rsp+70h] [rbp-19h]
  _BYTE v38[40]; // [rsp+78h] [rbp-11h] BYREF

  v37 = -2LL;
  v36 = a5;
  v8 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  v11 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *, struct _GUID *))a4->lpVtbl[1].Release)(
                                        a4,
                                        a2);
  v31 = ValidateUncompressedWaveFormatEx(v11);
  v12 = v31;
  if ( v31 < 0 )
    goto LABEL_56;
  v13 = (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3)
      ? CEndpointCharacteristics::GetEndpointEffect(
          this,
          0,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
          0LL,
          &v33,
          0LL)
      : CEndpointCharacteristics::GetGfx(
          this,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
          0LL,
          &v33,
          (struct IAudioSystemEffects2 **)v29);
  v12 = v13;
  if ( v13 < 0 )
    goto LABEL_56;
  if ( v31 != 1 )
  {
    pv = 0LL;
    v17 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4);
    if ( (int)CloneWaveFormat(v17, (struct tWAVEFORMATEX **)&pv) < 0 )
    {
      v12 = -2004287480;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_56;
    }
    v18 = (struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v12 = CAudioMediaType::Create(v18, (unsigned int)v18->cbSize + 18, (struct IAudioMediaType **)&v34, 0.0, 0);
    if ( v12 < 0 )
    {
      CoTaskMemFree(v18);
      pv = 0LL;
      v10 = v34;
      goto LABEL_55;
    }
    v10 = v34;
    if ( v34 )
    {
      ATL::AtlComPtrAssign(&v32, v34);
      v9 = v32;
    }
    CoTaskMemFree(v18);
    pv = 0LL;
    goto LABEL_33;
  }
  memset(v38, 0, sizeof(v38));
  if ( v33 )
  {
    pv = 0LL;
    if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, LPVOID *))v33->lpVtbl->IsOutputFormatSupported)(
           v33,
           0LL,
           a4,
           &pv) )
    {
      v12 = -2004287480;
      goto LABEL_11;
    }
    *(_DWORD *)v38 = 196606;
    *(_DWORD *)&v38[4] = *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    *(_DWORD *)&v38[12] = 2097160;
    *(_DWORD *)&v38[8] = 8 * *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4) + 4);
    *(_DWORD *)&v38[16] = 2097174;
    *(_DWORD *)&v38[20] = 3;
    *(GUID *)&v38[24] = GUID_00000003_0000_0010_8000_00aa00389b71;
    v12 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v38, 0x28u, (struct IAudioMediaType **)&v32, 0.0, 0);
    if ( v12 < 0 )
    {
      if ( pv )
      {
        v15 = *(void (**)(void))(*(_QWORD *)pv + 16LL);
        if ( (char *)v15 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)pv);
        else
          v15();
      }
      v9 = v32;
      goto LABEL_55;
    }
    ATL::AtlComPtrAssign(&v34, a4);
    if ( pv )
    {
      v16 = *(void (**)(void))(*(_QWORD *)pv + 16LL);
      if ( (char *)v16 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)pv);
      else
        v16();
    }
    v9 = v32;
    v10 = v34;
LABEL_33:
    if ( v33 )
    {
      v31 = 0;
      pv = 0LL;
      lpVtbl = v33->lpVtbl;
      if ( *((_DWORD *)this + 37) )
        v20 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, LPVOID *))lpVtbl->IsOutputFormatSupported)(
                v33,
                v10,
                v9,
                &pv);
      else
        v20 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, struct IUnknown *, LPVOID *))lpVtbl->IsInputFormatSupported)(
                v33,
                v10,
                v9,
                &pv);
      if ( v20 < 0 || (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v31) < 0 || v31 )
      {
        v12 = -2004287480;
LABEL_11:
        if ( pv )
        {
          v14 = *(void (**)(void))(*(_QWORD *)pv + 16LL);
          if ( (char *)v14 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)pv);
          else
            v14();
        }
        goto LABEL_56;
      }
      if ( pv )
      {
        ATL::AtlComPtrAssign(&v35, (struct IUnknown *)pv);
        v8 = (struct IAudioMediaType *)v35;
      }
      if ( pv )
      {
        v21 = *(void (**)(void))(*(_QWORD *)pv + 16LL);
        if ( (char *)v21 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)pv);
        else
          v21();
      }
    }
    else if ( v9 )
    {
      ATL::AtlComPtrAssign(&v35, v9);
      v8 = (struct IAudioMediaType *)v35;
    }
    v12 = ValidateAPOInputFormat(v8);
    if ( v12 < 0 )
      goto LABEL_56;
    if ( !*((_DWORD *)this + 37) )
    {
      v22 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v10->lpVtbl[1].Release)(v10);
      if ( !IsDolbyMatFormat(v22) )
      {
        v23 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->GetAudioFormat)(v8);
        if ( *(_DWORD *)(v23 + 4) != *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))a4->lpVtbl[1].Release)(a4)
                                               + 4) )
          goto LABEL_8;
      }
    }
    v24 = v8;
    v8 = 0LL;
    v35 = 0LL;
    *v36 = v24;
LABEL_55:
    if ( v12 >= 0 )
      goto LABEL_57;
    goto LABEL_56;
  }
LABEL_8:
  v12 = -2004287480;
LABEL_56:
  AudSrvTraceLoggingErrorHelper("DeriveDevicePipeFormatFromConnectorFormat", 1248, v12);
LABEL_57:
  if ( v10 )
  {
    Release = v10->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v10);
    else
      ((void (__fastcall *)(struct IUnknown *))Release)(v10);
  }
  if ( v9 )
  {
    v26 = v9->lpVtbl->Release;
    if ( (char *)v26 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v9);
    else
      ((void (__fastcall *)(struct IUnknown *))v26)(v9);
  }
  if ( v33 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v33->lpVtbl->Release)(v33);
  if ( v8 )
  {
    v27 = v8->lpVtbl->Release;
    if ( (char *)v27 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v8);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v27)(v8);
  }
  return (unsigned int)v12;
}
