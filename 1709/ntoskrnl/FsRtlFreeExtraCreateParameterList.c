/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x14053D570
 * Callers:
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401E6C54 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     PspCreateUserProcessEcp @ 0x14053AFC8 (PspCreateUserProcessEcp.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     NtQueryFullAttributesFile @ 0x14053C2D0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14053D360 (NtQueryAttributesFile.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405CE440 (IopSymlinkAllocateAndAddECP.c)
 *     IopCleanupExtraCreateParameters @ 0x1405E630C (IopCleanupExtraCreateParameters.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rax

  p_EcpList = &EcpList->EcpList;
  while ( p_EcpList->Flink != p_EcpList )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink->Blink != p_EcpList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    FsRtlFreeExtraCreateParameter(&Flink[4]);
  }
  if ( (EcpList->Flags & 4) != 0 )
  {
    ++dword_14038D99C;
    if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= (unsigned __int16)word_14038D990 )
    {
      ++dword_14038D9A0;
      ((void (__fastcall *)(PECP_LIST))qword_14038D9B8)(EcpList);
    }
    else
    {
      RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)EcpList);
    }
  }
  else
  {
    ExFreePoolWithTag(EcpList, 0);
  }
}
