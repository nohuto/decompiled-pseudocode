/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x18004FA70
 * Callers:
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x18004B360 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x1801113D0 (_lambda_e749f471b43b5c52416cbe595e41d9dc_--operator().c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x180111988 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCrashDetector::~CCrashDetector(CCrashDetector *this)
{
  struct _TP_WAIT *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    SetThreadpoolWait(v2, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 2), 0);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    v3 = (char *)*((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = 0LL;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
  }
  v4 = (char *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = *(void (__fastcall ****)(_QWORD, __int64))this;
  *(_QWORD *)this = 0LL;
  if ( v5 )
    (**v5)(v5, 1LL);
}
