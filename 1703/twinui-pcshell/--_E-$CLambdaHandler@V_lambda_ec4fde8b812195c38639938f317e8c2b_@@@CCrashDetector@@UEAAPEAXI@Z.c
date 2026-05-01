/*
 * XREFs of ??_E?$CLambdaHandler@V_lambda_ec4fde8b812195c38639938f317e8c2b_@@@CCrashDetector@@UEAAPEAXI@Z @ 0x18004E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler<_lambda_ec4fde8b812195c38639938f317e8c2b_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
