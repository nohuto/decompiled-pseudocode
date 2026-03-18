/*
 * XREFs of IopGetFileObjectExtension @ 0x1400511D0
 * Callers:
 *     IoGetInitiatorProcess @ 0x14003B5E0 (IoGetInitiatorProcess.c)
 *     IopSetLockOperationProcess @ 0x14004F2B0 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     IoGetSilo @ 0x140050BD0 (IoGetSilo.c)
 *     IoGetOplockFullFoExt @ 0x140050ED4 (IoGetOplockFullFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     IoGetOplockKeyContextEx @ 0x140050FC0 (IoGetOplockKeyContextEx.c)
 *     IoChangeFileObjectFilterContext @ 0x140050FE8 (IoChangeFileObjectFilterContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140051050 (FsRtlInsertPerFileObjectContext.c)
 *     IoSetOplockPrivateFoExt @ 0x1400529AC (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x14014ECE0 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401F3950 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1401F3AB0 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F4C88 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopOpenLinkOrRenameTarget @ 0x140449118 (IopOpenLinkOrRenameTarget.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopSymlinkSetFoExtension @ 0x140579944 (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x14057C004 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x14068B680 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == IopRevocationExtension )
    return 0LL;
  v4 = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return v4;
}
