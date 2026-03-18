/*
 * XREFs of IopGetFileObjectExtension @ 0x14002469C
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140024360 (IoSetOplockPrivateFoExt.c)
 *     IoGetOplockKeyContextEx @ 0x140024670 (IoGetOplockKeyContextEx.c)
 *     IopSetLockOperationProcess @ 0x140024D28 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     IoGetInitiatorProcess @ 0x140131770 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x14014862C (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401F93E0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1401F94B0 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401FAAE4 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x140587A24 (IopOpenLinkOrRenameTarget.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopSymlinkCreateECP @ 0x1405CE268 (IopSymlinkCreateECP.c)
 *     IopSymlinkSetFoExtension @ 0x1405E0514 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1406B7320 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == IopRevocationExtension )
    return 0LL;
  result = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return result;
}
