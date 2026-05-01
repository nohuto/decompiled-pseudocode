/*
 * XREFs of CCrashDetector::StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___ @ 0x1801E2C7C
 * Callers:
 *     _lambda_5eeb3274d8dd6409222f94091fb661d1_::operator() @ 0x1801E2E2C (_lambda_5eeb3274d8dd6409222f94091fb661d1_--operator().c)
 *     _lambda_4f3507863b21d28a47ffae36e7c55767_::operator() @ 0x1801EE054 (_lambda_4f3507863b21d28a47ffae36e7c55767_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CCrashDetector::StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___(
        PVOID pv,
        HWND hWnd,
        _QWORD *a3)
{
  struct CCrashDetector::CHandler *v6; // rax
  struct CCrashDetector::CHandler *v7; // r8

  v6 = (struct CCrashDetector::CHandler *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = off_180321188;
    *((_QWORD *)v6 + 1) = *a3;
  }
  else
  {
    v7 = 0LL;
  }
  return CCrashDetector::_StartMonitoringThreadOfWindow(pv, hWnd, v7);
}
