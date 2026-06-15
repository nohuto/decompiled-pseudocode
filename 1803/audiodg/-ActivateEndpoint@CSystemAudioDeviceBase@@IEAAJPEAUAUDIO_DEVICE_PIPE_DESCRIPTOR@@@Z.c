/*
 * XREFs of ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140036E5C
 * Callers:
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140038840 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003BFE0 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003D250 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14001AB38 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z @ 0x140036D88 (-AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140037270 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_Ds @ 0x140037314 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSystemAudioDeviceBase::ActivateEndpoint(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2)
{
  int Instance; // ebx
  struct IUnknown *v5; // rcx
  int v6; // eax
  unsigned int *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rbx
  int v10; // eax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, char *); // [rsp+98h] [rbp-9h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, char *); // [rsp+A0h] [rbp-1h] BYREF
  LPVOID ppv[3]; // [rsp+A8h] [rbp+7h] BYREF
  PROPVARIANT pvar; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+C8h] [rbp+27h]
  char *v19; // [rsp+D0h] [rbp+2Fh]
  struct IUnknown *v20; // [rsp+118h] [rbp+77h] BYREF
  struct IUnknown *v21; // [rsp+120h] [rbp+7Fh] BYREF

  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  v20 = 0LL;
  ppv[2] = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v21 = 0LL;
  pvar = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Instance = ValidateDevicePipeDescriptor((const struct tWAVEFORMATEX **)a2);
  if ( Instance >= 0 )
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IUnknown **))(*(_QWORD *)ppv[0] + 40LL))(
                   ppv[0],
                   *((_QWORD *)a2 + 7),
                   &v20);
      if ( Instance >= 0 )
      {
        v5 = v21;
        if ( v21 != v20 )
        {
          ATL::AtlComQIPtrAssign(&v21, v20, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
          v5 = v21;
        }
        if ( !v5 )
        {
          Instance = -2147467262;
          goto LABEL_21;
        }
        LOWORD(pvar) = 65;
        v6 = ((__int64 (__fastcall *)(struct IUnknown *))v5->lpVtbl[2].QueryInterface)(v5);
        v7 = (unsigned int *)*((_QWORD *)a2 + 1);
        v8 = *((unsigned __int16 *)v7 + 8);
        if ( v6 )
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 32);
          if ( !v9 )
            goto LABEL_10;
          *(_DWORD *)v9 = *((unsigned __int16 *)v7 + 8) + 32;
          *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 25);
          memcpy_0(v9 + 12, v7, *((unsigned __int16 *)v7 + 8) + 18LL);
          v10 = *((unsigned __int16 *)v7 + 8) + 32;
        }
        else
        {
          v9 = (char *)CoTaskMemAlloc(v8 + 64);
          if ( !v9 )
          {
LABEL_10:
            Instance = -2147024882;
            goto LABEL_21;
          }
          *(_DWORD *)v9 = *((unsigned __int16 *)v7 + 8) + 64;
          *((_DWORD *)v9 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a2 + 7));
          *((_DWORD *)v9 + 2) = *((_DWORD *)a2 + 25);
          *(_OWORD *)(v9 + 12) = *(_OWORD *)((char *)a2 + 104);
          *(_OWORD *)(v9 + 28) = *(_OWORD *)((char *)a2 + 152);
          memcpy_0(v9 + 44, v7, *((unsigned __int16 *)v7 + 8) + 18LL);
          v10 = *((unsigned __int16 *)v7 + 8) + 64;
        }
        v19 = v9;
        LODWORD(v18) = v10;
        QueryInterface = v20->lpVtbl[1].QueryInterface;
        if ( *((_DWORD *)a2 + 18) )
        {
          Instance = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
                       v20,
                       &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                       1LL,
                       &pvar,
                       &v15);
          if ( Instance < 0 )
            goto LABEL_21;
          v12 = v15;
        }
        else
        {
          Instance = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, PROPVARIANT *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryInterface)(
                       v20,
                       &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                       1LL,
                       &pvar,
                       &v14);
          if ( Instance < 0 )
            goto LABEL_21;
          v12 = v14;
        }
        Instance = (**v12)(v12, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, (char *)this + 232);
        AEWMILOG_ENDPOINT_ACTIVATION(
          *((_DWORD *)a2 + 20) != 0,
          this,
          *((unsigned __int16 *)v7 + 7),
          *(unsigned __int16 *)v7,
          *((_DWORD *)a2 + 34),
          *((_DWORD *)a2 + 25),
          *((_DWORD *)a2 + 18),
          *((_DWORD *)a2 + 36),
          *(unsigned __int16 *)v7,
          v7[1],
          *((unsigned __int16 *)v7 + 7),
          *((unsigned __int16 *)v7 + 1),
          *((_DWORD *)a2 + 8),
          *((_DWORD *)this + 56),
          *((_DWORD *)a2 + 20) != 0,
          *((_DWORD *)a2 + 24),
          Instance);
        if ( Instance >= 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 29) + 48LL))(
            *((_QWORD *)this + 29),
            *((unsigned int *)this + 56));
      }
    }
  }
LABEL_21:
  PropVariantClear(&pvar);
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14,
        (unsigned int)&WPP_02c172abf82d319c1248862d9fb85c31_Traceguids,
        Instance,
        (__int64)"CSystemAudioDeviceBase::ActivateEndpoint");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceBase::ActivateEndpoint", 0x216u, Instance);
  }
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v14 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v14)[2])(v14);
  if ( v15 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v15)[2])(v15);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)Instance;
}
