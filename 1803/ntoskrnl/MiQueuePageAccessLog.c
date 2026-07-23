/*
 * XREFs of MiQueuePageAccessLog @ 0x14007A164
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x14007A104 (MiReturnCcAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14016A630 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x14052760C (MiGetCcAccessLog.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14007AB38 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_1403E27D0;
  if ( !ExAcquireRundownProtection(&stru_1403E2788) )
    goto LABEL_10;
  Alignment_low = LOWORD(stru_1403E27C0.Alignment);
  if ( LOWORD(stru_1403E27C0.Alignment) >= (unsigned int)dword_1403E27A8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_1403CD490, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_1403E27C0, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&stru_1403E2788);
  if ( !v3 )
LABEL_10:
    MmFreeAccessPfnBuffer(P);
}
