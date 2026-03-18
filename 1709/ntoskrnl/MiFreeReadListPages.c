/*
 * XREFs of MiFreeReadListPages @ 0x1404D1E58
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiGetPfnLink @ 0x14012FE20 (MiGetPfnLink.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v4; // r9

  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 40) )
  {
    do
    {
      *(_QWORD *)(a1 + 40) = MiGetPfnLink(*(_QWORD *)(a1 + 40));
      if ( !v1 )
        v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v4 + 40)) >> 8) & 0x3FF);
      MiReleaseFreshPage(v4);
      ++v2;
    }
    while ( *(_QWORD *)(a1 + 40) );
    if ( v2 )
      MiReturnFaultCharges(v1, v2, 1);
  }
}
