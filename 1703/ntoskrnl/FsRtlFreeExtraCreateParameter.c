/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x140542BD0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14005306C (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140542880 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140542B00 (FsRtlpCleanupEcps.c)
 *     PspCreateUserProcessEcp @ 0x140545044 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14057C1B0 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  void (__fastcall *v1)(PVOID, char *); // rax
  __int64 v3; // rcx

  v1 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  if ( v1 )
    v1(EcpContext, (char *)EcpContext - 48);
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
    (*(void (__fastcall **)(_QWORD, PVOID))FltMgrCallbacks)(*((_QWORD *)EcpContext - 1), EcpContext);
  v3 = *((_QWORD *)EcpContext - 2);
  if ( v3 )
  {
    if ( (*((_DWORD *)EcpContext - 6) & 0x40) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v3, (char *)EcpContext - 72);
    }
    else
    {
      ++*(_DWORD *)(v3 + 28);
      if ( *(_WORD *)v3 >= *(_WORD *)(v3 + 16) )
      {
        ++*(_DWORD *)(v3 + 32);
        (*(void (__fastcall **)(char *))(v3 + 56))((char *)EcpContext - 72);
      }
      else
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v3, (PSLIST_ENTRY)((char *)EcpContext - 72));
      }
    }
  }
  else
  {
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  }
}
