/*
 * XREFs of PsGetCurrentSilo @ 0x1400EDEE0
 * Callers:
 *     PsGetThreadProperty @ 0x14004BD90 (PsGetThreadProperty.c)
 *     IoRevokeHandlesForProcess @ 0x1401F4B00 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     NtOpenSection @ 0x140434530 (NtOpenSection.c)
 *     NtOpenSymbolicLinkObject @ 0x140435CE0 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x14044E9DC (ObpCreateSymbolicLinkName.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404E915C (EtwpWriteAppStateChangeSummary.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x140542620 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140542900 (NtQueryAttributesFile.c)
 *     PsRegisterSiloMonitor @ 0x14059F3C0 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     NtDeleteFile @ 0x1405CFB90 (NtDeleteFile.c)
 *     PsGetSiloIdentifier @ 0x1405D5E30 (PsGetSiloIdentifier.c)
 *     VRegEnabledInJob @ 0x14067948C (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x14068B8F0 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14068C0A8 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1406DE440 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
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
