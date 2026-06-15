/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001FE74
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18001A970 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___ @ 0x1800CED7C (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_082fb7ed12f61d6b70e6ba97c4d0ab70___ @ 0x1800CEE10 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800CEE10.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_6a49f16265aa2f17898540a2527d76c3___ @ 0x1800CF0C4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800CF0C4.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_886a1facb468f25c3660293dbd414c8a___ @ 0x1800CF164 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800CF164.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D29D0 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800D3888 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F00EC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        bool a7,
        bool a8,
        struct CAudioSessionManager *a9,
        bool a10,
        bool a11,
        struct ISaDeviceProxy **a12)
{
  unsigned int v12; // ebx
  CEndpointCharacteristics *v14; // rdi
  struct SaDeviceResourceParams *v15; // r12
  struct ISaDeviceProxy **v16; // rsi
  int v17; // eax
  int v18; // r8d
  __int64 (__fastcall *v19)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **); // rax
  unsigned int SaDevice; // eax
  signed int SaDeviceForPackagedApp; // ebx
  CAudioResourceManager *v22; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  int EndpointId; // eax
  int v27; // edi
  int v28; // eax
  int v29; // eax
  __int64 *v30; // rbx
  __int64 *v31; // rsi
  __int64 *v32; // rsi
  bool v33; // r12
  __int64 *v34; // rdi
  bool v35; // zf
  __int64 v36; // rdx
  char v37; // r12
  int v38; // eax
  int v39; // eax
  _QWORD *i; // rbx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  unsigned __int16 *v44; // rsi
  __int64 v45; // rdi
  const void *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  char v50; // si
  char v51; // di
  _QWORD *v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // eax
  unsigned int v58; // edx
  int v59; // eax
  unsigned __int64 v60; // r9
  __int64 v61; // rdx
  struct ISaDeviceProxy **v62; // rbx
  struct CEndpointCharacteristics *v63; // rsi
  unsigned int v64; // eax
  unsigned int v65; // edx
  __int64 *v66; // rbx
  __int64 *v67; // rsi
  int v68; // ebx
  int v69; // ebx
  __int64 *v70; // rbx
  __int64 *v71; // rdi
  __int64 *v72; // rbx
  __int64 *v73; // rdi
  unsigned __int16 *v74; // rcx
  __int64 v75; // rdx
  __int64 *v76; // rbx
  __int64 *v77; // rsi
  unsigned __int16 *v78; // rcx
  enum _AUDCLNT_SHAREMODE v79; // [rsp+28h] [rbp-B9h]
  unsigned __int16 *pv; // [rsp+48h] [rbp-99h] BYREF
  _QWORD pv_8[3]; // [rsp+50h] [rbp-91h] BYREF
  __int64 v82; // [rsp+68h] [rbp-79h] BYREF
  __int64 v83; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v84; // [rsp+78h] [rbp-69h]
  SaDeviceParams *v85; // [rsp+80h] [rbp-61h] BYREF
  __int64 v86; // [rsp+88h] [rbp-59h] BYREF
  struct CEndpointCharacteristics *v87; // [rsp+90h] [rbp-51h]
  void *v88[2]; // [rsp+98h] [rbp-49h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-39h]
  struct ISaDeviceProxy **v90; // [rsp+B0h] [rbp-31h]
  _QWORD v91[2]; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v92; // [rsp+C8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+3Fh]

  v91[1] = -2LL;
  v12 = a4;
  v84 = a4;
  v14 = a2;
  v87 = a2;
  v15 = a6;
  v91[0] = a6;
  v16 = a12;
  v90 = a12;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids, *(_QWORD *)a3);
  }
  v92 = *((_OWORD *)a3 + 3);
  v17 = 0;
  v18 = *((_DWORD *)v14 + 4 * *((int *)a3 + 2) + 392);
  if ( v18 > 0 )
  {
    v24 = *((_QWORD *)v14 + 2 * *((int *)a3 + 2) + 195);
    while ( 1 )
    {
      v25 = *(_QWORD *)(v24 + 16LL * v17) - v92;
      if ( !v25 )
        v25 = *(_QWORD *)(v24 + 16LL * v17 + 8) - *((_QWORD *)&v92 + 1);
      if ( !v25 )
        break;
      if ( ++v17 >= v18 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v17 = -1;
  }
  if ( v17 == -1 )
    goto LABEL_6;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  EndpointId = CEndpointCharacteristics::GetEndpointId(v14, &pv);
  v27 = EndpointId;
  if ( EndpointId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x736,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointId,
      v79);
LABEL_35:
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v27;
  }
  v82 = 0LL;
  v28 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                      + 24LL))(
          g_DeviceGraphStore,
          pv,
          &v82);
  v27 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x739,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v28,
      v79);
LABEL_33:
    if ( v82 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
    goto LABEL_35;
  }
  memset(pv_8, 0, sizeof(pv_8));
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v82 + 80LL))(v82, pv_8);
  v27 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v29,
      v79);
    v30 = (__int64 *)pv_8[0];
    if ( pv_8[0] )
    {
      v31 = (__int64 *)pv_8[1];
      if ( pv_8[0] != pv_8[1] )
      {
        do
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30++);
        while ( v30 != v31 );
        v30 = (__int64 *)pv_8[0];
      }
      std::_Deallocate(v30, (__int64)(pv_8[2] - (_QWORD)v30) >> 3, 8uLL);
      memset(pv_8, 0, sizeof(pv_8));
    }
    goto LABEL_33;
  }
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___(
    &v83,
    pv_8[0],
    pv_8[1],
    a3);
  v32 = (__int64 *)pv_8[1];
  v33 = v83 != pv_8[1];
  SaDeviceForPackagedApp = v83 != pv_8[1] ? 0x887C0043 : 0;
  v34 = (__int64 *)pv_8[0];
  if ( pv_8[0] )
  {
    if ( pv_8[0] != pv_8[1] )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v34++);
      while ( v34 != v32 );
      v34 = (__int64 *)pv_8[0];
    }
    std::_Deallocate(v34, (__int64)(pv_8[2] - (_QWORD)v34) >> 3, 8uLL);
    memset(pv_8, 0, sizeof(pv_8));
  }
  if ( v82 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
  v22 = (CAudioResourceManager *)pv;
  if ( pv )
    CoTaskMemFree(pv);
  v14 = v87;
  v16 = v90;
  v35 = !v33;
  v15 = (struct SaDeviceResourceParams *)v91[0];
  if ( !v35 )
    goto LABEL_10;
  v12 = v84;
LABEL_6:
  v19 = *(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, unsigned int, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL);
  if ( v19 == CDeviceGraphManager::GetSaDevice )
  {
    SaDevice = CDeviceGraphManager::GetSaDevice(g_DeviceGraphManager, v14, a3, v12, a5, v15, v16);
  }
  else
  {
    v79 = a5;
    SaDevice = ((__int64 (__fastcall *)(CDeviceGraphManager *, CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD))v19)(
                 g_DeviceGraphManager,
                 v14,
                 a3,
                 v12);
  }
  SaDeviceForPackagedApp = SaDevice;
  v22 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids, SaDevice);
  }
LABEL_10:
  if ( SaDeviceForPackagedApp == -2005139364 )
  {
    if ( a8 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v22,
                                 v14,
                                 a3,
                                 v84,
                                 a5,
                                 v15,
                                 a9,
                                 v16);
      if ( SaDeviceForPackagedApp >= 0 )
        return 0LL;
      v36 = 1881LL;
      goto LABEL_56;
    }
LABEL_55:
    v36 = 2120LL;
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)SaDeviceForPackagedApp,
      v79);
    return (unsigned int)SaDeviceForPackagedApp;
  }
  if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
  {
    if ( SaDeviceForPackagedApp >= 0 )
      return 0LL;
    goto LABEL_55;
  }
  v37 = 0;
  pv = 0LL;
  v38 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, _QWORD, unsigned __int16 **))(*(_QWORD *)g_DeviceGraphStore
                                                                                    + 24LL))(
          g_DeviceGraphStore,
          *(_QWORD *)a3,
          &pv);
  v27 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x767,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v38,
      v79);
LABEL_182:
    v78 = pv;
    if ( pv )
    {
      pv = 0LL;
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v78 + 16LL))(v78);
    }
    return (unsigned int)v27;
  }
  *(_OWORD *)v88 = 0LL;
  v89 = 0LL;
  v39 = (*(__int64 (__fastcall **)(unsigned __int16 *, void **))(*(_QWORD *)pv + 80LL))(pv, v88);
  v27 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v39,
      v79);
LABEL_177:
    v76 = (__int64 *)v88[0];
    if ( v88[0] )
    {
      v77 = (__int64 *)v88[1];
      if ( v88[0] != v88[1] )
      {
        do
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v76++);
        while ( v76 != v77 );
        v76 = (__int64 *)v88[0];
      }
      std::_Deallocate(v76, (v89 - (__int64)v76) >> 3, 8uLL);
      *(_OWORD *)v88 = 0LL;
      v89 = 0LL;
    }
    goto LABEL_182;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
      ((char *)v88[1] - (char *)v88[0]) >> 3);
  }
  v86 = 0LL;
  for ( i = v88[0]; ; ++i )
  {
    v41 = v88[1];
    if ( i == v88[1] )
      break;
    v42 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*i + 40LL))(*i, &v92);
    v43 = *v42 - *((_QWORD *)a3 + 6);
    if ( *v42 == *((_QWORD *)a3 + 6) )
      v43 = v42[1] - *((_QWORD *)a3 + 7);
    if ( !v43
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *((_DWORD *)a3 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
    {
      if ( a11 )
      {
        v44 = (unsigned __int16 *)*((_QWORD *)a3 + 2);
        v45 = v44[8];
        v46 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
        if ( memcmp_0(v46, v44, v45 + 18) )
        {
LABEL_76:
          v16 = v90;
          continue;
        }
      }
      if ( a10 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a3 + 4) )
          goto LABEL_76;
      }
      else if ( v37 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i) )
      {
        v37 = 1;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v47 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids, v47);
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v86, i);
      v48 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *((_QWORD *)a3 + 4));
      v49 = v86;
      if ( v86 && v48 && v37 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v86);
        v49 = v86;
      }
      v86 = 0LL;
      v16 = v90;
      *v90 = (struct ISaDeviceProxy *)v49;
    }
  }
  if ( *v16 )
    goto LABEL_161;
  v82 = 0LL;
  v50 = 0;
  v51 = 0;
  v52 = v88[0];
  while ( 2 )
  {
    if ( v52 == v41 )
      goto LABEL_168;
    v53 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v52 + 40LL))(*v52, &v92);
    v54 = *v53 - *((_QWORD *)a3 + 6);
    if ( *v53 == *((_QWORD *)a3 + 6) )
      v54 = v53[1] - *((_QWORD *)a3 + 7);
    if ( v54
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 80LL))(*v52) != *((_DWORD *)a3 + 2)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 88LL))(*v52) )
    {
LABEL_102:
      ++v52;
      v41 = v88[1];
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 152LL))(*v52) )
  {
    v51 = 1;
    goto LABEL_102;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 120LL))(*v52) )
  {
    v50 = 1;
    goto LABEL_102;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v55 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 32LL))(*v52);
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids, v55);
  }
  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v82, v52);
  v56 = v82;
  if ( !v82 )
  {
LABEL_168:
    if ( a11 || a10 )
    {
      if ( v50 )
      {
        v27 = -2004287448;
        v75 = 2024LL;
LABEL_175:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v75,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v27,
          v79);
        goto LABEL_176;
      }
      if ( v51 )
      {
        v27 = -2004287447;
        v75 = 2025LL;
        goto LABEL_175;
      }
    }
    v27 = -2005139360;
    v75 = 2027LL;
    goto LABEL_175;
  }
  v85 = 0LL;
  v57 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v82 + 104LL))(v82, &v85);
  v27 = v57;
  if ( v57 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F1,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v57,
      v79);
    goto LABEL_132;
  }
  memset(pv_8, 0, sizeof(pv_8));
  v59 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD *))(*(_QWORD *)pv + 104LL))(pv, v56, pv_8);
  v27 = v59;
  if ( v59 < 0 )
  {
    v60 = (unsigned int)v59;
    v61 = 2037LL;
    goto LABEL_127;
  }
  v83 = v56;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v83);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_886a1facb468f25c3660293dbd414c8a___(
    &v92,
    pv_8[0],
    pv_8[1],
    &v83);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v92);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids);
  }
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(v88);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v82);
  v62 = v90;
  v79 = a5;
  v63 = v87;
  v64 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
          g_DeviceGraphManager,
          v87,
          a3,
          v84);
  v27 = v64;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids, v64);
  }
  if ( v27 < 0 )
  {
    v83 = 0LL;
    v79 = AUDCLNT_SHAREMODE_SHARED;
    v68 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
            g_DeviceGraphManager,
            v63,
            v85,
            2LL);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        24LL,
        &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
        (unsigned int)v68);
    }
    if ( v68 >= 0 )
    {
      v87 = 0LL;
      v79 = AUDCLNT_SHAREMODE_SHARED;
      v69 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              v63,
              v85,
              2LL);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
          (unsigned int)v69);
      }
      if ( v69 >= 0 )
      {
        v91[0] = v87;
        if ( v87 )
          (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v87 + 8LL))(v87);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_082fb7ed12f61d6b70e6ba97c4d0ab70___(
          &v92,
          pv_8[0],
          pv_8[1],
          v91);
        if ( (_QWORD)v92 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v92 + 16LL))(v92);
      }
      if ( v87 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v87 + 16LL))(v87);
    }
    if ( v83 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
  }
  else
  {
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_6a49f16265aa2f17898540a2527d76c3___(
      &v92,
      pv_8[0],
      pv_8[1],
      v62);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids);
    }
  }
  if ( v27 < 0 )
  {
    v60 = (unsigned int)v27;
    v61 = 2115LL;
LABEL_127:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v61,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v60,
      v79);
    v66 = (__int64 *)pv_8[0];
    if ( pv_8[0] )
    {
      v67 = (__int64 *)pv_8[1];
      if ( pv_8[0] != pv_8[1] )
      {
        do
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v66++);
        while ( v66 != v67 );
        v66 = (__int64 *)pv_8[0];
      }
      std::_Deallocate(v66, (__int64)(pv_8[2] - (_QWORD)v66) >> 3, 8uLL);
      memset(pv_8, 0, sizeof(pv_8));
    }
LABEL_132:
    if ( v85 )
      SaDeviceParams::`scalar deleting destructor'(v85, v58);
    v85 = 0LL;
LABEL_176:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v82);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v86);
    goto LABEL_177;
  }
  v70 = (__int64 *)pv_8[0];
  if ( pv_8[0] )
  {
    v71 = (__int64 *)pv_8[1];
    if ( pv_8[0] != pv_8[1] )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v70++);
      while ( v70 != v71 );
      v70 = (__int64 *)pv_8[0];
    }
    std::_Deallocate(v70, (__int64)(pv_8[2] - (_QWORD)v70) >> 3, 8uLL);
    memset(pv_8, 0, sizeof(pv_8));
  }
  if ( v85 )
    SaDeviceParams::`scalar deleting destructor'(v85, v65);
  v85 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v82);
LABEL_161:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v86);
  v72 = (__int64 *)v88[0];
  if ( v88[0] )
  {
    v73 = (__int64 *)v88[1];
    if ( v88[0] != v88[1] )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v72++);
      while ( v72 != v73 );
      v72 = (__int64 *)v88[0];
    }
    std::_Deallocate(v72, (v89 - (__int64)v72) >> 3, 8uLL);
    *(_OWORD *)v88 = 0LL;
    v89 = 0LL;
  }
  v74 = pv;
  if ( pv )
  {
    pv = 0LL;
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v74 + 16LL))(v74);
  }
  return 0LL;
}
