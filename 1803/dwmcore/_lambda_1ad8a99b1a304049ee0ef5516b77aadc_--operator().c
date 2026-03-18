/*
 * XREFs of _lambda_1ad8a99b1a304049ee0ef5516b77aadc_::operator() @ 0x18002269C
 * Callers:
 *     _lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_ @ 0x180022680 (_lambda_1ad8a99b1a304049ee0ef5516b77aadc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1800C1BE4 (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

int __fastcall lambda_1ad8a99b1a304049ee0ef5516b77aadc_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rax
  bool v7; // [rsp+30h] [rbp-79h] BYREF
  char v8; // [rsp+31h] [rbp-78h] BYREF
  bool v9; // [rsp+32h] [rbp-77h] BYREF
  int v10; // [rsp+38h] [rbp-71h] BYREF
  _BOOL8 v11; // [rsp+40h] [rbp-69h] BYREF
  __int64 v12; // [rsp+48h] [rbp-61h] BYREF
  __int64 v13; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  int *v15; // [rsp+80h] [rbp-29h]
  __int64 v16; // [rsp+88h] [rbp-21h]
  bool *v17; // [rsp+90h] [rbp-19h]
  __int64 v18; // [rsp+98h] [rbp-11h]
  char *v19; // [rsp+A0h] [rbp-9h]
  __int64 v20; // [rsp+A8h] [rbp-1h]
  bool *v21; // [rsp+B0h] [rbp+7h]
  __int64 v22; // [rsp+B8h] [rbp+Fh]
  __int64 *v23; // [rsp+C0h] [rbp+17h]
  __int64 v24; // [rsp+C8h] [rbp+1Fh]
  char *v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]
  void *retaddr; // [rsp+F8h] [rbp+4Fh]

  v10 = a3;
  v12 = a4;
  v7 = (a5 & 2) != 0;
  v11 = 0LL;
  v13 = 0LL;
  HIDWORD(v13) = *(_DWORD *)(a2 + 8);
  v8 = a5 & 1;
  v9 = (a5 & 4) != 0;
  v11 = v9;
  *(_DWORD *)((char *)&v11 + 2) = v7;
  WORD2(v11) = a5 & 1;
  LODWORD(v13) = a3;
  LODWORD(v5) = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(a2 + 16, &v11, 1LL);
  if ( (int)v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  if ( dword_1802D3FA0 > 5u && (byte_1802D3FB0 & 1) != 0 )
  {
    v5 = qword_1802D3FB8 & 1;
    if ( v5 == qword_1802D3FB8 )
    {
      v16 = 4LL;
      v15 = &v10;
      v18 = 1LL;
      v17 = &v7;
      v19 = &v8;
      v21 = &v9;
      v23 = &v12;
      v25 = (char *)&v13 + 4;
      v20 = 1LL;
      v22 = 1LL;
      v24 = 8LL;
      v26 = 4LL;
      LODWORD(v5) = TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A570D, 0LL, 0LL, 8u, &pData);
    }
  }
  return v5;
}
