/*
 * XREFs of MiPartitionIdToPointer @ 0x1401404D0
 * Callers:
 *     MiFreeReadListPages @ 0x1404BBFB8 (MiFreeReadListPages.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14057A8C0 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1405ED150 (MiDeleteLeakedSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiMarkBootGuardPage @ 0x14062B064 (MiMarkBootGuardPage.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionIdToPointer(unsigned __int16 a1)
{
  return *(_QWORD *)(qword_1403CBD88 + 8LL * a1);
}
