/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x1402743A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140038470 (KeGetProcessorIndexFromNumber.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmUpdateIdleVeto @ 0x140273FE0 (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x140280ED8 (PpmEventProcessorVetoRequest.c)
 */

__int64 __fastcall PpmUpdateProcessorIdleVeto(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // ebp
  struct _KPRCB *Prcb; // rsi
  int updated; // ebx
  KIRQL v5; // al
  _PPM_IDLE_STATES *IdleStates; // rdx
  KIRQL v7; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  _DWORD v11[44]; // [rsp+20h] [rbp-D8h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  Prcb = (struct _KPRCB *)KeGetPrcb(ProcessorIndexFromNumber);
  if ( ProcessorIndexFromNumber == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    IdleStates = Prcb->PowerState.IdleStates;
    v7 = v5;
    if ( IdleStates )
    {
      v9 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v9 < IdleStates->ProcessorIdleCount )
      {
        updated = PpmUpdateIdleVeto(
                    *(_BYTE *)(a1 + 16),
                    *(_DWORD *)(a1 + 12),
                    (__int64)&IdleStates->State[v9].VetoAccounting);
        if ( updated >= 0 )
        {
          LOBYTE(v10) = *(_BYTE *)(a1 + 16);
          PpmEventProcessorVetoRequest(Prcb, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v10);
          if ( Prcb != KeGetCurrentPrcb() )
          {
            KxReleaseSpinLock(&PpmIdleVetoLock);
            __writecr8(v7);
            v11[0] = 1310721;
            memset(&v11[1], 0, 0xA4uLL);
            KeAddProcessorAffinityEx(v11, ProcessorIndexFromNumber);
            PopExecuteOnTargetProcessors((__int64)v11, (__int64)PsGetHostSilo, 0LL, 0LL);
            return (unsigned int)updated;
          }
        }
      }
      else
      {
        updated = -1073741811;
      }
    }
    else
    {
      updated = -1073741637;
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    __writecr8(v7);
  }
  return (unsigned int)updated;
}
