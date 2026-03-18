/*
 * XREFs of AMLIResumeInterpreter @ 0x1C00442E0
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C001C5F0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C001E500 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C0033BB0 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C0044550 (Simulator_CallbackWorker.c)
 * Callees:
 *     LogSchedEvent @ 0x1C000295C (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C004309C (OSQueueWorkItem.c)
 */

void AMLIResumeInterpreter()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_1C00677B8 = 0;
  pszDest = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C0067978 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0LL, 0LL, 0LL, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (_QWORD *)qword_1C0067938;
        if ( (__int64 *)qword_1C0067938 == &qword_1C0067938 )
          break;
        if ( *(__int64 **)(qword_1C0067938 + 8) != &qword_1C0067938
          || (v1 = *(_QWORD *)qword_1C0067938, *(_QWORD *)(*(_QWORD *)qword_1C0067938 + 8LL) != qword_1C0067938) )
        {
          __fastfail(3u);
        }
        qword_1C0067938 = *(_QWORD *)qword_1C0067938;
        *(_QWORD *)(v1 + 8) = &qword_1C0067938;
        v0[1] = v0;
        *v0 = v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_1C0067938;
          if ( *(__int64 **)(qword_1C0067938 + 8) != &qword_1C0067938 )
            __fastfail(3u);
          *v0 = qword_1C0067938;
          v0[1] = &qword_1C0067938;
          *(_QWORD *)(v2 + 8) = v0;
          qword_1C0067938 = (__int64)v0;
          goto LABEL_11;
        }
      }
    }
    else
    {
LABEL_11:
      if ( (__int64 *)qword_1C0067938 != &qword_1C0067938 && (gReadyQueue & 2) == 0 )
      {
        OSQueueWorkItem(&qword_1C0067958);
        gReadyQueue |= 2u;
        LogSchedEvent(1381192785, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
