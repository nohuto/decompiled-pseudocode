/*
 * XREFs of PfpReturnAccessBuffer @ 0x140226FA0
 * Callers:
 *     PfpFlushBuffers @ 0x140496650 (PfpFlushBuffers.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14005F1B8 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(PSLIST_ENTRY ListEntry)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) < (unsigned int)dword_140382BE8 )
  {
    RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
    if ( !stru_140382BD0.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&stru_140382BD0, 0, 0);
    v3 = 1;
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_14036DC10, 0x64u);
    v3 = 0;
  }
  ExReleaseRundownProtection(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer((__int64)ListEntry, 0);
}
