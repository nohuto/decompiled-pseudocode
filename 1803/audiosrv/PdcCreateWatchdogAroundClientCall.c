/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x18005A6DC
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x18005AC90 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18010BC88 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18010BE5C (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x18010BFC0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

__int64 __fastcall PdcCreateWatchdogAroundClientCall(struct _TP_TIMER **pv, __int64 a2, int a3, struct _TP_TIMER *a4)
{
  unsigned int v4; // ebx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( ClientCallWatchdogEnabled )
  {
    memset_0(pv, 0, 0x28uLL);
    *((_DWORD *)pv + 3) = a3;
    *((_DWORD *)pv + 6) = GetCurrentProcessId();
    CurrentThreadId = GetCurrentThreadId();
    pv[2] = a4;
    *((_DWORD *)pv + 7) = CurrentThreadId;
    *((_DWORD *)pv + 8) = 1200000;
    ThreadpoolTimer = CreateThreadpoolTimer(PdcpFireClientCallWatchdog, pv, 0LL);
    *pv = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime.dwHighDateTime = -3;
      pftDueTime.dwLowDateTime = 884901888;
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x3E8u);
    }
    else
    {
      return GetLastError();
    }
  }
  return v4;
}
