/*
 * XREFs of ACPIInterruptEventCompletion @ 0x1C002AE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIInterruptEventCompletion(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // bl
  KIRQL v7; // bp

  v4 = a4 >> 8;
  v5 = a4;
  v7 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  if ( a2 >= 0 )
  {
    AcpiGpeWorkDone = 1;
    *((_BYTE *)GpeComplete + v5) |= v4;
    if ( !AcpiGpeDpcRunning )
      KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  else
  {
    *((_BYTE *)GpeRunMethod + v5) |= v4;
    if ( !AcpiGpeDpcScheduled )
    {
      AcpiGpeDpcScheduled = 1;
      KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
    }
  }
  KeReleaseSpinLock(&GpeTableLock, v7);
}
