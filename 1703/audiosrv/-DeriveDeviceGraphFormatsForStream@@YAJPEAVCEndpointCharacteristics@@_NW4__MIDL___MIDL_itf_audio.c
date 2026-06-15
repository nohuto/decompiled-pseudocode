/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEA_J@Z @ 0x180003310 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ABF78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800040B0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D600 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180099830 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18009AB70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x18009B0C4 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18009B6BC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800A04EC (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800A1268 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct CEndpointCharacteristics *this,
        char a2,
        struct _GUID *a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct _GUID *a7,
        struct tWAVEFORMATEX *a8,
        struct tWAVEFORMATEX **a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11,
        struct tWAVEFORMATEX **a12)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r12d
  struct tWAVEFORMATEX **v14; // rsi
  struct tWAVEFORMATEX **v15; // r14
  signed int DeviceDefaults; // r15d
  __int64 v17; // rax
  void *v18; // rbx
  __int64 v19; // rdi
  struct tWAVEFORMATEX *v20; // rax
  struct tWAVEFORMATEX *v21; // rsi
  struct tWAVEFORMATEX *v22; // rax
  struct tWAVEFORMATEX *v23; // rax
  struct tWAVEFORMATEX *v24; // rax
  struct tWAVEFORMATEX *v25; // rax
  __int64 v27; // rdi
  int (*v28)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct IMMDevice *v29; // rbx
  bool v30; // sf
  const struct tWAVEFORMATEX *v31; // r9
  CAudioMediaType *v32; // rsi
  CAudioMediaType *v33; // rbx
  CAudioMediaType *v34; // rdi
  struct _GUID *v35; // rdx
  CAudioMediaType *v36; // r14
  struct _GUID *v37; // rsi
  const struct tWAVEFORMATEX *v38; // rax
  const struct tWAVEFORMATEX *v39; // rax
  const struct tWAVEFORMATEX *v40; // rax
  __int64 (__fastcall *v41)(CAudioMediaType *); // rax
  __int64 (__fastcall *v42)(CAudioMediaType *); // rax
  __int64 (__fastcall *v43)(CAudioMediaType *); // rax
  __int64 (__fastcall *v44)(CAudioMediaType *); // rax
  struct tWAVEFORMATEX **v45; // [rsp+20h] [rbp-B9h]
  struct tWAVEFORMATEX *v46; // [rsp+40h] [rbp-99h] BYREF
  struct tWAVEFORMATEX *v47; // [rsp+48h] [rbp-91h] BYREF
  void *Src; // [rsp+50h] [rbp-89h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-81h] BYREF
  struct _GUID v50; // [rsp+60h] [rbp-79h] BYREF
  struct IAudioMediaType *v51; // [rsp+70h] [rbp-69h] BYREF
  struct tWAVEFORMATEX **v52; // [rsp+78h] [rbp-61h]
  struct _GUID v53; // [rsp+80h] [rbp-59h]
  struct _GUID v54; // [rsp+90h] [rbp-49h] BYREF
  struct _GUID v55; // [rsp+A0h] [rbp-39h] BYREF
  struct _GUID v56; // [rsp+B0h] [rbp-29h] BYREF
  struct tWAVEFORMATEX **v57; // [rsp+C0h] [rbp-19h]
  struct tWAVEFORMATEX **v58; // [rsp+C8h] [rbp-11h]
  __int64 v59; // [rsp+D0h] [rbp-9h]

  v59 = -2LL;
  v12 = (int)a3;
  *(_QWORD *)&v50.Data1 = a6;
  v14 = a9;
  v52 = a9;
  v15 = a10;
  *(_QWORD *)&v53.Data1 = a10;
  v58 = a11;
  v57 = a12;
  v47 = 0LL;
  v46 = 0LL;
  pv = 0LL;
  Src = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceDefaults = CloneWaveFormat(a8, &v46);
    if ( DeviceDefaults < 0 )
      goto LABEL_15;
    *(_QWORD *)&v54.Data1 = 0LL;
    v29 = (struct IMMDevice *)*((_QWORD *)this + 2);
    *(_QWORD *)&v54.Data1 = v29;
    ((void (__fastcall *)(struct IMMDevice *))v29->lpVtbl->AddRef)(v29);
    if ( (unsigned int)IsSPDIFFormat(a8) && (unsigned int)IsSPDIFEndpoint(v29) )
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v29, a8, &v47, 0) != 0 ? 0x88890008 : 0;
    else
      DeviceDefaults = CloneWaveFormat(a8, &v47);
    if ( v29 )
      ((void (__fastcall *)(struct IMMDevice *))v29->lpVtbl->Release)(v29);
    v30 = DeviceDefaults < 0;
LABEL_26:
    if ( v30 )
      goto LABEL_15;
    DeviceDefaults = CloneWaveFormat(v46, (struct tWAVEFORMATEX **)&Src);
    goto LABEL_13;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v54 = *a7;
    v50 = *a6;
    v53 = *a5;
    DeviceDefaults = DeriveOffloadConnectorFormatFromStreamFormat(this, a8, a3, &v50, (struct _GUID *)v45, &v47);
    if ( DeviceDefaults < 0 )
      goto LABEL_15;
    DeviceDefaults = CloneWaveFormat(v47, (struct tWAVEFORMATEX **)&pv);
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    if ( DeviceDefaults < 0 )
      goto LABEL_15;
    DeviceDefaults = CloneWaveFormat(v31, &v46);
    v30 = DeviceDefaults < 0;
    goto LABEL_26;
  }
  if ( a2 )
  {
    v54 = *a7;
    v56 = *a6;
    v55 = *a5;
    DeviceDefaults = DeriveConnectorFormatFromStreamFormat(
                       this,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                       a8,
                       &v55,
                       &v56,
                       &v54,
                       1,
                       &v47);
    if ( DeviceDefaults < 0 )
      goto LABEL_15;
    *(_QWORD *)&v54.Data1 = 0LL;
    v32 = 0LL;
    *(_QWORD *)&v56.Data1 = 0LL;
    v33 = 0LL;
    v51 = 0LL;
    v34 = 0LL;
    *(_QWORD *)&v55.Data1 = 0LL;
    DeviceDefaults = CAudioMediaType::Create(
                       v47,
                       (unsigned int)v47->cbSize + 18,
                       (struct IAudioMediaType **)&v54,
                       0.0,
                       0);
    v36 = *(CAudioMediaType **)&v54.Data1;
    if ( DeviceDefaults >= 0 )
    {
      v37 = *(struct _GUID **)&v50.Data1;
      v50 = *(struct _GUID *)*(_QWORD *)&v50.Data1;
      DeviceDefaults = DeriveDevicePipeFormatFromConnectorFormat(
                         this,
                         v35,
                         v12,
                         *(struct IAudioMediaType **)&v54.Data1,
                         (struct IAudioMediaType **)&v56);
      if ( DeviceDefaults < 0 )
      {
        v32 = *(CAudioMediaType **)&v56.Data1;
      }
      else
      {
        v50 = *v37;
        v32 = *(CAudioMediaType **)&v56.Data1;
        DeviceDefaults = DeriveMixFormatFromDevicePipeFormat(
                           this,
                           &v50,
                           v12,
                           *(struct IAudioMediaType **)&v56.Data1,
                           (struct IAudioMediaType **)&v55,
                           &v51);
        if ( DeviceDefaults < 0 )
        {
          v33 = (CAudioMediaType *)v51;
          v34 = *(CAudioMediaType **)&v55.Data1;
        }
        else
        {
          v38 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v32 + 40LL))(v32);
          DeviceDefaults = CloneWaveFormat(v38, (struct tWAVEFORMATEX **)&Src);
          v34 = *(CAudioMediaType **)&v55.Data1;
          if ( DeviceDefaults < 0 )
          {
            v33 = (CAudioMediaType *)v51;
          }
          else
          {
            v39 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v55.Data1 + 40LL))(*(_QWORD *)&v55.Data1);
            DeviceDefaults = CloneWaveFormat(v39, (struct tWAVEFORMATEX **)&pv);
            v33 = (CAudioMediaType *)v51;
            if ( DeviceDefaults >= 0 )
            {
              if ( v51 )
                v40 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->GetAudioFormat)(v51);
              else
                v40 = (const struct tWAVEFORMATEX *)Src;
              DeviceDefaults = CloneWaveFormat(v40, &v46);
            }
          }
        }
      }
    }
    if ( v34 )
    {
      v41 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v34 + 16LL);
      if ( v41 == CAudioMediaType::Release )
        CAudioMediaType::Release(v34);
      else
        v41(v34);
    }
    if ( v33 )
    {
      v42 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v33 + 16LL);
      if ( v42 == CAudioMediaType::Release )
        CAudioMediaType::Release(v33);
      else
        v42(v33);
    }
    if ( v32 )
    {
      v43 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v32 + 16LL);
      if ( v43 == CAudioMediaType::Release )
        CAudioMediaType::Release(v32);
      else
        v43(v32);
    }
    if ( v36 )
    {
      v44 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 16LL);
      if ( v44 == CAudioMediaType::Release )
        CAudioMediaType::Release(v36);
      else
        v44(v36);
    }
    v14 = v52;
    v15 = *(struct tWAVEFORMATEX ***)&v53.Data1;
    goto LABEL_13;
  }
  v50 = *a7;
  DeviceDefaults = GetDeviceDefaults(
                     this,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     &v50,
                     &v47,
                     (struct tWAVEFORMATEX **)&Src,
                     0LL,
                     0LL);
  if ( DeviceDefaults >= 0 )
  {
    v17 = *(_QWORD *)&a7->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v17 = *(_QWORD *)a7->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v17 )
    {
      *(_QWORD *)&v53.Data1 = 0LL;
      v27 = *((_QWORD *)this + 2);
      *(_QWORD *)&v53.Data1 = v27;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      v50 = *a5;
      DeviceDefaults = CEndpointCharacteristics::GetMixFormat(this, v12, &v50, v28, (struct tWAVEFORMATEX **)&pv);
      if ( v27 )
      {
        *(_QWORD *)&v53.Data1 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    if ( DeviceDefaults >= 0 )
    {
      v50 = *a5;
      if ( CEndpointCharacteristics::GetStreamGroupFormat(this, v12, &v50, &v46) < 0 || !v46 )
      {
        v18 = Src;
        v19 = *((unsigned __int16 *)Src + 8);
        v20 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v19 + 18);
        v21 = v20;
        if ( v20 )
        {
          memcpy_0(v20, v18, v19 + 18);
          DeviceDefaults = 0;
        }
        else
        {
          DeviceDefaults = -2147024882;
        }
        v46 = v21;
        v14 = v52;
      }
LABEL_13:
      if ( DeviceDefaults >= 0 )
      {
        v22 = v47;
        v47 = 0LL;
        *v57 = v22;
        v23 = v46;
        v46 = 0LL;
        *v15 = v23;
        v24 = (struct tWAVEFORMATEX *)pv;
        pv = 0LL;
        *v14 = v24;
        v25 = (struct tWAVEFORMATEX *)Src;
        Src = 0LL;
        *v58 = v25;
      }
    }
  }
LABEL_15:
  CoTaskMemFree(Src);
  Src = 0LL;
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v46);
  v46 = 0LL;
  CoTaskMemFree(v47);
  v47 = 0LL;
  return (unsigned int)DeviceDefaults;
}
