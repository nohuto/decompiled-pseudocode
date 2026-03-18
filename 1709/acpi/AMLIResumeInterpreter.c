/*
 * XREFs of AMLIResumeInterpreter @ 0x1C005B900
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0048B10 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00491F0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C0054A40 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C005BB60 (Simulator_CallbackWorker.c)
 * Callees:
 *     LogSchedEvent @ 0x1C0028490 (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C005B504 (OSQueueWorkItem.c)
 */

void AMLIResumeInterpreter()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_1C00797B8 = 0;
  pszDest = 0;
  byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C0079688 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0LL, 0LL, 0LL, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (_QWORD *)qword_1C0079648;
        if ( (__int64 *)qword_1C0079648 == &qword_1C0079648 )
          break;
        if ( *(__int64 **)(qword_1C0079648 + 8) != &qword_1C0079648
          || (v1 = *(_QWORD *)qword_1C0079648, *(_QWORD *)(*(_QWORD *)qword_1C0079648 + 8LL) != qword_1C0079648) )
        {
          __fastfail(3u);
        }
        qword_1C0079648 = *(_QWORD *)qword_1C0079648;
        *(_QWORD *)(v1 + 8) = &qword_1C0079648;
        v0[1] = v0;
        *v0 = v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_1C0079648;
          if ( *(__int64 **)(qword_1C0079648 + 8) != &qword_1C0079648 )
            __fastfail(3u);
          *v0 = qword_1C0079648;
          v0[1] = &qword_1C0079648;
          *(_QWORD *)(v2 + 8) = v0;
          qword_1C0079648 = (__int64)v0;
          goto LABEL_11;
        }
      }
    }
    else
    {
LABEL_11:
      if ( (__int64 *)qword_1C0079648 != &qword_1C0079648 && (gReadyQueue & 2) == 0 )
      {
        OSQueueWorkItem(&qword_1C0079668);
        gReadyQueue |= 2u;
        LogSchedEvent(1381192785, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_1C0079660);
}
