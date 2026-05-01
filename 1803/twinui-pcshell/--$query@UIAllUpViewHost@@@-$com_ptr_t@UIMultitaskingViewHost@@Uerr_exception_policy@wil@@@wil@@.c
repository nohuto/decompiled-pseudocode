/*
 * XREFs of ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A055C
 * Callers:
 *     _lambda_49f034628129c0f6bb6239b08c86aef5_::operator() @ 0x18021B9B0 (_lambda_49f034628129c0f6bb6239b08c86aef5_--operator().c)
 *     _lambda_8fc5e3e8e4215e3f9514c32427d8c9ae_::operator() @ 0x18021BA80 (_lambda_8fc5e3e8e4215e3f9514c32427d8c9ae_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3,
      v5);
    __debugbreak();
  }
  return a2;
}
