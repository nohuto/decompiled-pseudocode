/*
 * XREFs of CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___ @ 0x1801119BC
 * Callers:
 *     _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x1801113D0 (_lambda_e749f471b43b5c52416cbe595e41d9dc_--operator().c)
 * Callees:
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18004EF34 (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___(
        _QWORD *pv,
        HWND hWnd,
        _QWORD *a3)
{
  struct CCrashDetector::CHandler *v6; // rax
  struct CCrashDetector::CHandler *v7; // rsi
  struct CCrashDetector::CHandler *v8; // rbx
  signed int started; // edi
  DWORD WindowThreadProcessId; // r14d
  signed int v11; // eax
  char *v12; // rax
  signed int LastError; // eax
  struct CCrashDetector::CHandler *dwProcessId; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h]

  v6 = (struct CCrashDetector::CHandler *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  dwProcessId = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = off_1801B7590;
    *((_QWORD *)v6 + 1) = *a3;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7;
  started = pv[2] != 0LL ? 0x8000FFFF : 0;
  if ( !pv[2] )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
    if ( WindowThreadProcessId )
    {
      v12 = (char *)OpenThread(0x100000u, 0, WindowThreadProcessId);
      if ( v12 )
      {
        v8 = 0LL;
        v16 = 0LL;
        started = CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(pv, v12, v7);
      }
      else
      {
        LastError = GetLastError();
        started = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          started = LastError;
        if ( started >= 0 )
          started = -2147467259;
      }
    }
    else
    {
      v11 = GetLastError();
      started = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        started = v11;
      if ( started >= 0 )
        started = -2147467259;
    }
  }
  if ( v8 )
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))v8)(v8, 1LL);
  return (unsigned int)started;
}
