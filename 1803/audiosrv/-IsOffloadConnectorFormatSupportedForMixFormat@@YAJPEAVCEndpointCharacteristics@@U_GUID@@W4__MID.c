/*
 * XREFs of ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800BC60C
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800BB044 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18000271C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18009586C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=40
__int64 __fastcall IsOffloadConnectorFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src)
{
  int ModeEffect; // r15d
  struct tWAVEFORMATEX *v8; // rbx
  struct tWAVEFORMATEX *v9; // r14
  __int64 v10; // rsi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  bool v12; // zf
  struct IAudioMediaType *v13; // rdi
  int v14; // eax
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  struct IAudioMediaType *v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  struct IAudioProcessingObject *v19; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h]
  struct tWAVEFORMATEX *v22; // [rsp+B8h] [rbp+38h] BYREF

  v21 = -2LL;
  v19 = 0LL;
  v20 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v20, 0, 1, 0LL, &v19, 0LL);
  if ( ModeEffect >= 0 )
  {
    if ( v19 )
    {
      pv = 0LL;
      v22 = 0LL;
      ModeEffect = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&pv);
      if ( ModeEffect >= 0 )
      {
        ModeEffect = CloneWaveFormat(a4, &v22);
        if ( ModeEffect >= 0 )
        {
          v8 = (struct tWAVEFORMATEX *)pv;
          if ( (*((_WORD *)pv + 7) & 0xFFF8u) <= 0x100 )
          {
            ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
            v9 = v22;
            ConvertPCMWfxToIEEEFloat(v22);
            v17 = 0LL;
            *(_QWORD *)&v20.Data1 = 0LL;
            v18 = 0LL;
            ModeEffect = CAudioMediaType::Create(v9, (unsigned int)v9->cbSize + 18, &v17, 0.0, 0);
            if ( ModeEffect >= 0 )
            {
              ModeEffect = CAudioMediaType::Create(
                             v8,
                             (unsigned int)v8->cbSize + 18,
                             (struct IAudioMediaType **)&v20,
                             0.0,
                             0);
              if ( ModeEffect >= 0 )
              {
                v10 = *(_QWORD *)&v20.Data1;
                lpVtbl = v19->lpVtbl;
                v12 = *((_DWORD *)a1 + 37) == 0;
                v13 = v17;
                if ( v12 )
                  v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsInputFormatSupported)(
                          v19,
                          v17,
                          *(_QWORD *)&v20.Data1,
                          &v18);
                else
                  v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))lpVtbl->IsOutputFormatSupported)(
                          v19,
                          v17,
                          *(_QWORD *)&v20.Data1,
                          &v18);
                ModeEffect = v14;
                if ( v14 && v14 != -2005073917 )
                  ModeEffect = -2004287480;
                if ( v18 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                if ( v10 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
                if ( v13 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->Release)(v13);
              }
              else
              {
                if ( v18 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                if ( *(_QWORD *)&v20.Data1 )
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v20.Data1 + 16LL))(*(_QWORD *)&v20.Data1);
                if ( v17 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->Release)(v17);
              }
            }
            else
            {
              if ( v18 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
              if ( v17 )
                ((void (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->Release)(v17);
            }
            CoTaskMemFree(v9);
            v22 = 0LL;
            CoTaskMemFree(v8);
            pv = 0LL;
          }
          else
          {
            ModeEffect = -2004287480;
            CoTaskMemFree(v22);
            v22 = 0LL;
            CoTaskMemFree(v8);
            pv = 0LL;
          }
        }
        else
        {
          CoTaskMemFree(v22);
          v22 = 0LL;
          CoTaskMemFree(pv);
          pv = 0LL;
        }
      }
      else
      {
        CoTaskMemFree(0LL);
        v22 = 0LL;
        CoTaskMemFree(pv);
        pv = 0LL;
      }
    }
    else
    {
      ModeEffect = 0;
    }
  }
  if ( v19 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v19->lpVtbl->Release)(v19);
  return (unsigned int)ModeEffect;
}
