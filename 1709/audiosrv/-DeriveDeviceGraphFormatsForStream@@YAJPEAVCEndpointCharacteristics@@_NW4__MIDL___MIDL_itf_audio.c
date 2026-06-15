/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180030A18 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x18009AC78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000A70C (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800201C0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022708 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180080B18 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18008222C (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800826FC (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008B300 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x18008C08C (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
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
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // ebx
  struct tWAVEFORMATEX *v14; // rsi
  signed int DeviceDefaults; // r12d
  __int64 v16; // rax
  int (*v17)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  void *v18; // rbx
  __int64 v19; // rdi
  void *v20; // rax
  void *v21; // r14
  struct tWAVEFORMATEX *v22; // rax
  struct tWAVEFORMATEX *v23; // rax
  struct tWAVEFORMATEX *v24; // rax
  struct tWAVEFORMATEX *v25; // rax
  struct IMMDevice *v27; // rbx
  bool v28; // sf
  __int64 v29; // r14
  struct IAudioMediaType *v30; // rbx
  __int64 v31; // rdi
  struct _GUID *v32; // rdx
  __int64 v33; // r15
  const struct tWAVEFORMATEX *v34; // rax
  const struct tWAVEFORMATEX *v35; // rax
  const struct tWAVEFORMATEX *v36; // rax
  struct tWAVEFORMATEX **v37; // [rsp+28h] [rbp-B9h]
  LPVOID pv; // [rsp+48h] [rbp-99h] BYREF
  struct tWAVEFORMATEX *v39; // [rsp+50h] [rbp-91h] BYREF
  void *Src; // [rsp+58h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v41; // [rsp+60h] [rbp-81h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v42; // [rsp+68h] [rbp-79h]
  struct IAudioMediaType *v43; // [rsp+70h] [rbp-71h] BYREF
  struct _GUID v44; // [rsp+78h] [rbp-69h] BYREF
  struct _GUID v45; // [rsp+88h] [rbp-59h] BYREF
  struct _GUID v46; // [rsp+98h] [rbp-49h] BYREF
  struct _GUID v47; // [rsp+A8h] [rbp-39h] BYREF
  struct tWAVEFORMATEX **v48; // [rsp+B8h] [rbp-29h]
  struct tWAVEFORMATEX **v49; // [rsp+C0h] [rbp-21h]
  struct tWAVEFORMATEX **v50; // [rsp+C8h] [rbp-19h]
  struct tWAVEFORMATEX **v51; // [rsp+D0h] [rbp-11h]
  __int64 v52; // [rsp+D8h] [rbp-9h]

  v52 = -2LL;
  v12 = (int)a3;
  v42 = (int)a3;
  *(_QWORD *)&v44.Data1 = a6;
  v50 = a9;
  v49 = a10;
  v51 = a11;
  v48 = a12;
  v39 = 0LL;
  pv = 0LL;
  v14 = 0LL;
  v41 = 0LL;
  Src = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceDefaults = CloneWaveFormat(a8, (struct tWAVEFORMATEX **)&pv);
    if ( DeviceDefaults < 0 )
      goto LABEL_16;
    *(_QWORD *)&v46.Data1 = 0LL;
    v27 = (struct IMMDevice *)*((_QWORD *)this + 2);
    *(_QWORD *)&v46.Data1 = v27;
    ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->AddRef)(v27);
    if ( (unsigned int)IsSPDIFFormat(a8) && (unsigned int)IsSPDIFEndpoint(v27) )
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v27, a8, &v39, 0) != 0 ? 0x88890008 : 0;
    else
      DeviceDefaults = CloneWaveFormat(a8, &v39);
    if ( v27 )
      ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
    v28 = DeviceDefaults < 0;
LABEL_28:
    if ( v28 )
      goto LABEL_16;
    DeviceDefaults = CloneWaveFormat((const struct tWAVEFORMATEX *)pv, (struct tWAVEFORMATEX **)&Src);
    goto LABEL_14;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v44 = *a6;
    DeviceDefaults = DeriveOffloadConnectorFormatFromStreamFormat(this, a8, a3, &v44, (struct _GUID *)v37, &v39);
    if ( DeviceDefaults < 0 )
      goto LABEL_16;
    DeviceDefaults = CloneWaveFormat(v39, &v41);
    v14 = v41;
    ConvertPCMWfxToIEEEFloat(v41);
    if ( DeviceDefaults < 0 )
      goto LABEL_16;
    DeviceDefaults = CloneWaveFormat(v14, (struct tWAVEFORMATEX **)&pv);
    v28 = DeviceDefaults < 0;
    goto LABEL_28;
  }
  if ( a2 )
  {
    v46 = *a7;
    v47 = *a6;
    v45 = *a5;
    DeviceDefaults = DeriveConnectorFormatFromStreamFormat(
                       this,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                       a8,
                       &v45,
                       &v47,
                       &v46,
                       1,
                       &v39);
    if ( DeviceDefaults < 0 )
      goto LABEL_16;
    *(_QWORD *)&v46.Data1 = 0LL;
    v29 = 0LL;
    *(_QWORD *)&v47.Data1 = 0LL;
    v30 = 0LL;
    v43 = 0LL;
    v31 = 0LL;
    *(_QWORD *)&v45.Data1 = 0LL;
    DeviceDefaults = CAudioMediaType::Create(
                       v39,
                       (unsigned int)v39->cbSize + 18,
                       (struct IAudioMediaType **)&v46,
                       0.0,
                       0);
    v33 = *(_QWORD *)&v46.Data1;
    if ( DeviceDefaults < 0 )
      goto LABEL_46;
    DeviceDefaults = DeriveDevicePipeFormatFromConnectorFormat(
                       this,
                       v32,
                       v42,
                       *(struct IAudioMediaType **)&v46.Data1,
                       (struct IAudioMediaType **)&v47);
    v29 = *(_QWORD *)&v47.Data1;
    if ( DeviceDefaults < 0 )
      goto LABEL_46;
    v44 = *(struct _GUID *)*(_QWORD *)&v44.Data1;
    DeviceDefaults = DeriveMixFormatFromDevicePipeFormat(
                       this,
                       &v44,
                       v42,
                       *(struct IAudioMediaType **)&v47.Data1,
                       (struct IAudioMediaType **)&v45,
                       &v43);
    if ( DeviceDefaults < 0 )
    {
      v31 = *(_QWORD *)&v45.Data1;
    }
    else
    {
      v34 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
      DeviceDefaults = CloneWaveFormat(v34, (struct tWAVEFORMATEX **)&Src);
      v31 = *(_QWORD *)&v45.Data1;
      if ( DeviceDefaults >= 0 )
      {
        v35 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v45.Data1 + 40LL))(*(_QWORD *)&v45.Data1);
        DeviceDefaults = CloneWaveFormat(v35, &v41);
        v30 = v43;
        if ( DeviceDefaults >= 0 )
        {
          if ( v43 )
            v36 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->GetAudioFormat)(v43);
          else
            v36 = (const struct tWAVEFORMATEX *)Src;
          DeviceDefaults = CloneWaveFormat(v36, (struct tWAVEFORMATEX **)&pv);
        }
        v14 = v41;
        goto LABEL_46;
      }
    }
    v30 = v43;
LABEL_46:
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    if ( v30 )
      ((void (__fastcall *)(struct IAudioMediaType *))v30->lpVtbl->Release)(v30);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    goto LABEL_14;
  }
  v44 = *a7;
  DeviceDefaults = GetDeviceDefaults(
                     this,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     &v44,
                     &v39,
                     (struct tWAVEFORMATEX **)&Src,
                     0LL,
                     0LL);
  if ( DeviceDefaults >= 0 )
  {
    v16 = *(_QWORD *)&a7->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v16 = *(_QWORD *)a7->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v16 )
    {
      *(_QWORD *)&v45.Data1 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
      *(_QWORD *)&v45.Data1 = *((_QWORD *)this + 2);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v45.Data1 + 8LL))(*(_QWORD *)&v45.Data1);
      v44 = *a5;
      DeviceDefaults = CEndpointCharacteristics::GetMixFormat(this, v12, &v44, v17, &v41);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v45);
      v14 = v41;
    }
    if ( DeviceDefaults >= 0 )
    {
      v44 = *a5;
      if ( CEndpointCharacteristics::GetStreamGroupFormat(this, v12, &v44, (struct tWAVEFORMATEX **)&pv) < 0 || !pv )
      {
        v18 = Src;
        v19 = *((unsigned __int16 *)Src + 8);
        v20 = CoTaskMemAlloc(v19 + 18);
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
        pv = v21;
      }
LABEL_14:
      if ( DeviceDefaults >= 0 )
      {
        v22 = v39;
        v39 = 0LL;
        *v48 = v22;
        v23 = (struct tWAVEFORMATEX *)pv;
        pv = 0LL;
        *v49 = v23;
        v24 = v14;
        v14 = 0LL;
        v41 = 0LL;
        *v50 = v24;
        v25 = (struct tWAVEFORMATEX *)Src;
        Src = 0LL;
        *v51 = v25;
      }
    }
  }
LABEL_16:
  CoTaskMemFree(Src);
  Src = 0LL;
  CoTaskMemFree(v14);
  v41 = 0LL;
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v39);
  v39 = 0LL;
  return (unsigned int)DeviceDefaults;
}
