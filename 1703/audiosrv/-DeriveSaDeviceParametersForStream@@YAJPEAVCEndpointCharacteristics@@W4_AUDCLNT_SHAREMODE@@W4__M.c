/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x18002C2A0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ACE74 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001F800 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
 */

// Hidden C++ exception states: #wind=4
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
  SaDeviceParams *v11; // rbx
  unsigned int v12; // edx
  int DeviceDefaults; // r14d
  __int64 (__fastcall *v14)(CPolicyConfig *, const unsigned __int16 *, int, __int64 *, __int64 *); // rax
  int ProcessingPeriod; // eax
  void *v16; // rax
  void *v17; // rsi
  void *v18; // rdi
  __int64 cbSize; // rdi
  void *v20; // rax
  void *v21; // r14
  __int64 v22; // r15
  void *v23; // rax
  void *v24; // r12
  bool v25; // al
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h] BYREF
  void *v30; // [rsp+58h] [rbp-28h]
  __int64 v31; // [rsp+60h] [rbp-20h]
  struct _GUID v32; // [rsp+70h] [rbp-10h] BYREF

  v31 = -2LL;
  v11 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v32 = *a5;
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v32, 0LL, 0LL, &a9, &v28);
  }
  else
  {
    v29 = 0LL;
    *(_QWORD *)&v32.Data1 = 0LL;
    pv = 0LL;
    DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a1 + 2) + 40LL))(
                       *((_QWORD *)a1 + 2),
                       &pv);
    if ( DeviceDefaults >= 0 )
    {
      v14 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig + 56LL);
      if ( v14 == CPolicyConfig::GetProcessingPeriod )
        ProcessingPeriod = CPolicyConfig::GetProcessingPeriod(
                             g_PolicyConfig,
                             (const unsigned __int16 *)pv,
                             0,
                             &v29,
                             &v28);
      else
        ProcessingPeriod = v14(g_PolicyConfig, (const unsigned __int16 *)pv, 0, &v29, &v28);
      DeviceDefaults = ProcessingPeriod;
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    if ( DeviceDefaults < 0 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          60LL,
          &WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
          (unsigned int)DeviceDefaults);
      }
      AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 0x1C02u, DeviceDefaults);
    }
  }
  if ( DeviceDefaults >= 0 )
  {
    v16 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0x68uLL);
      *(_QWORD *)v17 = 0LL;
      *((_QWORD *)v17 + 2) = 0LL;
      *((_QWORD *)v17 + 3) = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    v11 = (SaDeviceParams *)v17;
    v30 = v17;
    DeviceDefaults = 0;
    if ( !v17 )
      DeviceDefaults = -2147024882;
    v18 = 0LL;
    if ( DeviceDefaults < 0 )
      goto LABEL_25;
    cbSize = Src->cbSize;
    v20 = CoTaskMemAlloc(cbSize + 18);
    v21 = v20;
    if ( v20 )
    {
      memcpy_0(v20, Src, cbSize + 18);
      v18 = v21;
      v22 = a7->cbSize;
      v23 = CoTaskMemAlloc(v22 + 18);
      v24 = v23;
      if ( v23 )
      {
        memcpy_0(v23, a7, v22 + 18);
        *((_DWORD *)v17 + 2) = a3;
        *(_QWORD *)&v32.Data1 = 0LL;
        CoTaskMemFree(*((LPVOID *)v17 + 2));
        *((_QWORD *)v17 + 2) = v24;
        v18 = 0LL;
        v29 = 0LL;
        CoTaskMemFree(*((LPVOID *)v17 + 3));
        *((_QWORD *)v17 + 3) = v21;
        *((_QWORD *)v17 + 4) = a9;
        *((_QWORD *)v17 + 5) = v28;
        *((struct _GUID *)v17 + 4) = *a6;
        *((struct _GUID *)v17 + 3) = *a5;
        v25 = a2 != AUDCLNT_SHAREMODE_EXCLUSIVE && (a3 != eOffloadConnector || a4);
        *((_BYTE *)v17 + 96) = v25;
        DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)a1 + 2) + 40LL))(
                           *((_QWORD *)a1 + 2),
                           v17);
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11LL,
            &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
            (unsigned int)a3,
            a9);
        }
        CoCreateGuid((GUID *)v17 + 5);
        goto LABEL_25;
      }
    }
    else
    {
      v18 = 0LL;
    }
    DeviceDefaults = -2147024882;
LABEL_25:
    CoTaskMemFree(v18);
    CoTaskMemFree(0LL);
    if ( DeviceDefaults >= 0 )
    {
      v11 = 0LL;
      *a10 = (struct SaDeviceParams *)v17;
    }
  }
  if ( v11 )
    SaDeviceParams::`scalar deleting destructor'(v11, v12);
  return (unsigned int)DeviceDefaults;
}
