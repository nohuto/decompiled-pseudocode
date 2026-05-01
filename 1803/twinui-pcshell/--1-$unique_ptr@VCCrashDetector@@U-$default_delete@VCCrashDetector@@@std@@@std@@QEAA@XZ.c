/*
 * XREFs of ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x1801E2D94
 * Callers:
 *     __lambda_5eeb3274d8dd6409222f94091fb661d1_::operator()_::_1_::dtor$4 @ 0x1801E3127 (__lambda_5eeb3274d8dd6409222f94091fb661d1_--operator()_--_1_--dtor$4.c)
 *     __lambda_4f3507863b21d28a47ffae36e7c55767_::operator()_::_1_::dtor$4 @ 0x1801EE361 (__lambda_4f3507863b21d28a47ffae36e7c55767_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18012929C (--1CCrashDetector@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CCrashDetector>::~unique_ptr<CCrashDetector>(CCrashDetector **a1)
{
  CCrashDetector *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CCrashDetector::~CCrashDetector(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
