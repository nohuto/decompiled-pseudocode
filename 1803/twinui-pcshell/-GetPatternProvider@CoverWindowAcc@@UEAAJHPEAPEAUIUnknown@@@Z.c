/*
 * XREFs of ?GetPatternProvider@CoverWindowAcc@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x1802E75A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoverWindowAcc::GetPatternProvider(CoverWindowAcc *this, int a2, struct IUnknown **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 != 10009 || *((_QWORD *)this + 5) )
    return 2147746308LL;
  v3 = (**(__int64 (__fastcall ***)(CoverWindowAcc *, GUID *))this)(this, &GUID_00000000_0000_0000_c000_000000000046);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
