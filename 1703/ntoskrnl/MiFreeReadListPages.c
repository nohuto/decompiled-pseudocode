/*
 * XREFs of MiFreeReadListPages @ 0x140515BFC
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  _QWORD *v4; // r9

  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 40) )
  {
    do
    {
      v4 = *(_QWORD **)(a1 + 40);
      *(_QWORD *)(a1 + 40) = *v4;
      if ( !v1 )
        v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(v4[5]) >> 8) & 0x3FF);
      MiReleaseFreshPage((__int64)v4);
      ++v2;
    }
    while ( *(_QWORD *)(a1 + 40) );
    if ( v2 )
      MiReturnFaultCharges(v1, v2, 1LL);
  }
}
