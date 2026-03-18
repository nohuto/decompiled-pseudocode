/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x1404D1FD0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140062248 (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x140065288 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1404D1CB0 (FsRtlFreeExtraCreateParameterList.c)
 *     NtQueryAttributesFile @ 0x1404D1D30 (NtQueryAttributesFile.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1404E0FBC (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     PspCreateUserProcessEcp @ 0x1404F3DB8 (PspCreateUserProcessEcp.c)
 *     IopCleanupExtraCreateParameters @ 0x140554BB8 (IopCleanupExtraCreateParameters.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
