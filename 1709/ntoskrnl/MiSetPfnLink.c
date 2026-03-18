/*
 * XREFs of MiSetPfnLink @ 0x1400379C4
 * Callers:
 *     MiAllocateTopLevelPage @ 0x14043CD94 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiAllocateLargeZeroPages @ 0x1406EB7E8 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 *     MiDeleteLargePfnBitMap @ 0x1406ED6C0 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
