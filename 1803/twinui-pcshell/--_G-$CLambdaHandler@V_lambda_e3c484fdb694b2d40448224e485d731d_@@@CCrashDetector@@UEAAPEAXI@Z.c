/*
 * XREFs of ??_G?$CLambdaHandler@V_lambda_e3c484fdb694b2d40448224e485d731d_@@@CCrashDetector@@UEAAPEAXI@Z @ 0x1801E3150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler<_lambda_e3c484fdb694b2d40448224e485d731d_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
