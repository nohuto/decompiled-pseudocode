/*
 * XREFs of ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18001EA70
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___::Run @ 0x18001DAB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___--Run.c)
 *     _lambda_c35d5355421e51b91e1b7dc40faf7951_::operator() @ 0x18001DBC0 (_lambda_c35d5355421e51b91e1b7dc40faf7951_--operator().c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     _lambda_9d6c54c6eac66a68e681dddf193e983c_::operator() @ 0x18009117C (_lambda_9d6c54c6eac66a68e681dddf193e983c_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::GetAt(
        AgileRegistrationList::AgileCallbackArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // r10
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a4 = 0LL;
    v4 = *((_QWORD *)this + 6);
    if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 7) - v4) >> 3) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x8000000BLL,
        -2);
      result = 2147483659LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, void **))(**(_QWORD **)(v4 + 8LL * a2) + 24LL))(
             *(_QWORD *)(v4 + 8LL * a2),
             a3,
             a4);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4A8,
          (unsigned int)"internal\\sdk\\inc\\wil/com.h",
          (const char *)(unsigned int)v5,
          -2);
        JUMPOUT(0x1800C073ELL);
      }
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v6);
  }
  return result;
}
