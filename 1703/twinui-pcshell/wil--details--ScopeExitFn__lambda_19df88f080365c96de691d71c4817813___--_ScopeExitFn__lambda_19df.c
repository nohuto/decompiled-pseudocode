/*
 * XREFs of wil::details::ScopeExitFn__lambda_19df88f080365c96de691d71c4817813___::_ScopeExitFn__lambda_19df88f080365c96de691d71c4817813___ @ 0x180074690
 * Callers:
 *     _CApplicationViewManager::SwitchTo_::_1_::dtor$0 @ 0x18019AEA0 (_CApplicationViewManager--SwitchTo_--_1_--dtor$0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_19df88f080365c96de691d71c4817813___::_ScopeExitFn__lambda_19df88f080365c96de691d71c4817813___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 32LL))(**(_QWORD **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28B,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
