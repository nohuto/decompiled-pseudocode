/*
 * XREFs of _lambda_bea83dd5586f4fb5a8c555131a3aa48f_::operator() @ 0x1800CFA44
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_bea83dd5586f4fb5a8c555131a3aa48f___ @ 0x1800CF214 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800CF214.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall lambda_bea83dd5586f4fb5a8c555131a3aa48f_::operator()(_QWORD *a1, _QWORD *a2)
{
  char v4; // al
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 224LL))(*a2);
  result = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                          + 40LL))(
             g_DeviceGraphManager,
             *a2,
             *a1,
             v4 == 0,
             0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             0x28u,
             (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
             result);
  }
  return result;
}
