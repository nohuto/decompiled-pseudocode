/*
 * XREFs of ?IsHostProcessOwnerOfComponent@ViewEventDispatcher@@UEAAJIIPEAE@Z @ 0x1800F5EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::IsHostProcessOwnerOfComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int8 *))(**((_QWORD **)this + 39) + 128LL))(
         *((_QWORD *)this + 39),
         a2,
         a3,
         a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x703,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
