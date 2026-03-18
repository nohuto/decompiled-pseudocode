/*
 * XREFs of IopGetFileObjectExtension @ 0x140069628
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140068044 (IoSetOplockPrivateFoExt.c)
 *     IopSetLockOperationProcess @ 0x140068F80 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     IoChangeFileObjectFilterContext @ 0x1400695C0 (IoChangeFileObjectFilterContext.c)
 *     IoGetInitiatorProcess @ 0x1400D2590 (IoGetInitiatorProcess.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IoSetOplockKeyContext @ 0x14015AF04 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140236700 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1402367C0 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140237888 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSymlinkCreateECP @ 0x1404E0DD0 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     IopOpenLinkOrRenameTarget @ 0x140576138 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkSetFoExtension @ 0x14057FB48 (IopSymlinkSetFoExtension.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x14071BFB0 (IoCopyDeviceObjectHint.c)
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
