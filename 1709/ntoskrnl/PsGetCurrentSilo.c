/*
 * XREFs of PsGetCurrentSilo @ 0x1400817D0
 * Callers:
 *     PsGetThreadProperty @ 0x140107C90 (PsGetThreadProperty.c)
 *     IoRevokeHandlesForProcess @ 0x1401FA8E0 (IoRevokeHandlesForProcess.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     CmCreateKey @ 0x1404E2CA0 (CmCreateKey.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 *     NtQueryFullAttributesFile @ 0x14053C2D0 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14053D360 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x14056AB70 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x14056E628 (NtOpenSection.c)
 *     NtOpenDirectoryObject @ 0x14056EB14 (NtOpenDirectoryObject.c)
 *     ObpCreateSymbolicLinkName @ 0x14058C2D8 (ObpCreateSymbolicLinkName.c)
 *     PsRegisterSiloMonitor @ 0x1405C75F0 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 *     NtDeleteFile @ 0x1405E61C0 (NtDeleteFile.c)
 *     PsGetSiloIdentifier @ 0x1405F2510 (PsGetSiloIdentifier.c)
 *     VRegEnabledInJob @ 0x1406A3A3C (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x1406B7700 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x1406B7EE8 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1407148F0 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] != -3LL )
    return *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  for ( result = CurrentThread->Process[1].Affinity.Bitmap[16]; result; result = *(_QWORD *)(result + 1072) )
  {
    if ( (*(_DWORD *)(result + 1304) & 0x40000000) != 0 )
      break;
  }
  return result;
}
