/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18009B958
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032FD4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033474 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18009F4C4 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BD430 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveStreamFormatFromMixFormat(
        struct CEndpointCharacteristics *this,
        struct _GUID *a2,
        __int32 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v9; // rdi
  int StreamEffect; // eax
  int v11; // esi
  CAudioMediaType *v12; // rbx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v14; // eax
  void (*Release)(void); // rax
  __int64 (__fastcall *v16)(CAudioMediaType *); // rax
  ULONG (__stdcall *v17)(IUnknown *); // rax
  __int64 (__fastcall *v18)(CAudioMediaType *); // rax
  ULONG (__stdcall *v19)(IUnknown *); // rax
  __int64 (__fastcall *v20)(CAudioMediaType *); // rax
  struct IAudioMediaType *v21; // rcx
  ULONG (__stdcall *v22)(IAudioMediaType *); // rax
  struct IAudioSystemEffects2 **v24; // [rsp+20h] [rbp-60h]
  int v25; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v26; // [rsp+48h] [rbp-38h] BYREF
  struct IAudioProcessingObject *v27; // [rsp+50h] [rbp-30h] BYREF
  struct IUnknown *v28; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v29; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h]

  v30 = -2LL;
  v9 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v29 = *a2;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                     this,
                     &v29,
                     0,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     &v27,
                     0LL);
  }
  else
  {
    StreamEffect = CEndpointCharacteristics::GetLfx(
                     this,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     0LL,
                     &v27,
                     v24);
  }
  v11 = StreamEffect;
  if ( StreamEffect >= 0 )
  {
    if ( v27 )
    {
      v25 = 0;
      v12 = 0LL;
      *(_QWORD *)&v29.Data1 = 0LL;
      if ( a4 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v29, a4);
        v12 = *(CAudioMediaType **)&v29.Data1;
      }
      v26 = 0LL;
      lpVtbl = v27->lpVtbl;
      if ( *((_DWORD *)this + 37) )
        v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, CAudioMediaType *, struct IUnknown **))lpVtbl->IsOutputFormatSupported)(
                v27,
                a4,
                v12,
                &v26);
      else
        v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, CAudioMediaType *, struct IUnknown **))lpVtbl->IsInputFormatSupported)(
                v27,
                a4,
                v12,
                &v26);
      if ( v14 < 0
        || ((int (__fastcall *)(struct IUnknown *, int *))v26->lpVtbl[1].QueryInterface)(v26, &v25) < 0
        || v25 )
      {
        v11 = -2004287480;
        if ( v26 )
        {
          Release = (void (*)(void))v26->lpVtbl->Release;
          if ( (char *)Release == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v26);
          else
            Release();
        }
        if ( v12 )
        {
          v16 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
          if ( v16 == CAudioMediaType::Release )
            CAudioMediaType::Release(v12);
          else
            v16(v12);
        }
        goto LABEL_47;
      }
      if ( v26 )
      {
        ATL::AtlComPtrAssign(&v28, v26);
        v9 = (struct IAudioMediaType *)v28;
      }
      v11 = ValidateAPOInputFormat(v9);
      if ( v11 < 0 )
      {
        if ( v26 )
        {
          v17 = v26->lpVtbl->Release;
          if ( (char *)v17 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v26);
          else
            ((void (__fastcall *)(struct IUnknown *))v17)(v26);
        }
        if ( v12 )
        {
          v18 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
          if ( v18 == CAudioMediaType::Release )
            CAudioMediaType::Release(v12);
          else
            v18(v12);
        }
LABEL_46:
        if ( v11 >= 0 )
          goto LABEL_48;
        goto LABEL_47;
      }
      if ( v26 )
      {
        v19 = v26->lpVtbl->Release;
        if ( (char *)v19 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v26);
        else
          ((void (__fastcall *)(struct IUnknown *))v19)(v26);
      }
      if ( v12 )
      {
        v20 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
        if ( v20 == CAudioMediaType::Release )
          CAudioMediaType::Release(v12);
        else
          v20(v12);
      }
    }
    else if ( a4 )
    {
      ATL::AtlComPtrAssign(&v28, a4);
      v9 = (struct IAudioMediaType *)v28;
    }
    v21 = v9;
    v9 = 0LL;
    v28 = 0LL;
    *a5 = v21;
    goto LABEL_46;
  }
LABEL_47:
  AudSrvTraceLoggingErrorHelper("DeriveStreamFormatFromMixFormat", 1413, v11);
LABEL_48:
  if ( v27 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v27->lpVtbl->Release)(v27);
  if ( v9 )
  {
    v22 = v9->lpVtbl->Release;
    if ( (char *)v22 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v9);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v22)(v9);
  }
  return (unsigned int)v11;
}
