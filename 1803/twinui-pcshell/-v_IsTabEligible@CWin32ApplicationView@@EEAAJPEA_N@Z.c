/*
 * XREFs of ?v_IsTabEligible@CWin32ApplicationView@@EEAAJPEA_N@Z @ 0x1801410E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::v_IsTabEligible(CWin32ApplicationView *this, bool *a2)
{
  __int64 v3; // rax
  int UnmetTabRequirements; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26));
  UnmetTabRequirements = DwmGetUnmetTabRequirements(v3, &v8);
  v5 = UnmetTabRequirements;
  if ( UnmetTabRequirements >= 0 )
  {
    *a2 = v8 == 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)UnmetTabRequirements);
    return v5;
  }
}
