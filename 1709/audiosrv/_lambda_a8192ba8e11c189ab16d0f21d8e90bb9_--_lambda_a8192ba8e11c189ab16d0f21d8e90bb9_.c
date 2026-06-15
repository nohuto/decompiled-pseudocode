/*
 * XREFs of _lambda_a8192ba8e11c189ab16d0f21d8e90bb9_::_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_ @ 0x180035730
 * Callers:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 */

_QWORD *__fastcall lambda_a8192ba8e11c189ab16d0f21d8e90bb9_::_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(a1, v4, v3);
  return a1;
}
