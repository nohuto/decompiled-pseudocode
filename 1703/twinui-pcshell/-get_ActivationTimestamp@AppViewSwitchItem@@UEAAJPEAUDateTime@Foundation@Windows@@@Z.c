/*
 * XREFs of ?get_ActivationTimestamp@AppViewSwitchItem@@UEAAJPEAUDateTime@Foundation@Windows@@@Z @ 0x180163EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewSwitchItem::get_ActivationTimestamp(
        AppViewSwitchItem *this,
        struct Windows::Foundation::DateTime *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 23) + 160LL))(*((_QWORD *)this + 23), &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_QWORD *)a2 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
