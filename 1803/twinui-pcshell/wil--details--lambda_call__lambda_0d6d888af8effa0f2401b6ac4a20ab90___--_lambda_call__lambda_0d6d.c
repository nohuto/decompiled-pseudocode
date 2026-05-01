/*
 * XREFs of wil::details::lambda_call__lambda_0d6d888af8effa0f2401b6ac4a20ab90___::_lambda_call__lambda_0d6d888af8effa0f2401b6ac4a20ab90___ @ 0x18013A414
 * Callers:
 *     _CApplicationViewManager::SwitchTo_::_1_::dtor$0 @ 0x18013CEA5 (_CApplicationViewManager--SwitchTo_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_0d6d888af8effa0f2401b6ac4a20ab90___::_lambda_call__lambda_0d6d888af8effa0f2401b6ac4a20ab90___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 56LL))(**(_QWORD **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        669LL,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
