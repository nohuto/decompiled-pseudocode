/*
 * XREFs of MiPartitionIdToPointer @ 0x140031BC0
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404515C8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiFreeReadListPages @ 0x140515BFC (MiFreeReadListPages.c)
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x14057AA70 (MiDeleteLeakedSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x1405A7878 (MiMarkBootGuardPage.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_14036C8F8 + 8LL * a1);
}
