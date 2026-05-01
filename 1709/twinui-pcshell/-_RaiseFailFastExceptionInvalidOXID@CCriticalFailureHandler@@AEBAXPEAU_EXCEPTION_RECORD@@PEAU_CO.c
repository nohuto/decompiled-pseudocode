/*
 * XREFs of ?_RaiseFailFastExceptionInvalidOXID@CCriticalFailureHandler@@AEBAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x1801C489C
 * Callers:
 *     ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x1801C47A4 (-_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCriticalFailureHandler::_RaiseFailFastExceptionInvalidOXID(
        CCriticalFailureHandler *this,
        struct _EXCEPTION_RECORD *a2,
        struct _CONTEXT *a3,
        DWORD a4)
{
  RaiseFailFastException(a2, a3, a4);
}
