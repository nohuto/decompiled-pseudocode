/*
 * XREFs of MiSessionLookupImage @ 0x14012B754
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MmIsSessionExecutionValid @ 0x14012B698 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x1401528B0 (MiSharedVaToPartition.c)
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x140169974 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x14016E50C (MiSessionReferenceImage.c)
 *     MiSessionUnloadAllImages @ 0x1405ED214 (MiSessionUnloadAllImages.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiUnloadApproved @ 0x140604EC0 (MiUnloadApproved.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1406137F8 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
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
