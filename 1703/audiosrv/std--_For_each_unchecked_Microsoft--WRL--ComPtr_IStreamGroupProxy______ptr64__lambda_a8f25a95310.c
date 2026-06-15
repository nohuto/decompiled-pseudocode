/*
 * XREFs of std::_For_each_unchecked_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64__lambda_a8f25a95310c8cd7d1346145f2777f26___ @ 0x1800A9A74
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a8f25a95310c8cd7d1346145f2777f26___ @ 0x1800A9D10 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9D10.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_For_each_unchecked_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64__lambda_a8f25a95310c8cd7d1346145f2777f26___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // rbx
  int v6; // eax

  if ( a1 != a2 )
  {
    v5 = a1;
    do
    {
      v6 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 40LL))(
             g_DeviceGraphManager,
             *v5,
             *a3,
             0LL,
             0LL);
      if ( v6 < 0
        && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x28u,
          (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
          v6);
      }
      ++v5;
    }
    while ( v5 != a2 );
  }
}
