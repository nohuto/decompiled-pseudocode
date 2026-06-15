/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18000FD7C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008A594 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_8c64b0c235f0093645fcf584d53c80b5___ @ 0x1800984AC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800984AC.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b956a4fa1576a0f09c94875497cb28ca___ @ 0x18009854C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18009854C.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c30df93bd8be625af7c44e384f25ff48___ @ 0x1800985FC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800985FC.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009BB5C (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18009C788 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B6878 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
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
  struct ISaDeviceProxy **v14; // r13
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
  CAudioDGProcess *v41; // rcx
  unsigned int v42; // edi
  struct CEndpointCharacteristics *v43; // rsi
  unsigned int v44; // eax
  int v45; // edi
  char *v46; // rdi
  char *v47; // rsi
  void *v48; // rdi
  char *v49; // rdi
  char *v50; // rsi
  unsigned __int64 v51; // [rsp+30h] [rbp-A1h]
  __int64 v52; // [rsp+58h] [rbp-79h] BYREF
  __int64 v53; // [rsp+60h] [rbp-71h] BYREF
  struct CEndpointCharacteristics *v54; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-61h]
  __int64 v56; // [rsp+78h] [rbp-59h] BYREF
  void *v57; // [rsp+80h] [rbp-51h] BYREF
  void *v58[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v59; // [rsp+98h] [rbp-39h]
  void *v60[2]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-21h]
  __int64 v62; // [rsp+B8h] [rbp-19h]
  _QWORD v63[2]; // [rsp+C0h] [rbp-11h] BYREF

  v62 = -2LL;
  v55 = a4;
  v54 = a2;
  v14 = a13;
  v57 = a13;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, *a3);
    a2 = v54;
    a4 = v55;
  }
  v15 = *(int (**)(CDeviceGraphManager *__hidden, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, unsigned __int64, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL);
  v51 = 0LL;
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
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, SaDevice);
  }
  if ( SaDeviceForPackagedApp != -2005139364 )
  {
    if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
      goto LABEL_10;
    v56 = 0LL;
    Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v56);
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                               g_DeviceGraphStore,
                               *a3,
                               &v56);
    *(_OWORD *)v60 = 0LL;
    v61 = 0LL;
    if ( SaDeviceForPackagedApp >= 0 )
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v56 + 72LL))(v56, v60);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
        ((char *)v60[1] - (char *)v60[0]) >> 3);
    }
    if ( SaDeviceForPackagedApp >= 0 )
    {
      v20 = 0LL;
      v53 = 0LL;
      v21 = 0;
      v22 = 0xFFFFFFFFLL;
      v52 = 0xFFFFFFFFLL;
      for ( i = v60[0]; ; ++i )
      {
        if ( i == v60[1] )
        {
          if ( v20 && v22 && v21 )
          {
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v53);
            v20 = v53;
          }
          v53 = 0LL;
          v14 = (struct ISaDeviceProxy **)v57;
          *(_QWORD *)v57 = v20;
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v53);
          SaDeviceForPackagedApp = v20 == 0 ? 0x887C001A : 0;
          goto LABEL_55;
        }
        v24 = (unsigned __int16 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*i + 40LL))(*i, v63);
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
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, v31);
        }
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v53, i);
        v22 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - (_QWORD)a3[4]);
        v52 = v22;
        v20 = v53;
LABEL_49:
        ;
      }
      v22 = v52;
      goto LABEL_49;
    }
LABEL_55:
    if ( SaDeviceForPackagedApp != -2005139430 )
      goto LABEL_128;
    v32 = 0LL;
    v53 = 0LL;
    v33 = 0;
    v34 = 0;
    for ( j = v60[0]; j != v60[1]; ++j )
    {
      v36 = (unsigned __int16 **)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*j + 40LL))(*j, v63);
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
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 32LL))(*j);
              WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, v38);
            }
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v53, j);
            v32 = v53;
            if ( v53 )
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
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v53);
LABEL_128:
        v49 = (char *)v60[0];
        if ( v60[0] )
        {
          v50 = (char *)v60[1];
          if ( v60[0] != v60[1] )
          {
            do
            {
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v49);
              v49 += 8;
            }
            while ( v49 != v50 );
            v49 = (char *)v60[0];
          }
          std::_Deallocate(v49, (v61 - (__int64)v49) >> 3, 8uLL);
          *(_OWORD *)v60 = 0LL;
          v61 = 0LL;
        }
        Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v56);
        goto LABEL_10;
      }
      SaDeviceForPackagedApp = v40;
      if ( v34 )
        SaDeviceForPackagedApp = -2004287447;
    }
    if ( SaDeviceForPackagedApp < 0 )
      goto LABEL_127;
    v57 = 0LL;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v32 + 104LL))(v32, &v57);
    *(_OWORD *)v58 = 0LL;
    v59 = 0LL;
    if ( SaDeviceForPackagedApp >= 0 )
    {
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v56 + 88LL))(
                                 v56,
                                 v32,
                                 v58);
      v41 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          22LL,
          &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
          ((char *)v58[1] - (char *)v58[0]) >> 3);
        v41 = WPP_GLOBAL_Control;
      }
      if ( SaDeviceForPackagedApp < 0 )
        goto LABEL_93;
      v52 = v32;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v52);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b956a4fa1576a0f09c94875497cb28ca___(
        v63,
        v58[0],
        v58[1],
        &v52);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v63);
    }
    v41 = WPP_GLOBAL_Control;
LABEL_93:
    if ( v41 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v41 + 7) & 0x100) != 0
      && *((_BYTE *)v41 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v41 + 2), 23LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids);
      v41 = WPP_GLOBAL_Control;
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v42 = a7;
      v43 = v54;
    }
    else
    {
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v60);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v53);
      v42 = a7;
      v43 = v54;
      SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, unsigned __int16 **, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                 g_DeviceGraphManager,
                                 v54,
                                 a3,
                                 v55,
                                 a5,
                                 0LL,
                                 a7,
                                 v14);
      v41 = WPP_GLOBAL_Control;
    }
    if ( v41 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v41 + 7) & 0x100) != 0
      && *((_BYTE *)v41 + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)v41 + 2),
        24LL,
        &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
        (unsigned int)SaDeviceForPackagedApp);
    }
    if ( SaDeviceForPackagedApp < 0 )
    {
      v54 = 0LL;
      v44 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, void *, __int64, _DWORD, _QWORD, unsigned int, struct CEndpointCharacteristics **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              v43,
              v57,
              2LL,
              0,
              0LL,
              v42,
              &v54);
      v45 = v44;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, v44);
      }
      if ( v45 >= 0 )
      {
        v52 = (__int64)v54;
        if ( v54 )
          (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v54 + 8LL))(v54);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c30df93bd8be625af7c44e384f25ff48___(
          v63,
          v58[0],
          v58[1],
          &v52);
        if ( v63[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v63[0] + 16LL))(v63[0]);
      }
      if ( v54 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v54 + 16LL))(v54);
    }
    else
    {
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_8c64b0c235f0093645fcf584d53c80b5___(
        v63,
        v58[0],
        v58[1],
        v14);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids);
      }
    }
    v46 = (char *)v58[0];
    if ( v58[0] )
    {
      v47 = (char *)v58[1];
      if ( v58[0] != v58[1] )
      {
        do
        {
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v46);
          v46 += 8;
        }
        while ( v46 != v47 );
        v46 = (char *)v58[0];
      }
      std::_Deallocate(v46, (v59 - (__int64)v46) >> 3, 8uLL);
      *(_OWORD *)v58 = 0LL;
      v59 = 0LL;
    }
    v48 = v57;
    if ( v57 )
    {
      CoTaskMemFree(*((LPVOID *)v57 + 3));
      *((_QWORD *)v48 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v48 + 2));
      *((_QWORD *)v48 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v48);
      *(_QWORD *)v48 = 0LL;
      operator delete(v48, (const struct std::nothrow_t *)0x68);
    }
    goto LABEL_127;
  }
  if ( !a9 )
    goto LABEL_134;
  SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                             v18,
                             v54,
                             (struct SaDeviceParams *)a3,
                             v55,
                             a5,
                             v51,
                             a7,
                             a10,
                             a13);
LABEL_10:
  if ( SaDeviceForPackagedApp < 0 )
LABEL_134:
    AudSrvTraceLoggingErrorHelper("CAudioResourceManager::GetSaDeviceForSharedStream", 0x821u, SaDeviceForPackagedApp);
  return (unsigned int)SaDeviceForPackagedApp;
}
