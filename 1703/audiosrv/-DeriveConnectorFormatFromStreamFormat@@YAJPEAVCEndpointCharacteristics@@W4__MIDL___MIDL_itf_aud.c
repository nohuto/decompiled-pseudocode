/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800A2C90 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180099188 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x18009A9E8 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18009AB70 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x18009B0C4 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **a8)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // edi
  struct tWAVEFORMATEX *v12; // r12
  int (*v13)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  struct tWAVEFORMATEX *v15; // rbx
  int v16; // r15d
  void *v17; // r14
  struct _GUID *v18; // rdx
  CAudioMediaType *v19; // rcx
  void (*v20)(void); // rax
  CAudioMediaType *v21; // rbx
  __int64 (__fastcall *v22)(CAudioMediaType *); // rax
  bool v23; // zf
  CAudioMediaType *v24; // rdi
  void (*Release)(void); // rax
  __int64 (__fastcall *v26)(CAudioMediaType *); // rax
  CAudioMediaType *v27; // rsi
  const struct tWAVEFORMATEX *v28; // rax
  int v29; // eax
  __int64 (__fastcall *v30)(CAudioMediaType *); // rax
  __int64 (__fastcall *v31)(CAudioMediaType *); // rax
  __int64 (__fastcall *v32)(CAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v33; // rax
  __int64 (__fastcall *v34)(CAudioMediaType *); // rax
  __int64 (__fastcall *v35)(CAudioMediaType *); // rax
  __int64 (__fastcall *v36)(CAudioMediaType *); // rax
  __int64 (__fastcall *v37)(CAudioMediaType *); // rax
  struct tWAVEFORMATEX *v38; // r13
  DWORD nSamplesPerSec; // ecx
  struct tWAVEFORMATEX *v40; // r15
  struct _GUID *v41; // rdx
  CAudioMediaType *v42; // rcx
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  struct IAudioMediaType *v44; // rbx
  CAudioMediaType *v45; // rcx
  struct IAudioMediaTypeVtbl *v46; // rax
  CAudioMediaType *v47; // rdi
  void (*v48)(void); // rax
  CAudioMediaType *v49; // rsi
  const struct tWAVEFORMATEX *v50; // rax
  const struct tWAVEFORMATEX *v51; // rax
  void (*v52)(void); // rax
  ULONG (__stdcall *v53)(IAudioMediaType *); // rax
  unsigned int v54; // ebx
  LPVOID pv; // [rsp+48h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *v57; // [rsp+50h] [rbp-61h] BYREF
  struct tWAVEFORMATEX *Src[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v59; // [rsp+68h] [rbp-49h] BYREF
  struct tWAVEFORMATEX *v60; // [rsp+78h] [rbp-39h] BYREF
  struct IAudioMediaType *v61; // [rsp+80h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v62; // [rsp+88h] [rbp-29h] BYREF
  struct IAudioMediaType *v63; // [rsp+90h] [rbp-21h] BYREF
  struct _GUID v64; // [rsp+98h] [rbp-19h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-9h]

  v65 = -2LL;
  v10 = a2;
  v12 = 0LL;
  v62 = 0LL;
  *a8 = 0LL;
  v60 = 0LL;
  if ( (int)CloneWaveFormat(a3, &v60) >= 0 )
  {
    v59 = *a4;
    MixFormat = CEndpointCharacteristics::GetMixFormat(a1, v10, &v59, v13, &v62);
    v12 = v62;
    if ( MixFormat >= 0 )
    {
      v59 = *a5;
      v15 = v60;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v59, v10, v62, v60, 0LL) )
      {
        v59 = *a6;
        GetDeviceDefaults(a1, v10, &v59, a8, 0LL, 0LL, 0LL);
        goto LABEL_110;
      }
      if ( !a7 )
        goto LABEL_110;
      pv = 0LL;
      v59 = *a6;
      v16 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(a1, v10, a3, &v59, (struct tWAVEFORMATEX **)&pv);
      v17 = pv;
      if ( v16 >= 0 )
      {
        Src[0] = 0LL;
        v57 = 0LL;
        v61 = 0LL;
        if ( (int)CAudioMediaType::Create(
                    (const struct tWAVEFORMATEX *)pv,
                    (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                    (struct IAudioMediaType **)Src,
                    0.0,
                    0) < 0 )
        {
          v19 = (CAudioMediaType *)Src[0];
          if ( !Src[0] )
          {
LABEL_109:
            CoTaskMemFree(v17);
            pv = 0LL;
            goto LABEL_110;
          }
          if ( *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)Src[0] + 16LL) != CAudioMediaType::Release )
          {
            v20 = *(void (**)(void))(*(_QWORD *)Src[0] + 16LL);
LABEL_11:
            v20();
            goto LABEL_109;
          }
LABEL_42:
          CAudioMediaType::Release(v19);
          goto LABEL_109;
        }
        v64 = *a5;
        v21 = (CAudioMediaType *)Src[0];
        if ( (int)DeriveDevicePipeFormatFromConnectorFormat(
                    a1,
                    v18,
                    v10,
                    (struct IAudioMediaType *)Src[0],
                    (struct IAudioMediaType **)&v57) < 0 )
        {
          if ( v57 )
          {
            v22 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)&v57->wFormatTag + 16LL);
            if ( v22 == CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v57);
            else
              ((void (__fastcall *)(struct tWAVEFORMATEX *, __int64 (__fastcall *)(CAudioMediaType *)))v22)(
                v57,
                CAudioMediaType::Release);
          }
          if ( !v21 )
            goto LABEL_109;
          v20 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
          v23 = (char *)v20 == (char *)CAudioMediaType::Release;
LABEL_19:
          v19 = v21;
          if ( !v23 )
            goto LABEL_11;
          goto LABEL_42;
        }
        v59 = *a5;
        v24 = (CAudioMediaType *)v57;
        if ( (int)DeriveMixFormatFromDevicePipeFormat(a1, &v59, a2, (struct IAudioMediaType *)v57, &v61, 0LL) < 0 )
        {
          if ( v61 )
          {
            Release = (void (*)(void))v61->lpVtbl->Release;
            if ( (char *)Release == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v61);
            else
              Release();
          }
          if ( v24 )
          {
            v26 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v24 + 16LL);
            if ( v26 == CAudioMediaType::Release )
              CAudioMediaType::Release(v24);
            else
              v26(v24);
          }
          if ( !v21 )
            goto LABEL_109;
          v20 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
          v23 = (char *)v20 == (char *)CAudioMediaType::Release;
          goto LABEL_19;
        }
        v59 = *a5;
        v27 = (CAudioMediaType *)v61;
        v28 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v61->lpVtbl->GetAudioFormat)(v61);
        v29 = IsStreamFormatSupportedForMixFormat(a1, &v59, a2, v28, a3, 0LL);
        v16 = v29;
        if ( v29 < 0 )
        {
          v30 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v27 + 16LL);
          if ( v30 == CAudioMediaType::Release )
            CAudioMediaType::Release(v27);
          else
            v30(v27);
          if ( v24 )
          {
            v31 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v24 + 16LL);
            if ( v31 == CAudioMediaType::Release )
              CAudioMediaType::Release(v24);
            else
              v31(v24);
          }
          if ( !v21 )
            goto LABEL_109;
LABEL_41:
          v32 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v21 + 16LL);
          v19 = v21;
          if ( v32 != CAudioMediaType::Release )
          {
            v32(v21);
            goto LABEL_109;
          }
          goto LABEL_42;
        }
        if ( !v29 )
        {
          v33 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v21 + 40LL))(v21);
          CloneWaveFormat(v33, a8);
          v34 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v27 + 16LL);
          if ( v34 == CAudioMediaType::Release )
            CAudioMediaType::Release(v27);
          else
            v34(v27);
          if ( v24 )
          {
            v35 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v24 + 16LL);
            if ( v35 == CAudioMediaType::Release )
              CAudioMediaType::Release(v24);
            else
              v35(v24);
          }
          goto LABEL_41;
        }
        if ( *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v27 + 16LL) == CAudioMediaType::Release )
          CAudioMediaType::Release(v27);
        else
          (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v27 + 16LL))(v27);
        if ( v24 )
        {
          v36 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v24 + 16LL);
          if ( v36 == CAudioMediaType::Release )
            CAudioMediaType::Release(v24);
          else
            v36(v24);
        }
        if ( v21 )
        {
          v37 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v21 + 16LL);
          if ( v37 == CAudioMediaType::Release )
            CAudioMediaType::Release(v21);
          else
            v37(v21);
        }
        v15 = v60;
        v10 = a2;
      }
      if ( v16 != -2004287480 )
        goto LABEL_109;
      Src[0] = 0LL;
      v59 = *a6;
      GetDeviceDefaults(a1, v10, &v59, Src, 0LL, 0LL, 0LL);
      v38 = Src[0];
      if ( v15->nSamplesPerSec == Src[0]->nSamplesPerSec )
      {
LABEL_108:
        CoTaskMemFree(v38);
        Src[0] = 0LL;
        goto LABEL_109;
      }
      v57 = 0LL;
      if ( (int)CloneWaveFormat(Src[0], &v57) < 0 )
      {
        CoTaskMemFree(v57);
LABEL_107:
        v57 = 0LL;
        goto LABEL_108;
      }
      nSamplesPerSec = v15->nSamplesPerSec;
      v40 = v57;
      v57->nSamplesPerSec = nSamplesPerSec;
      v40->nAvgBytesPerSec = nSamplesPerSec * v40->nBlockAlign;
      v59 = *a6;
      if ( (int)ConnectorSupportsFormat(a1, (unsigned int)v10, v40, &v59) < 0 )
        goto LABEL_106;
      v61 = 0LL;
      v63 = 0LL;
      *(_QWORD *)&v59.Data1 = 0LL;
      if ( (int)CAudioMediaType::Create(v40, (unsigned int)v40->cbSize + 18, &v61, 0.0, 0) < 0 )
      {
        v42 = (CAudioMediaType *)v61;
        if ( v61 )
        {
          lpVtbl = v61->lpVtbl;
          goto LABEL_103;
        }
        goto LABEL_106;
      }
      v64 = *a5;
      v44 = v61;
      if ( (int)DeriveDevicePipeFormatFromConnectorFormat(a1, v41, v10, v61, &v63) >= 0 )
      {
        v64 = *a5;
        v47 = (CAudioMediaType *)v63;
        if ( (int)DeriveMixFormatFromDevicePipeFormat(a1, &v64, a2, v63, (struct IAudioMediaType **)&v59, 0LL) >= 0 )
        {
          v64 = *a5;
          v49 = *(CAudioMediaType **)&v59.Data1;
          v50 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v59.Data1 + 40LL))(*(_QWORD *)&v59.Data1);
          if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v64, a2, v50, v60, 0LL) )
          {
            v51 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44);
            CloneWaveFormat(v51, a8);
            if ( *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v49 + 16LL) == CAudioMediaType::Release )
              CAudioMediaType::Release(v49);
            else
              (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v49 + 16LL))(v49);
            if ( v47 )
            {
              if ( *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v47 + 16LL) == CAudioMediaType::Release )
                CAudioMediaType::Release(v47);
              else
                (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v47 + 16LL))(v47);
            }
            v42 = (CAudioMediaType *)v44;
            if ( (__int64 (__fastcall *)(CAudioMediaType *))v44->lpVtbl->Release == CAudioMediaType::Release )
            {
LABEL_104:
              CAudioMediaType::Release(v42);
              goto LABEL_106;
            }
            ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
            goto LABEL_106;
          }
          if ( *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v49 + 16LL) == CAudioMediaType::Release )
            CAudioMediaType::Release(v49);
          else
            (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v49 + 16LL))(v49);
        }
        else if ( *(_QWORD *)&v59.Data1 )
        {
          v48 = *(void (**)(void))(**(_QWORD **)&v59.Data1 + 16LL);
          if ( (char *)v48 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(*(CAudioMediaType **)&v59.Data1);
          else
            v48();
        }
        if ( !v47 )
          goto LABEL_101;
        v45 = v47;
        v46 = *(struct IAudioMediaTypeVtbl **)v47;
      }
      else
      {
        v45 = (CAudioMediaType *)v63;
        if ( !v63 )
          goto LABEL_101;
        v46 = v63->lpVtbl;
      }
      v52 = (void (*)(void))v46->Release;
      if ( (char *)v52 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v45);
      else
        v52();
LABEL_101:
      if ( v44 )
      {
        v42 = (CAudioMediaType *)v44;
        lpVtbl = v44->lpVtbl;
LABEL_103:
        v53 = lpVtbl->Release;
        if ( (char *)v53 != (char *)CAudioMediaType::Release )
        {
          ((void (__fastcall *)(CAudioMediaType *))v53)(v42);
          goto LABEL_106;
        }
        goto LABEL_104;
      }
LABEL_106:
      CoTaskMemFree(v40);
      goto LABEL_107;
    }
  }
LABEL_110:
  v54 = *a8 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v60);
  v60 = 0LL;
  CoTaskMemFree(v12);
  return v54;
}
