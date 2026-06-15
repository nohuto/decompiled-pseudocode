/*
 * XREFs of _lambda_a453f892a6ad714b2368a7b76f95a55f_::operator() @ 0x1800AA114
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a453f892a6ad714b2368a7b76f95a55f___ @ 0x1800A9C84 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800A9C84.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a453f892a6ad714b2368a7b76f95a55f_::operator()(_QWORD *a1, _QWORD *a2)
{
  char v4; // al
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 232LL))(*a2);
  result = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                          + 40LL))(
             g_DeviceGraphManager,
             *a2,
             *a1,
             v4 == 0,
             0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             0x25u,
             (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
             result);
  }
  return result;
}
