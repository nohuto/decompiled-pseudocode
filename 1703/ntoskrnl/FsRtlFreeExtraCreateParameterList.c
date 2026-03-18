/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x140542880
 * Callers:
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401E2A84 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspCreateUserProcessEcp @ 0x140545044 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14057C1B0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
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
    v4 = p_EcpList->Flink->Flink;
    if ( p_EcpList->Flink->Blink != p_EcpList || v4->Blink != Flink )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    FsRtlFreeExtraCreateParameter(&Flink[4]);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}
