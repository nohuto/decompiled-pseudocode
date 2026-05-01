/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x180019920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator()(
        __int64 a1)
{
  HWND v1; // rdi
  HWND result; // rax

  v1 = *(HWND *)(a1 + 24);
  result = GetForegroundWindow();
  if ( result == v1 )
    return (HWND)(*(__int64 (__fastcall **)(__int64, __int64, HWND))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 24LL))(
                   *(_QWORD *)(a1 + 16) + 128LL,
                   19LL,
                   v1);
  return result;
}
