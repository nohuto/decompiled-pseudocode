/*
 * XREFs of ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800244C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::GetAt(
        AgileRegistrationList::AgileCallbackArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  const char *v4; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a4 = 0LL;
    if ( a2 < (unsigned __int64)((__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 3) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * a2);
      v7 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v6 + 24LL))(v6, a3, a4);
      if ( v7 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x4CF,
          (unsigned int)"internal\\sdk\\inc\\wil/com.h",
          (const char *)(unsigned int)v7,
          -2);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x8000000BLL);
      result = 2147483659LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v4);
  }
  return result;
}
