/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x140668EA0
 * Callers:
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140668FF8 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140668EDC (CmpGlobalUnlockKeyForWrite.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(PVOID P)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)P + 3);
  if ( v1 )
    CmpGlobalUnlockKeyForWrite(*((PVOID *)P + 2), v1);
  CmpDereferenceKeyControlBlock(*((_QWORD *)P + 2));
  CmpFreeTransientPoolWithTag(P, 0x34374D43u);
}
