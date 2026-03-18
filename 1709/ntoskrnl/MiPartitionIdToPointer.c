/*
 * XREFs of MiPartitionIdToPointer @ 0x14012862C
 * Callers:
 *     MiFreeReadListPages @ 0x1404D1E58 (MiFreeReadListPages.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14059081C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x1405B76A0 (MiMarkBootGuardPage.c)
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E3110 (MiDeleteLeakedSessionPool.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_140388AF0 + 8LL * a1);
}
