/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x18012929C
 * Callers:
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x180129520 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x1801E2D94 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 *     _lambda_5eeb3274d8dd6409222f94091fb661d1_::operator() @ 0x1801E2E2C (_lambda_5eeb3274d8dd6409222f94091fb661d1_--operator().c)
 *     _lambda_4f3507863b21d28a47ffae36e7c55767_::operator() @ 0x1801EE054 (_lambda_4f3507863b21d28a47ffae36e7c55767_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18012B450 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 */

void __fastcall CCrashDetector::~CCrashDetector(CCrashDetector *this)
{
  char *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  if ( *((_QWORD *)this + 2) )
    CCrashDetector::StopMonitoring(this);
  v2 = (char *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = *(void (__fastcall ****)(_QWORD, __int64))this;
  *(_QWORD *)this = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
}
