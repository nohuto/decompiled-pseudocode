/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_a8192ba8e11c189ab16d0f21d8e90bb9__void_ @ 0x180035684
 * Callers:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_a8192ba8e11c189ab16d0f21d8e90bb9__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  a1[7] = 0LL;
  *a1 = off_1800F4320;
  a1[1] = *a2;
  a1[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[7] = a1;
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
