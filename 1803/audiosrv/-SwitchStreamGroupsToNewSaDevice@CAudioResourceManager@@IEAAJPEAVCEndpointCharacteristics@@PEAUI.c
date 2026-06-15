/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800D2C80
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800D1D08 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_65947a673daa3edcd4b0711e1f634bea___ @ 0x1800CEFF0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800CEFF0.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_bea83dd5586f4fb5a8c555131a3aa48f___ @ 0x1800CF214 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800CF214.c)
 *     _lambda_1b72e5d594e55fed068379ebbc44b0d0_::operator() @ 0x1800CF554 (_lambda_1b72e5d594e55fed068379ebbc44b0d0_--operator().c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  LPVOID *v15; // rbx
  int EndpointId; // eax
  int v17; // eax
  int v18; // eax
  __int64 *v19; // rbx
  __int64 *v20; // rsi
  SaDeviceParams *v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  void *v24[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h]
  struct _GUID v26; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v27; // [rsp+98h] [rbp-70h] BYREF
  SaDeviceParams *v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h] BYREF
  int v30; // [rsp+B8h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-38h]
  __int128 v33; // [rsp+E0h] [rbp-28h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int128 v35; // [rsp+F8h] [rbp-10h]
  __int128 v36; // [rsp+108h] [rbp+0h]
  __int128 v37; // [rsp+118h] [rbp+10h]
  char v38; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  CEndpointCharacteristics *v40; // [rsp+170h] [rbp+68h] BYREF
  LPVOID pv; // [rsp+178h] [rbp+70h] BYREF

  v40 = a2;
  v34 = -2LL;
  v10 = a7;
  LODWORD(a7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 184LL))(*a7);
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a3 + 104LL))(a3, *v10, v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_44;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
      ((char *)v24[1] - (char *)v24[0]) >> 3);
  }
  if ( !(((char *)v24[1] - (char *)v24[0]) >> 3) )
    goto LABEL_43;
  v22 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*v10 + 104LL))(*v10, &v22);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v28 = 0LL;
    v27 = (struct _GUID)*((_OWORD *)v22 + 4);
    v26 = (struct _GUID)*((_OWORD *)v22 + 3);
    v14 = DeriveSaDeviceParametersForStream(
            v40,
            AUDCLNT_SHAREMODE_SHARED,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v22 + 2),
            0,
            &v26,
            &v27,
            a4,
            Src,
            a6,
            &v28);
    v12 = v14;
    v15 = (LPVOID *)v28;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA64,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_27:
      if ( v15 )
        SaDeviceParams::`scalar deleting destructor'(v15);
      goto LABEL_29;
    }
    *(_QWORD *)&v26.Data1 = *v10;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v26);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_65947a673daa3edcd4b0711e1f634bea___(
      (__int64 *)&v27,
      (_QWORD *)v24[0],
      (_QWORD *)v24[1],
      (__int64 *)&v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    EndpointId = CEndpointCharacteristics::GetEndpointId(v40, (unsigned __int16 **)&pv);
    v12 = EndpointId;
    if ( EndpointId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA77,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointId);
LABEL_25:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    *(_QWORD *)&v31 = &a7;
    *((_QWORD *)&v31 + 1) = a1;
    *(_QWORD *)&v32 = &pv;
    *((_QWORD *)&v32 + 1) = &v40;
    *(_QWORD *)&v33 = &v22;
    *((_QWORD *)&v33 + 1) = v24;
    v35 = v31;
    v36 = v32;
    v37 = v33;
    v38 = 1;
    v29 = 0LL;
    v30 = (int)a7;
    v27 = (struct _GUID)*((_OWORD *)v22 + 3);
    v17 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, _QWORD, struct _GUID *, _DWORD, _DWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 56LL))(
            *(_QWORD *)(a1 + 48),
            pv,
            *((unsigned int *)v40 + 37),
            &v27,
            *((_DWORD *)v22 + 2),
            (_DWORD)a7,
            &v29);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_22:
      if ( v29 )
        (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
      *(_QWORD *)&v31 = &a7;
      *((_QWORD *)&v31 + 1) = a1;
      *(_QWORD *)&v32 = &pv;
      *((_QWORD *)&v32 + 1) = &v40;
      *(_QWORD *)&v33 = &v22;
      *((_QWORD *)&v33 + 1) = v24;
      lambda_1b72e5d594e55fed068379ebbc44b0d0_::operator()((int **)&v31);
      goto LABEL_25;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    v18 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, __int64 *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
            g_DeviceGraphManager,
            v40,
            v15,
            2LL,
            0,
            &v29,
            &v23);
    v12 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAAB,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      goto LABEL_22;
    }
    *(_QWORD *)&v26.Data1 = v23;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v26);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_bea83dd5586f4fb5a8c555131a3aa48f___(
      (__int64 *)&v27,
      (__int64)v24[0],
      (__int64)v24[1],
      (__int64 *)&v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids);
    }
    v38 = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    if ( v29 )
      (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v15 )
      SaDeviceParams::`scalar deleting destructor'(v15);
    if ( v22 )
      SaDeviceParams::`scalar deleting destructor'((LPVOID *)v22);
LABEL_43:
    v12 = 0;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA56,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_29:
  if ( v22 )
    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v22);
LABEL_44:
  v19 = (__int64 *)v24[0];
  if ( v24[0] )
  {
    v20 = (__int64 *)v24[1];
    while ( v19 != v20 )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19++);
    std::_Deallocate((_QWORD *)v24[0], (signed __int64)(v25 - (unsigned __int64)v24[0]) >> 3, 8uLL);
  }
  return v12;
}
