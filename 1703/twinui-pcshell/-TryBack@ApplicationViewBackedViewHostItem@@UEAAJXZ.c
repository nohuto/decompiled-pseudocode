/*
 * XREFs of ?TryBack@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E61A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a___ @ 0x1800E71E4 (CreateAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::TryBack(ApplicationViewBackedViewHostItem *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CreateAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_(&v8);
  v2 = *((_QWORD *)this + 9);
  v3 = v8;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL))(v2, v8);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v5;
}
