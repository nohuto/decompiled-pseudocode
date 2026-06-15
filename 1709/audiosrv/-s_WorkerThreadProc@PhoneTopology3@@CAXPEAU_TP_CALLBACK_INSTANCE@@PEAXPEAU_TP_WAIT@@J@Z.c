/*
 * XREFs of ?s_WorkerThreadProc@PhoneTopology3@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800ECE40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?WorkItemThreadProc@PhoneTopology3@@AEAAXXZ @ 0x1800ECCF8 (-WorkItemThreadProc@PhoneTopology3@@AEAAXXZ.c)
 */

void __fastcall PhoneTopology3::s_WorkerThreadProc(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  if ( Context )
  {
    v6 = CoInitializeEx(0LL, 0) >= 0;
    PhoneTopology3::WorkItemThreadProc((PhoneTopology3 *)Context);
    if ( v6 )
      CoUninitialize();
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(Context + 64));
    if ( !*((_DWORD *)Context + 48) )
      SetThreadpoolWait(Wait, *((HANDLE *)Context + 7), 0LL);
    if ( v8 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
