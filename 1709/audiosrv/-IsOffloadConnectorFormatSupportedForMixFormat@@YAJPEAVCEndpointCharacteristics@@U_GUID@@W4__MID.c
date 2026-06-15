/*
 * XREFs of ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180084ED8
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021C48 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180080B18 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall IsOffloadConnectorFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src)
{
  int ModeEffect; // r15d
  void *v8; // rcx
  struct tWAVEFORMATEX *v9; // rcx
  struct tWAVEFORMATEX *v10; // rbx
  void *v11; // rcx
  const struct tWAVEFORMATEX *v12; // r14
  struct IAudioMediaTypeVtbl *v13; // rax
  __int64 v14; // rsi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  bool v16; // zf
  struct IAudioMediaType *v17; // rdi
  int v18; // eax
  struct tWAVEFORMATEX *v20; // [rsp+40h] [rbp-40h] BYREF
  struct IAudioMediaType *v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  struct IAudioProcessingObject *v23; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v24; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  LPVOID pv; // [rsp+B8h] [rbp+38h] BYREF

  v25 = -2LL;
  v23 = 0LL;
  v24 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v24, 0, eOffloadConnector, 0LL, &v23, 0LL);
  if ( ModeEffect >= 0 )
  {
    if ( !v23 )
    {
      ModeEffect = 0;
      goto LABEL_37;
    }
    v20 = 0LL;
    pv = 0LL;
    ModeEffect = CloneWaveFormat(Src, &v20);
    if ( ModeEffect < 0 )
    {
      v8 = 0LL;
LABEL_6:
      CoTaskMemFree(v8);
      pv = 0LL;
      v9 = v20;
LABEL_36:
      CoTaskMemFree(v9);
      v20 = 0LL;
      goto LABEL_37;
    }
    ModeEffect = CloneWaveFormat(a4, (struct tWAVEFORMATEX **)&pv);
    if ( ModeEffect < 0 )
    {
      v8 = pv;
      goto LABEL_6;
    }
    v10 = v20;
    if ( (v20->wBitsPerSample & 0xFFF8u) > 0x100 )
    {
      ModeEffect = -2004287480;
      v11 = pv;
LABEL_35:
      CoTaskMemFree(v11);
      pv = 0LL;
      v9 = v10;
      goto LABEL_36;
    }
    ConvertPCMWfxToIEEEFloat(v20);
    v12 = (const struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v21 = 0LL;
    *(_QWORD *)&v24.Data1 = 0LL;
    v22 = 0LL;
    ModeEffect = CAudioMediaType::Create(v12, (unsigned int)v12->cbSize + 18, &v21, 0.0, 0);
    if ( ModeEffect >= 0 )
    {
      ModeEffect = CAudioMediaType::Create(v10, (unsigned int)v10->cbSize + 18, (struct IAudioMediaType **)&v24, 0.0, 0);
      if ( ModeEffect >= 0 )
      {
        v14 = *(_QWORD *)&v24.Data1;
        lpVtbl = v23->lpVtbl;
        v16 = *((_DWORD *)a1 + 37) == 0;
        v17 = v21;
        if ( v16 )
          v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsInputFormatSupported)(
                  v23,
                  v21,
                  *(_QWORD *)&v24.Data1,
                  &v22);
        else
          v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsOutputFormatSupported)(
                  v23,
                  v21,
                  *(_QWORD *)&v24.Data1,
                  &v22);
        ModeEffect = v18;
        if ( v18 && v18 != -2005073917 )
          ModeEffect = -2004287480;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( !v17 )
          goto LABEL_34;
        v13 = v17->lpVtbl;
        goto LABEL_33;
      }
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      if ( *(_QWORD *)&v24.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v24.Data1 + 16LL))(*(_QWORD *)&v24.Data1);
    }
    else if ( v22 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( !v21 )
    {
LABEL_34:
      v11 = (void *)v12;
      goto LABEL_35;
    }
    v13 = v21->lpVtbl;
LABEL_33:
    ((void (*)(void))v13->Release)();
    goto LABEL_34;
  }
LABEL_37:
  if ( v23 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v23->lpVtbl->Release)(v23);
  return (unsigned int)ModeEffect;
}
