/*
 * XREFs of ?SetShellCloak@FrameWrapper@@UEAAJW4_SET_FRAME_CLOAK@@@Z @ 0x1800619B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameWrapper::SetShellCloak(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 24) + 24LL))(
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32),
         a2 == 1);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
