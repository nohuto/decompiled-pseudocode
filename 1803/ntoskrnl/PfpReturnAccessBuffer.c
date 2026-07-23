/*
 * XREFs of PfpReturnAccessBuffer @ 0x14007ACB8
 * Callers:
 *     PfpFlushBuffers @ 0x140529600 (PfpFlushBuffers.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14007AB38 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection(&stru_1403E2788) )
    goto LABEL_8;
  Alignment_low = LOWORD(stru_1403E27C0.Alignment);
  if ( LOWORD(stru_1403E27C0.Alignment) >= (unsigned int)dword_1403E27A8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_1403CD490, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_1403E27C0, P);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&stru_1403E2788);
  if ( !v3 )
LABEL_8:
    MmFreeAccessPfnBuffer(P, 0);
}
