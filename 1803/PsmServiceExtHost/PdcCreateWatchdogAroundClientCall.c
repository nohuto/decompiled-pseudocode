/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x1800360BC
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1800357F8 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180035B44 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x180038768 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18006B1C0 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18006B394 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x18006B4F0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
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
