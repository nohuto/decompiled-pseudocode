/*
 * XREFs of MiSessionLookupImage @ 0x1400D5620
 * Callers:
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MmIsSessionExecutionValid @ 0x1400D5564 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x140132CC0 (MiSharedVaToPartition.c)
 *     MiSessionUpdateImageCharges @ 0x14014B984 (MiSessionUpdateImageCharges.c)
 *     MiSessionRemoveImage @ 0x140158EEC (MiSessionRemoveImage.c)
 *     MiSessionReferenceImage @ 0x14015C2C0 (MiSessionReferenceImage.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiUnloadApproved @ 0x14059D710 (MiUnloadApproved.c)
 *     MmEnumerateSystemImages @ 0x1406E2040 (MmEnumerateSystemImages.c)
 *     MiSessionUnloadAllImages @ 0x1406ED444 (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1406ED4C8 (MmIsDriverLoadedCurrentSession.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
  while ( v1 )
  {
    if ( a1 > v1[6] )
    {
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      if ( a1 >= (v1[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return v1;
      v1 = (_QWORD *)*v1;
    }
  }
  return 0LL;
}
