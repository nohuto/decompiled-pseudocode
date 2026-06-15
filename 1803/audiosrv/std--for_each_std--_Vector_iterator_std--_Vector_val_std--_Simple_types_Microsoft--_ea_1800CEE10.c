/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_082fb7ed12f61d6b70e6ba97c4d0ab70___ @ 0x1800CEE10
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001FE74 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_082fb7ed12f61d6b70e6ba97c4d0ab70___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *i; // rdi
  int v8; // eax
  __int64 v9; // rcx

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                          + 40LL))(
           g_DeviceGraphManager,
           *i,
           *a4,
           0LL,
           0LL);
    if ( v8 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
        v8);
    }
  }
  v9 = *a4;
  *a1 = *a4;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return a1;
}
