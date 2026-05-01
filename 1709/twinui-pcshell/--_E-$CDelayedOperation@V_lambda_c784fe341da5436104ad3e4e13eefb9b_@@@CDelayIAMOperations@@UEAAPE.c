/*
 * XREFs of ??_E?$CDelayedOperation@V_lambda_c784fe341da5436104ad3e4e13eefb9b_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x18001AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation<_lambda_c784fe341da5436104ad3e4e13eefb9b_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
