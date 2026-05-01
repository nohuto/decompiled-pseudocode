/*
 * XREFs of ShellPositionerHelpers::ShellPositionerCallback__lambda_c9be53302e1e2bc6130e2ee5b2941598___::Invoke @ 0x18007E640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::ShellPositionerCallback__lambda_c9be53302e1e2bc6130e2ee5b2941598___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 168LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL));
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         v4,
         a1 + 48,
         *(_QWORD *)(a1 + 64));
  v6 = v5;
  if ( v5 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x197,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
