/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180004BE4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007600 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180032B08 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     memcmp_0 @ 0x180057F9A (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FE14 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d62dc145dcfedba70546eeba8120cc1b___ @ 0x1800A9D90 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9D90.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e954688d8d5ab1793c978495562be914___ @ 0x1800A9E10 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9E10.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ea3cb1dc1862ae928b3ba0cef9d14f54___ @ 0x1800A9EC4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9EC4.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ACB20 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800AD824 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        unsigned __int16 **a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        bool a8,
        bool a9,
        struct CAudioSessionManager *a10,
        bool a11,
        bool a12,
        struct ISaDeviceProxy **a13)
{
  SaDeviceParams *v14; // r13
  int (*v15)(CDeviceGraphManager *__hidden, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **); // rax
  unsigned int SaDevice; // eax
  int SaDeviceForPackagedApp; // ebx
  CAudioResourceManager *v18; // rcx
  __int64 v20; // r12
  char v21; // r13
  unsigned __int64 v22; // rax
  _QWORD *i; // rbx
  unsigned __int16 **v24; // rax
  signed __int64 v25; // rcx
  unsigned __int16 *v26; // rsi
  __int64 v27; // rdi
  const void *v28; // rax
  __int64 v29; // rsi
  signed __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  char v33; // si
  char v34; // r12
  _QWORD *j; // rbx
  unsigned __int16 **v36; // rax
  signed __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // ecx
  int v40; // eax
  CVolumeStrip *v41; // rcx
  unsigned int v42; // edi
  struct CEndpointCharacteristics *v43; // rsi
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // edi
  char *v47; // rdi
  char *v48; // rsi
  char *v49; // rdi
  char *v50; // rsi
  __int64 v51; // rcx
  unsigned __int64 v52; // [rsp+30h] [rbp-A1h]
  __int64 v53; // [rsp+58h] [rbp-79h] BYREF
  __int64 v54; // [rsp+60h] [rbp-71h] BYREF
  struct CEndpointCharacteristics *v55; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v56; // [rsp+70h] [rbp-61h]
  __int64 v57; // [rsp+78h] [rbp-59h] BYREF
  SaDeviceParams *v58; // [rsp+80h] [rbp-51h] BYREF
  void *v59[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v60; // [rsp+98h] [rbp-39h]
  void *v61[2]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-21h]
  __int64 v63; // [rsp+B8h] [rbp-19h]
  _QWORD v64[2]; // [rsp+C0h] [rbp-11h] BYREF

  v63 = -2LL;
  v56 = a4;
  v55 = a2;
  v14 = (SaDeviceParams *)a13;
  v58 = (SaDeviceParams *)a13;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids, *a3);
    a2 = v55;
    a4 = v56;
  }
  v15 = *(int (**)(CDeviceGraphManager *__hidden, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL);
  v52 = 0LL;
  if ( v15 == CDeviceGraphManager::GetSaDevice )
    SaDevice = CDeviceGraphManager::GetSaDevice(
                 g_DeviceGraphManager,
                 a2,
                 (struct SaDeviceParams *)a3,
                 a4,
                 a5,
                 0LL,
                 a7,
                 a13);
  else
    SaDevice = ((__int64 (__fastcall *)(CDeviceGraphManager *, struct CEndpointCharacteristics *, unsigned __int16 **))v15)(
                 g_DeviceGraphManager,
                 a2,
                 a3);
  SaDeviceForPackagedApp = SaDevice;
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids, SaDevice);
  }
  if ( SaDeviceForPackagedApp != -2005139364 )
  {
    if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
      goto LABEL_14;
    v57 = 0LL;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                               g_DeviceGraphStore,
                               *a3,
                               &v57);
    *(_OWORD *)v61 = 0LL;
    v62 = 0LL;
    if ( SaDeviceForPackagedApp >= 0 )
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v57 + 72LL))(v57, v61);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
        ((char *)v61[1] - (char *)v61[0]) >> 3);
    }
    if ( SaDeviceForPackagedApp >= 0 )
    {
      v20 = 0LL;
      v54 = 0LL;
      v21 = 0;
      v22 = 0xFFFFFFFFLL;
      v53 = 0xFFFFFFFFLL;
      for ( i = v61[0]; ; ++i )
      {
        if ( i == v61[1] )
        {
          if ( v20 && v22 && v21 )
          {
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
            v20 = v54;
          }
          v54 = 0LL;
          v14 = v58;
          *(_QWORD *)v58 = v20;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
          SaDeviceForPackagedApp = v20 == 0 ? 0x887C001A : 0;
          goto LABEL_55;
        }
        v24 = (unsigned __int16 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*i + 40LL))(*i, v64);
        v25 = (char *)*v24 - (char *)a3[6];
        if ( *v24 == a3[6] )
          v25 = (char *)v24[1] - (char *)a3[7];
        if ( v25 )
          break;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) != *((_DWORD *)a3 + 2) )
          break;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
          break;
        if ( a12 )
        {
          v26 = a3[2];
          v27 = v26[8];
          v28 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
          if ( memcmp_0(v28, v26, v27 + 18) )
            break;
        }
        if ( a11 )
        {
          if ( (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != a3[4] )
            break;
        }
        else
        {
          if ( v21 || (v21 = 0, (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i)) )
            v21 = 1;
          if ( v20 )
          {
            v29 = *i;
            v30 = abs64((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20) - (_QWORD)a3[4]);
            if ( v30 <= (__int64)abs64((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29) - (_QWORD)a3[4]) )
              break;
          }
        }
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids, v31);
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v54, i);
        v22 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - (_QWORD)a3[4]);
        v53 = v22;
        v20 = v54;
LABEL_49:
        ;
      }
      v22 = v53;
      goto LABEL_49;
    }
LABEL_55:
    if ( SaDeviceForPackagedApp != -2005139430 )
      goto LABEL_128;
    v32 = 0LL;
    v54 = 0LL;
    v33 = 0;
    v34 = 0;
    for ( j = v61[0]; j != v61[1]; ++j )
    {
      v36 = (unsigned __int16 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*j + 40LL))(*j, v64);
      v37 = (char *)*v36 - (char *)a3[6];
      if ( *v36 == a3[6] )
        v37 = (char *)v36[1] - (char *)a3[7];
      if ( !v37
        && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*j + 80LL))(*j) == *((_DWORD *)a3 + 2)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 88LL))(*j) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 152LL))(*j) )
        {
          v34 = 1;
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 120LL))(*j) )
          {
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 32LL))(*j);
              WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids, v38);
            }
            Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v54, j);
            v32 = v54;
            if ( v54 )
            {
              v39 = 0;
              goto LABEL_75;
            }
            break;
          }
          v33 = 1;
        }
      }
    }
    v39 = -1;
LABEL_75:
    v40 = 0;
    if ( v39 == -1 )
      v40 = -2005139360;
    SaDeviceForPackagedApp = v40;
    if ( v39 == -1 && (a12 || a11) )
    {
      if ( v33 )
      {
        SaDeviceForPackagedApp = -2004287448;
LABEL_127:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
LABEL_128:
        v49 = (char *)v61[0];
        if ( v61[0] )
        {
          v50 = (char *)v61[1];
          if ( v61[0] != v61[1] )
          {
            do
            {
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v49);
              v49 += 8;
            }
            while ( v49 != v50 );
            v49 = (char *)v61[0];
          }
          std::_Deallocate(v49, (v62 - (__int64)v49) >> 3, 8uLL);
          *(_OWORD *)v61 = 0LL;
          v62 = 0LL;
        }
        v51 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        }
        goto LABEL_14;
      }
      SaDeviceForPackagedApp = v40;
      if ( v34 )
        SaDeviceForPackagedApp = -2004287447;
    }
    if ( SaDeviceForPackagedApp < 0 )
      goto LABEL_127;
    v58 = 0LL;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v32 + 104LL))(v32, &v58);
    *(_OWORD *)v59 = 0LL;
    v60 = 0LL;
    if ( SaDeviceForPackagedApp >= 0 )
    {
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v57 + 80LL))(
                                 v57,
                                 v32,
                                 v59);
      v41 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          22LL,
          &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
          ((char *)v59[1] - (char *)v59[0]) >> 3);
        v41 = WPP_GLOBAL_Control;
      }
      if ( SaDeviceForPackagedApp < 0 )
        goto LABEL_93;
      v53 = v32;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v53);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e954688d8d5ab1793c978495562be914___(
        v64,
        v59[0],
        v59[1],
        &v53);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v64);
    }
    v41 = WPP_GLOBAL_Control;
LABEL_93:
    if ( v41 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v41 + 7) & 0x100) != 0 && *((_BYTE *)v41 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v41 + 2), 23LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids);
      v41 = WPP_GLOBAL_Control;
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v42 = a7;
      v43 = v55;
    }
    else
    {
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v61);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v54);
      v42 = a7;
      v43 = v55;
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, unsigned __int16 **, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, SaDeviceParams *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                 g_DeviceGraphManager,
                                 v55,
                                 a3,
                                 v56,
                                 a5,
                                 0LL,
                                 a7,
                                 v14);
      v41 = WPP_GLOBAL_Control;
    }
    if ( v41 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v41 + 7) & 0x100) != 0 && *((_BYTE *)v41 + 25) >= 4u )
      WPP_SF_d(
        *((_QWORD *)v41 + 2),
        24LL,
        &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
        (unsigned int)SaDeviceForPackagedApp);
    if ( SaDeviceForPackagedApp < 0 )
    {
      v55 = 0LL;
      v45 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64, _DWORD, _QWORD, unsigned int, struct CEndpointCharacteristics **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              v43,
              v58,
              2LL,
              0,
              0LL,
              v42,
              &v55);
      v46 = v45;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids, v45);
      }
      if ( v46 >= 0 )
      {
        v53 = (__int64)v55;
        if ( v55 )
          (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v55 + 8LL))(v55);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d62dc145dcfedba70546eeba8120cc1b___(
          v64,
          v59[0],
          v59[1],
          &v53);
        if ( v64[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 16LL))(v64[0]);
      }
      if ( v55 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v55 + 16LL))(v55);
    }
    else
    {
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ea3cb1dc1862ae928b3ba0cef9d14f54___(
        v64,
        v59[0],
        v59[1],
        v14);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids);
      }
    }
    v47 = (char *)v59[0];
    if ( v59[0] )
    {
      v48 = (char *)v59[1];
      if ( v59[0] != v59[1] )
      {
        do
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v47);
          v47 += 8;
        }
        while ( v47 != v48 );
        v47 = (char *)v59[0];
      }
      std::_Deallocate(v47, (v60 - (__int64)v47) >> 3, 8uLL);
      *(_OWORD *)v59 = 0LL;
      v60 = 0LL;
    }
    if ( v58 )
      SaDeviceParams::`scalar deleting destructor'(v58, v44);
    goto LABEL_127;
  }
  if ( !a9 )
    goto LABEL_135;
  SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                             v18,
                             v55,
                             (struct SaDeviceParams *)a3,
                             v56,
                             a5,
                             v52,
                             a7,
                             a10,
                             a13);
LABEL_14:
  if ( SaDeviceForPackagedApp < 0 )
LABEL_135:
    AudSrvTraceLoggingErrorHelper("CAudioResourceManager::GetSaDeviceForSharedStream", 0x7F0u, SaDeviceForPackagedApp);
  return (unsigned int)SaDeviceForPackagedApp;
}
