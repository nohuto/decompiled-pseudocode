/*
 * XREFs of ??_G?$CDelayedOperation@V_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180105130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation<_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
