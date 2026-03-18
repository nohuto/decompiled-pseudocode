/*
 * XREFs of ACPIInterruptEventCompletion @ 0x1C00505B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIInterruptEventCompletion(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  __int64 v4; // rdi
  KIRQL v6; // si
  char v7; // [rsp+49h] [rbp+21h]

  v7 = HIBYTE(a4);
  v4 = (unsigned __int8)a4;
  v6 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  if ( a2 >= 0 )
  {
    AcpiGpeWorkDone = 1;
    *((_BYTE *)GpeComplete + v4) |= v7;
    if ( !AcpiGpeDpcRunning )
      KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  else
  {
    *((_BYTE *)GpeRunMethod + v4) |= v7;
    if ( !AcpiGpeDpcScheduled )
    {
      AcpiGpeDpcScheduled = 1;
      KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
    }
  }
  KeReleaseSpinLock(&GpeTableLock, v6);
}
