/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x18009BF00
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x18009AC78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180007DF4 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1122b30b9c622c6c9bea198871386fcb___ @ 0x18009820C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18009820C.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_2daa827c432690072ec36c625045a2d7___ @ 0x180098354 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180098354.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4a3d14e3b3460a753ec172bfbeb4fb88___ @ 0x180098428 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180098428.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B6878 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        __int64 a6,
        void *a7)
{
  __int64 *v10; // r14
  int v11; // r13d
  int v12; // edi
  CAudioDGProcess *v13; // rcx
  __int64 *v14; // rsi
  __int64 *v15; // rbx
  LPVOID *v16; // rbx
  int v17; // eax
  int v18; // esi
  void *v19; // rbx
  struct SaDeviceParams *v21; // [rsp+58h] [rbp-41h] BYREF
  struct _GUID v22; // [rsp+68h] [rbp-31h] BYREF
  struct _GUID v23; // [rsp+78h] [rbp-21h] BYREF
  __int64 v24; // [rsp+88h] [rbp-11h]
  void *v25[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v28; // [rsp+F8h] [rbp+5Fh] BYREF

  v27 = a1;
  v24 = -2LL;
  v10 = (__int64 *)a7;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a7 + 184LL))(*(_QWORD *)a7);
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a3 + 88LL))(a3, *v10, v25);
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x24u,
      (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
      ((char *)v25[1] - (char *)v25[0]) >> 3);
    v13 = WPP_GLOBAL_Control;
  }
  v14 = (__int64 *)v25[1];
  v15 = (__int64 *)v25[0];
  if ( ((char *)v25[1] - (char *)v25[0]) >> 3 )
  {
    a7 = 0LL;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*v10 + 104LL))(*v10, &a7);
      v13 = WPP_GLOBAL_Control;
    }
    v16 = 0LL;
    v21 = 0LL;
    if ( v12 >= 0 )
    {
      v23 = (struct _GUID)*((_OWORD *)a7 + 4);
      v22 = (struct _GUID)*((_OWORD *)a7 + 3);
      v12 = DeriveSaDeviceParametersForStream(
              a2,
              AUDCLNT_SHAREMODE_SHARED,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a7 + 2),
              0,
              &v22,
              &v23,
              a4,
              Src,
              a6,
              &v21);
      if ( v12 >= 0 )
      {
        v28 = *v10;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v28);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_2daa827c432690072ec36c625045a2d7___(
          (__int64 *)&v22,
          (_QWORD *)v25[0],
          (_QWORD *)v25[1],
          &v28);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v22);
      }
      v16 = (LPVOID *)v21;
      v13 = WPP_GLOBAL_Control;
    }
    if ( v13 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v13 + 7) & 0x100) != 0
      && *((_BYTE *)v13 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v13 + 2), 0x26u, (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids);
      v13 = WPP_GLOBAL_Control;
    }
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v10);
      v13 = WPP_GLOBAL_Control;
    }
    v27 = 0LL;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v27);
      v12 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, _QWORD, int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              v16,
              2LL,
              0,
              0LL,
              v11,
              &v27);
      v13 = WPP_GLOBAL_Control;
    }
    if ( v13 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v13 + 7) & 0x100) != 0
      && *((_BYTE *)v13 + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)v13 + 2), 0x27u, (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids, v12);
    }
    if ( v12 < 0 )
    {
      v28 = 0LL;
      v17 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, void *, __int64, _DWORD, _QWORD, int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              a7,
              2LL,
              0,
              0LL,
              v11,
              &v28);
      v18 = v17;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Au,
          (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
          v17);
      }
      if ( v18 >= 0 )
      {
        *(_QWORD *)&v22.Data1 = v28;
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1122b30b9c622c6c9bea198871386fcb___(
          &v23,
          (_QWORD *)v25[0],
          (_QWORD *)v25[1],
          &v22);
        if ( *(_QWORD *)&v23.Data1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v23.Data1 + 16LL))(*(_QWORD *)&v23.Data1);
      }
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    else
    {
      v28 = v27;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v28);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4a3d14e3b3460a753ec172bfbeb4fb88___(
        (__int64 *)&v22,
        (__int64)v25[0],
        (__int64)v25[1],
        &v28);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v22);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids);
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v27);
    if ( v16 )
    {
      CoTaskMemFree(v16[3]);
      v16[3] = 0LL;
      CoTaskMemFree(v16[2]);
      v16[2] = 0LL;
      CoTaskMemFree(*v16);
      *v16 = 0LL;
      operator delete(v16, (const struct std::nothrow_t *)0x68);
    }
    v19 = a7;
    if ( a7 )
    {
      CoTaskMemFree(*((LPVOID *)a7 + 3));
      *((_QWORD *)v19 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v19 + 2));
      *((_QWORD *)v19 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v19);
      *(_QWORD *)v19 = 0LL;
      operator delete(v19, (const struct std::nothrow_t *)0x68);
    }
    v15 = (__int64 *)v25[0];
    v14 = (__int64 *)v25[1];
  }
  if ( v15 )
  {
    if ( v15 != v14 )
    {
      do
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v15++);
      while ( v15 != v14 );
      v15 = (__int64 *)v25[0];
    }
    std::_Deallocate(v15, (v26 - (__int64)v15) >> 3, 8uLL);
  }
  return (unsigned int)v12;
}
