/*
 * XREFs of ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18009CB94
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18009B6BC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180099830 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
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
  CAudioMediaType *v13; // rcx
  __int64 (__fastcall *v14)(CAudioMediaType *); // rax
  CAudioMediaType *v15; // rcx
  struct IAudioMediaTypeVtbl *v16; // rax
  void (*v17)(void); // rax
  CAudioMediaType *v18; // rsi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  bool v20; // zf
  struct IAudioMediaType *v21; // rdi
  int v22; // eax
  void (*v23)(void); // rax
  __int64 (__fastcall *v24)(CAudioMediaType *); // rax
  void (*Release)(void); // rax
  struct tWAVEFORMATEX *v27; // [rsp+40h] [rbp-40h] BYREF
  struct IAudioMediaType *v28; // [rsp+48h] [rbp-38h] BYREF
  CAudioMediaType *v29; // [rsp+50h] [rbp-30h] BYREF
  struct IAudioProcessingObject *v30; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  LPVOID pv; // [rsp+B8h] [rbp+38h] BYREF

  v32 = -2LL;
  v30 = 0LL;
  v31 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v31, 0, 1, 0LL, &v30, 0LL);
  if ( ModeEffect >= 0 )
  {
    if ( !v30 )
    {
      ModeEffect = 0;
      goto LABEL_48;
    }
    v27 = 0LL;
    pv = 0LL;
    ModeEffect = CloneWaveFormat(Src, &v27);
    if ( ModeEffect < 0 )
    {
      v8 = 0LL;
LABEL_6:
      CoTaskMemFree(v8);
      pv = 0LL;
      v9 = v27;
LABEL_47:
      CoTaskMemFree(v9);
      v27 = 0LL;
      goto LABEL_48;
    }
    ModeEffect = CloneWaveFormat(a4, (struct tWAVEFORMATEX **)&pv);
    if ( ModeEffect < 0 )
    {
      v8 = pv;
      goto LABEL_6;
    }
    v10 = v27;
    if ( (v27->wBitsPerSample & 0xFFF8u) > 0x100 )
    {
      ModeEffect = -2004287480;
      v11 = pv;
LABEL_46:
      CoTaskMemFree(v11);
      pv = 0LL;
      v9 = v10;
      goto LABEL_47;
    }
    ConvertPCMWfxToIEEEFloat(v27);
    v12 = (const struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v28 = 0LL;
    *(_QWORD *)&v31.Data1 = 0LL;
    v29 = 0LL;
    ModeEffect = CAudioMediaType::Create(v12, (unsigned int)v12->cbSize + 18, &v28, 0.0, 0);
    if ( ModeEffect >= 0 )
    {
      ModeEffect = CAudioMediaType::Create(v10, (unsigned int)v10->cbSize + 18, (struct IAudioMediaType **)&v31, 0.0, 0);
      if ( ModeEffect >= 0 )
      {
        v18 = *(CAudioMediaType **)&v31.Data1;
        lpVtbl = v30->lpVtbl;
        v20 = *((_DWORD *)a1 + 37) == 0;
        v21 = v28;
        if ( v20 )
          v22 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, CAudioMediaType **))lpVtbl->IsInputFormatSupported)(
                  v30,
                  v28,
                  *(_QWORD *)&v31.Data1,
                  &v29);
        else
          v22 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, CAudioMediaType **))lpVtbl->IsOutputFormatSupported)(
                  v30,
                  v28,
                  *(_QWORD *)&v31.Data1,
                  &v29);
        ModeEffect = v22;
        if ( v22 && v22 != -2005073917 )
          ModeEffect = -2004287480;
        if ( v29 )
        {
          v23 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
          if ( (char *)v23 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v29);
          else
            v23();
        }
        if ( v18 )
        {
          v24 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v18 + 16LL);
          if ( v24 == CAudioMediaType::Release )
            CAudioMediaType::Release(v18);
          else
            v24(v18);
        }
        if ( !v21 )
          goto LABEL_45;
        v16 = v21->lpVtbl;
        v15 = (CAudioMediaType *)v21;
        goto LABEL_42;
      }
      if ( v29 )
      {
        v17 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
        if ( (char *)v17 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v29);
        else
          v17();
      }
      v13 = *(CAudioMediaType **)&v31.Data1;
      if ( *(_QWORD *)&v31.Data1 )
      {
        v14 = *(__int64 (__fastcall **)(CAudioMediaType *))(**(_QWORD **)&v31.Data1 + 16LL);
        if ( v14 == CAudioMediaType::Release )
          goto LABEL_14;
        goto LABEL_15;
      }
    }
    else
    {
      v13 = v29;
      if ( v29 )
      {
        v14 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v29 + 16LL);
        if ( v14 == CAudioMediaType::Release )
        {
LABEL_14:
          CAudioMediaType::Release(v13);
          goto LABEL_16;
        }
LABEL_15:
        ((void (*)(void))v14)();
      }
    }
LABEL_16:
    v15 = (CAudioMediaType *)v28;
    if ( !v28 )
    {
LABEL_45:
      v11 = (void *)v12;
      goto LABEL_46;
    }
    v16 = v28->lpVtbl;
LABEL_42:
    Release = (void (*)(void))v16->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v15);
    else
      Release();
    goto LABEL_45;
  }
LABEL_48:
  if ( v30 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v30->lpVtbl->Release)(v30);
  return (unsigned int)ModeEffect;
}
