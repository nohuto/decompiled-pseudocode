/*
 * XREFs of HvlSharedIsr @ 0x1401E9C70
 * Callers:
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401EA7F0 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpGetLpcbByLpIndex @ 0x1401EA860 (HvlpGetLpcbByLpIndex.c)
 */

char __fastcall HvlSharedIsr(__int64 a1)
{
  int v1; // eax
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(v1) = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( HvlpRootSchedulerEnabled )
    {
      LODWORD(a1) = KeGetPcr()->Prcb.Number;
      LpIndexFromProcessorIndex = HvlpGetLpIndexFromProcessorIndex(a1);
      v3 = *(_QWORD *)(HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex) + 40);
      _m_prefetchw((const void *)(v3 + 1024));
      v1 = *(_DWORD *)(v3 + 1024);
      if ( v1 )
      {
        v4 = qword_1403A4DF8 + 104LL * *(unsigned int *)(v3 + 1040);
        *(_DWORD *)(v4 + 4) = 2;
        KiInsertQueueDpc(v4 + 8, 0LL, 0LL, 0LL, 0);
        *(_DWORD *)(v3 + 1024) = 0;
        LOBYTE(v1) = *(_BYTE *)(v3 + 1029);
        if ( (v1 & 1) != 0 )
        {
          LOBYTE(v1) = 0;
          __writemsr(0x40000084u, 0LL);
        }
      }
    }
  }
  return v1;
}
