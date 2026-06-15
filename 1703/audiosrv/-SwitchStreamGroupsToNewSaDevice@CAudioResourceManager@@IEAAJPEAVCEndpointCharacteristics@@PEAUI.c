/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ACE74
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ABF78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x18002C2A0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180032B08 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_2da75dc14eb1b9d63b359bdaac33727e___ @ 0x1800A9BAC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9BAC.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a453f892a6ad714b2368a7b76f95a55f___ @ 0x1800A9C84 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9C84.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a8f25a95310c8cd7d1346145f2777f26___ @ 0x1800A9D10 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9D10.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6,
        SaDeviceParams *a7)
{
  __int64 *v10; // r14
  int v11; // r13d
  int v12; // edi
  CVolumeStrip *v13; // rcx
  __int64 *v14; // rsi
  __int64 *v15; // rbx
  LPVOID *v16; // rbx
  int v17; // esi
  struct SaDeviceParams *v19; // [rsp+58h] [rbp-41h] BYREF
  struct _GUID v20; // [rsp+68h] [rbp-31h] BYREF
  struct _GUID v21; // [rsp+78h] [rbp-21h] BYREF
  __int64 v22; // [rsp+88h] [rbp-11h]
  void *v23[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v26; // [rsp+F8h] [rbp+5Fh] BYREF

  v25 = a1;
  v22 = -2LL;
  v10 = (__int64 *)a7;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a7 + 184LL))(*(_QWORD *)a7);
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a3 + 80LL))(a3, *v10, v23);
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
      ((char *)v23[1] - (char *)v23[0]) >> 3);
    v13 = WPP_GLOBAL_Control;
  }
  v14 = (__int64 *)v23[1];
  v15 = (__int64 *)v23[0];
  if ( ((char *)v23[1] - (char *)v23[0]) >> 3 )
  {
    a7 = 0LL;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*v10 + 104LL))(*v10, &a7);
      v13 = WPP_GLOBAL_Control;
    }
    v16 = 0LL;
    v19 = 0LL;
    if ( v12 >= 0 )
    {
      v21 = (struct _GUID)*((_OWORD *)a7 + 4);
      v20 = (struct _GUID)*((_OWORD *)a7 + 3);
      v12 = DeriveSaDeviceParametersForStream(
              a2,
              AUDCLNT_SHAREMODE_SHARED,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a7 + 2),
              0,
              &v20,
              &v21,
              a4,
              a5,
              a6,
              &v19);
      if ( v12 >= 0 )
      {
        v26 = *v10;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v26);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_2da75dc14eb1b9d63b359bdaac33727e___(
          (__int64 *)&v20,
          (_QWORD *)v23[0],
          (_QWORD *)v23[1],
          &v26);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
      }
      v13 = WPP_GLOBAL_Control;
      v16 = (LPVOID *)v19;
    }
    if ( v13 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x100) != 0 && *((_BYTE *)v13 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v13 + 2), 0x23u, (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids);
      v13 = WPP_GLOBAL_Control;
    }
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
      v13 = WPP_GLOBAL_Control;
    }
    v25 = 0LL;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
      v12 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, _QWORD, int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              v16,
              2LL,
              0,
              0LL,
              v11,
              &v25);
      v13 = WPP_GLOBAL_Control;
    }
    if ( v13 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x100) != 0 && *((_BYTE *)v13 + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)v13 + 2), 0x24u, (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids, v12);
    if ( v12 < 0 )
    {
      v26 = 0LL;
      v17 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64, _DWORD, _QWORD, int, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
              g_DeviceGraphManager,
              a2,
              a7,
              2LL,
              0,
              0LL,
              v11,
              &v26);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x27u,
          (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
          v17);
      }
      if ( v17 >= 0 )
      {
        *(_QWORD *)&v20.Data1 = v26;
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a8f25a95310c8cd7d1346145f2777f26___(
          &v21,
          (_QWORD *)v23[0],
          (_QWORD *)v23[1],
          &v20);
        if ( *(_QWORD *)&v21.Data1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v21.Data1 + 16LL))(*(_QWORD *)&v21.Data1);
      }
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    else
    {
      v26 = v25;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v26);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a453f892a6ad714b2368a7b76f95a55f___(
        (__int64 *)&v20,
        (__int64)v23[0],
        (__int64)v23[1],
        &v26);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v20);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids);
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
    if ( v16 )
      SaDeviceParams::`scalar deleting destructor'(v16);
    if ( a7 )
      SaDeviceParams::`scalar deleting destructor'((LPVOID *)a7);
    v15 = (__int64 *)v23[0];
    v14 = (__int64 *)v23[1];
  }
  if ( v15 )
  {
    if ( v15 != v14 )
    {
      do
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v15++);
      while ( v15 != v14 );
      v15 = (__int64 *)v23[0];
    }
    std::_Deallocate(v15, (v24 - (__int64)v15) >> 3, 8uLL);
  }
  return (unsigned int)v12;
}
