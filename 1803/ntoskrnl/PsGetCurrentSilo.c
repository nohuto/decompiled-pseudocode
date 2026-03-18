/*
 * XREFs of PsGetCurrentSilo @ 0x140105440
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140237700 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x14049F9B0 (CmCreateKey.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 *     NtQueryAttributesFile @ 0x1404D1D30 (NtQueryAttributesFile.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     NtOpenSymbolicLinkObject @ 0x140552930 (NtOpenSymbolicLinkObject.c)
 *     NtQueryFullAttributesFile @ 0x140554980 (NtQueryFullAttributesFile.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     NtOpenSection @ 0x140558700 (NtOpenSection.c)
 *     ObpCreateSymbolicLinkName @ 0x14057B354 (ObpCreateSymbolicLinkName.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 *     NtDeleteFile @ 0x1405F3880 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x1406216F0 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 *     VRegEnabledInJob @ 0x1407080AC (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x14071C390 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14071CC14 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140778AF0 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x1407F6710 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  result = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  if ( result == -3LL )
  {
    for ( result = CurrentThread->Process[1].Affinity.Bitmap[16]; result; result = *(_QWORD *)(result + 1072) )
    {
      if ( (*(_DWORD *)(result + 1304) & 0x40000000) != 0 )
        break;
    }
  }
  return result;
}
