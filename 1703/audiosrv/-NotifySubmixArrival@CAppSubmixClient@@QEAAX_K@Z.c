/*
 * XREFs of ?NotifySubmixArrival@CAppSubmixClient@@QEAAX_K@Z @ 0x1800AF6F0
 * Callers:
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_847b9aa654f320ccd951dc5ecb721dd8___ @ 0x1800AEBA0 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CA.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAppSubmixClient::NotifySubmixArrival(CAppSubmixClient *this, __int64 a2)
{
  DWORD CurrentProcessId; // eax
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // r8
  int MediaEvent; // eax
  int v9[10]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  memset(v9, 0, sizeof(v9));
  v9[0] = 40;
  v9[1] = 0x40000;
  CurrentProcessId = GetCurrentProcessId();
  v5 = *(_QWORD *)this;
  v9[6] = 0;
  *(_QWORD *)&v9[2] = CurrentProcessId;
  *(_QWORD *)&v9[8] = a2;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  MediaEvent = GenerateMediaEvent(v9, v6, v7);
  if ( MediaEvent < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)MediaEvent);
}
