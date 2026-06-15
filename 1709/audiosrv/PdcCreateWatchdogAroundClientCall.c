/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x18002C2E0
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x18002B784 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x18002BB08 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x1800DE140 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x1800DE320 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x1800DE4F4 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x1800DE670 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
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
    memset(pv, 0, 0x28uLL);
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
