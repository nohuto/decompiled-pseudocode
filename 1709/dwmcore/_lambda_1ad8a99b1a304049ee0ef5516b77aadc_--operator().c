/*
 * XREFs of _lambda_1ad8a99b1a304049ee0ef5516b77aadc_::operator() @ 0x18000817C
 * Callers:
 *     _lambda_1ad8a99b1a304049ee0ef5516b77aadc_::_lambda_invoker_cdecl_ @ 0x180008160 (_lambda_1ad8a99b1a304049ee0ef5516b77aadc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1800B902C (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

int __fastcall lambda_1ad8a99b1a304049ee0ef5516b77aadc_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  bool v9; // [rsp+30h] [rbp-79h] BYREF
  char v10; // [rsp+31h] [rbp-78h] BYREF
  bool v11; // [rsp+32h] [rbp-77h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  _BOOL8 v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  __int64 v15; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  int *v17; // [rsp+80h] [rbp-29h]
  __int64 v18; // [rsp+88h] [rbp-21h]
  bool *v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  char *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  bool *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]
  char *v27; // [rsp+D0h] [rbp+27h]
  __int64 v28; // [rsp+D8h] [rbp+2Fh]
  void *retaddr; // [rsp+F8h] [rbp+4Fh]

  v13 = 0LL;
  v15 = 0LL;
  HIDWORD(v15) = *(_DWORD *)(a2 + 8);
  v13 = (a5 & 4) != 0;
  *(_DWORD *)((char *)&v13 + 2) = (a5 & 2) != 0;
  v10 = a5 & 1;
  v12 = a3;
  LODWORD(v15) = a3;
  v9 = (a5 & 2) != 0;
  v11 = (a5 & 4) != 0;
  v14 = a4;
  WORD2(v13) = a5 & 1;
  LODWORD(v5) = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(a2 + 16, &v13, 1LL);
  if ( (int)v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  if ( hProvider > 5u && (byte_18026D780 & 1) != 0 )
  {
    v5 = qword_18026D788 & 1;
    if ( v5 == qword_18026D788 )
    {
      v18 = 4LL;
      v17 = &v12;
      v20 = 1LL;
      v19 = &v9;
      v21 = &v10;
      v23 = &v11;
      v25 = &v14;
      v27 = (char *)&v15 + 4;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 8LL;
      v28 = 4LL;
      LODWORD(v5) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802118F8, v6, v7, 8u, &pData);
    }
  }
  return v5;
}
