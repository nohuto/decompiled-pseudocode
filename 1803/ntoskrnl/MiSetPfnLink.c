/*
 * XREFs of MiSetPfnLink @ 0x1400093E8
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiAllocateLargeZeroPages @ 0x14075522C (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 *     MiDeleteLargePfnBitMap @ 0x140756B40 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
