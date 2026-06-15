/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180007DF4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x18009BF00 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000A70C (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x18006B9E8 (WPP_SF_dg.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        struct CEndpointCharacteristics *a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        char a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct tWAVEFORMATEX *a7,
        struct tWAVEFORMATEX *Src,
        __int64 a9,
        struct SaDeviceParams **a10)
{
  void *v11; // rdi
  LPVOID *v12; // rbx
  char v13; // r12
  struct _GUID v14; // xmm0
  __int64 *v17; // rax
  struct _GUID *v18; // r8
  signed int DeviceDefaults; // r14d
  void *v20; // rax
  void *v21; // r15
  struct tWAVEFORMATEX *v22; // rsi
  struct tWAVEFORMATEX *v23; // r14
  void *v24; // r14
  struct _GUID v26; // [rsp+40h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v27[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  void *v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+70h] [rbp-10h]

  v30 = -2LL;
  v11 = 0LL;
  v12 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v13 = 1;
  v14 = *a5;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    *(struct _GUID *)v27 = *a5;
    v17 = &a9;
    v18 = (struct _GUID *)v27;
  }
  else
  {
    v27[0] = 0LL;
    v26 = v14;
    v17 = (__int64 *)v27;
    v18 = &v26;
  }
  DeviceDefaults = GetDeviceDefaults(a1, a3, v18, 0LL, 0LL, v17, &v28);
  if ( DeviceDefaults < 0 )
    goto LABEL_17;
  v20 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  if ( v20 )
  {
    memset(v20, 0, 0x68uLL);
    *(_QWORD *)v21 = 0LL;
    *((_QWORD *)v21 + 2) = 0LL;
    *((_QWORD *)v21 + 3) = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  v12 = (LPVOID *)v21;
  v29 = v21;
  v22 = 0LL;
  v27[0] = 0LL;
  *(_QWORD *)&v26.Data1 = 0LL;
  DeviceDefaults = v21 == 0LL ? 0x8007000E : 0;
  if ( !v21 )
    goto LABEL_9;
  DeviceDefaults = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&v26);
  if ( DeviceDefaults >= 0 )
  {
    DeviceDefaults = CloneWaveFormat(a7, v27);
    v22 = v27[0];
    v11 = *(void **)&v26.Data1;
LABEL_9:
    if ( DeviceDefaults >= 0 )
    {
      *((_DWORD *)v21 + 2) = a3;
      v23 = v22;
      v22 = 0LL;
      v27[0] = 0LL;
      CoTaskMemFree(*((LPVOID *)v21 + 2));
      *((_QWORD *)v21 + 2) = v23;
      v24 = v11;
      v11 = 0LL;
      *(_QWORD *)&v26.Data1 = 0LL;
      CoTaskMemFree(*((LPVOID *)v21 + 3));
      *((_QWORD *)v21 + 3) = v24;
      *((_QWORD *)v21 + 4) = a9;
      *((_QWORD *)v21 + 5) = v28;
      *((struct _GUID *)v21 + 4) = *a6;
      *((struct _GUID *)v21 + 3) = *a5;
      if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE || a3 == eOffloadConnector && !a4 )
        v13 = 0;
      *((_BYTE *)v21 + 96) = v13;
      DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)a1 + 2) + 40LL))(
                         *((_QWORD *)a1 + 2),
                         v21);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
          (unsigned int)a3,
          a9);
      }
      CoCreateGuid((GUID *)v21 + 5);
    }
    goto LABEL_15;
  }
  v11 = *(void **)&v26.Data1;
LABEL_15:
  CoTaskMemFree(v11);
  CoTaskMemFree(v22);
  if ( DeviceDefaults >= 0 )
  {
    v12 = 0LL;
    *a10 = (struct SaDeviceParams *)v21;
  }
LABEL_17:
  if ( v12 )
  {
    CoTaskMemFree(v12[3]);
    v12[3] = 0LL;
    CoTaskMemFree(v12[2]);
    v12[2] = 0LL;
    CoTaskMemFree(*v12);
    *v12 = 0LL;
    operator delete(v12, (const struct std::nothrow_t *)0x68);
  }
  return (unsigned int)DeviceDefaults;
}
