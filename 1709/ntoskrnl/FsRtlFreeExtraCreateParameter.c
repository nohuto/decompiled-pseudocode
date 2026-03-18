/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14053D630
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140024FEC (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     PspCreateUserProcessEcp @ 0x14053AFC8 (PspCreateUserProcessEcp.c)
 *     NtQueryFullAttributesFile @ 0x14053C2D0 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14053D360 (NtQueryAttributesFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14053D570 (FsRtlFreeExtraCreateParameterList.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405CE440 (IopSymlinkAllocateAndAddECP.c)
 *     IopCleanupExtraCreateParameters @ 0x1405E630C (IopCleanupExtraCreateParameters.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
