/*
 * XREFs of MiFreeReadListPages @ 0x1404BBFB8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
 * Callees:
 *     MiGetPfnLink @ 0x1400D1210 (MiGetPfnLink.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v5; // r9

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    do
    {
      *(_QWORD *)(a1 + 40) = MiGetPfnLink(v1);
      if ( !v2 )
        v2 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF);
      MiReleaseFreshPage(v5);
      v1 = *(_QWORD *)(a1 + 40);
      ++v3;
    }
    while ( v1 );
    if ( v3 )
      MiReturnFaultCharges(v2, v3, 1);
  }
}
