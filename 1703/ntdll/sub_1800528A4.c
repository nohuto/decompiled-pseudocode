/*
 * XREFs of sub_1800528A4 @ 0x1800528A4
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180052A74 @ 0x180052A74 (sub_180052A74.c)
 */

LOGICAL __fastcall sub_1800528A4(PRTL_BALANCED_NODE Node)
{
  LOGICAL result; // eax
  _RTL_BALANCED_NODE *v3; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)&Node[2].Left + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    sub_180052A74(Node);
    RtlAcquireSRWLockExclusive(&stru_18015C348);
    RtlRbRemoveNode(&stru_18015C328, Node);
    RtlReleaseSRWLockExclusive(&stru_18015C348);
    LODWORD(Node[2].Children[0]) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&Node[1].16);
    v3 = Node[7].Children[0];
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Node);
  }
  return result;
}
