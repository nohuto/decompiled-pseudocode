/*
 * XREFs of ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C014770C
 * Callers:
 *     DxgkPresentRedirected @ 0x1C01B5100 (DxgkPresentRedirected.c)
 * Callees:
 *     <none>
 */

TOKEN_BINDING_GUARD *__fastcall TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
        TOKEN_BINDING_GUARD *this,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  __int64 v3; // rax

  *(_DWORD *)this = -1073741823;
  *((_QWORD *)this + 1) = a2;
  if ( !a2 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 124LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return this;
}
