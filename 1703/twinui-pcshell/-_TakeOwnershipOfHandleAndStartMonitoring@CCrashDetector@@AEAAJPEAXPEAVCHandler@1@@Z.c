/*
 * XREFs of ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18004EF34
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18004D1D0 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___ @ 0x1801119BC (CCrashDetector--StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(
        PVOID pv,
        char *hObject,
        struct CCrashDetector::CHandler *a3)
{
  char *v6; // rdi
  struct CCrashDetector::CHandler *v7; // rbx
  signed int v8; // esi
  char *v9; // rcx
  PTP_WAIT ThreadpoolWait; // rax
  signed int LastError; // eax
  void (__fastcall ***v12)(_QWORD, __int64); // rcx

  v6 = hObject;
  v7 = a3;
  v8 = a3 == 0LL ? 0x80070057 : 0;
  if ( a3 )
  {
    v8 = *((_QWORD *)pv + 2) != 0LL ? 0x8000FFFF : 0;
    if ( !*((_QWORD *)pv + 2) )
    {
      v6 = 0LL;
      v9 = (char *)*((_QWORD *)pv + 1);
      *((_QWORD *)pv + 1) = 0LL;
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v9);
      *((_QWORD *)pv + 1) = hObject;
      v8 = hObject == 0LL ? 0x80070057 : 0;
      if ( hObject )
      {
        ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)CCrashDetector::s_ObjectSignaledHandler, pv, 0LL);
        *((_QWORD *)pv + 2) = ThreadpoolWait;
        if ( ThreadpoolWait )
        {
          v8 = 0;
          v7 = 0LL;
          v12 = *(void (__fastcall ****)(_QWORD, __int64))pv;
          *(_QWORD *)pv = 0LL;
          if ( v12 )
            (**v12)(v12, 1LL);
          *(_QWORD *)pv = a3;
          SetThreadpoolWait(*((PTP_WAIT *)pv + 2), *((HANDLE *)pv + 1), 0LL);
        }
        else
        {
          LastError = GetLastError();
          v8 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v8 = LastError;
          if ( v8 >= 0 )
            v8 = -2147467259;
        }
      }
    }
  }
  if ( v7 )
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))v7)(v7, 1LL);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)v8;
}
