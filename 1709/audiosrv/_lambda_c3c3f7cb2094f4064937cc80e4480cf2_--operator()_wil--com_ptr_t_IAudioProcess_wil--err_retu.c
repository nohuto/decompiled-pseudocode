/*
 * XREFs of _lambda_c3c3f7cb2094f4064937cc80e4480cf2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800355C8
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002F440 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

char __fastcall lambda_c3c3f7cb2094f4064937cc80e4480cf2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v4; // eax

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 248LL))(*a2) )
    return 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2);
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, v4);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 32LL))(*a2, *a1);
  return 1;
}
