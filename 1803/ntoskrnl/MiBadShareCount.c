/*
 * XREFs of MiBadShareCount @ 0x1401A68BC
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
