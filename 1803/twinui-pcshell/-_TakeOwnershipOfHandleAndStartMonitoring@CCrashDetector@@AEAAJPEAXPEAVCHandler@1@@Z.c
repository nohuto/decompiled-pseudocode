/*
 * XREFs of ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18012BFB4
 * Callers:
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x18012904C (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x1801E32FC (-_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(
        PVOID pv,
        char *hObject,
        struct CCrashDetector::CHandler *a3)
{
  char *v6; // rdi
  struct CCrashDetector::CHandler *v7; // rbx
  signed int Error; // esi
  char *v9; // rcx
  PTP_WAIT ThreadpoolWait; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // rcx

  v6 = hObject;
  v7 = a3;
  Error = a3 == 0LL ? 0x80070057 : 0;
  if ( !a3 )
    goto LABEL_14;
  Error = *((_QWORD *)pv + 2) != 0LL ? 0x8000FFFF : 0;
  if ( !*((_QWORD *)pv + 2) )
  {
    v9 = (char *)*((_QWORD *)pv + 1);
    v6 = 0LL;
    *((_QWORD *)pv + 1) = 0LL;
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v9);
    *((_QWORD *)pv + 1) = hObject;
    Error = hObject == 0LL ? 0x80070057 : 0;
    if ( hObject )
    {
      ThreadpoolWait = CreateThreadpoolWait(CCrashDetector::s_ObjectSignaledHandler, pv, 0LL);
      *((_QWORD *)pv + 2) = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        Error = 0;
LABEL_9:
        v11 = *(void (__fastcall ****)(_QWORD, __int64))pv;
        v7 = 0LL;
        *(_QWORD *)pv = 0LL;
        if ( v11 )
          (**v11)(v11, 1LL);
        *(_QWORD *)pv = a3;
        SetThreadpoolWait(*((PTP_WAIT *)pv + 2), *((HANDLE *)pv + 1), 0LL);
        goto LABEL_12;
      }
      Error = ResultFromKnownLastError();
      if ( Error >= 0 )
        goto LABEL_9;
    }
  }
LABEL_12:
  if ( v7 )
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))v7)(v7, 1LL);
LABEL_14:
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)Error;
}
