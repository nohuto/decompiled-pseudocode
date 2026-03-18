/*
 * XREFs of ExCleanupSessionHeapManager @ 0x1401541E4
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x140165BDC (ExInitializeSessionHeapManager.c)
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 * Callees:
 *     RtlHpHeapManagerCleanup @ 0x140292FE8 (RtlHpHeapManagerCleanup.c)
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void ExCleanupSessionHeapManager()
{
  _QWORD *v0; // rbx

  if ( ExpHeapBackedPoolEnabled )
  {
    v0 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424);
    if ( v0[1564] )
      RtlpHpHeapDestroy();
    RtlHpHeapManagerCleanup(v0);
    ExFreePoolWithTag(v0, 0x65537048u);
  }
}
