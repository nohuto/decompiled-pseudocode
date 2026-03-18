/*
 * XREFs of MiBadShareCount @ 0x14017CA94
 * Callers:
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    (a1 + 0x58000000000LL) / 48,
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
