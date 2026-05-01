/*
 * XREFs of ?get_Visibility@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x1801BE3F0
 * Callers:
 *     ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1801BD460 (-TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableSh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_Visibility(ApplicationViewBackedViewHostItem *this, bool *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 88LL))(*((_QWORD *)this + 13), &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v7 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
