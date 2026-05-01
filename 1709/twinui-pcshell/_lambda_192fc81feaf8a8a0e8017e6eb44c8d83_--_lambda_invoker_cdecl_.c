/*
 * XREFs of _lambda_192fc81feaf8a8a0e8017e6eb44c8d83_::_lambda_invoker_cdecl_ @ 0x1801D32D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_192fc81feaf8a8a0e8017e6eb44c8d83_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h]

  v4 = Context[20];
  v9 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD *, PTP_TIMER))(*(_QWORD *)v4 + 8LL))(v4, Context, Timer);
  DisassociateCurrentThreadFromCallback(Instance);
  v5 = 0LL;
  v8 = 0LL;
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
           &v8);
    v5 = v8;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 >= 0 )
  {
    if ( !v5 )
      goto LABEL_11;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x432,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6);
  }
  v5 = v8;
LABEL_11:
  if ( v5 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
