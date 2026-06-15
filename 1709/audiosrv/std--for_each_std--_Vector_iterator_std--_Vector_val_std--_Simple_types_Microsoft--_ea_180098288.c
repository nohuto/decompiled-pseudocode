/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_13b036c3bd03ff0c7e68ca121e297c0f___ @ 0x180098288
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x18009B5B0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_13b036c3bd03ff0c7e68ca121e297c0f___(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *i; // rdi
  int v8; // eax
  __int64 v9; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, __int64))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
           g_DeviceGraphManager,
           *i,
           *a4);
    if ( v8 < 0
      && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x22u,
        (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
        v8);
    }
  }
  v9 = *a4;
  *a4 = 0LL;
  *a1 = v9;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a4);
  return a1;
}
