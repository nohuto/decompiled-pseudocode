/*
 * XREFs of sub_180008170 @ 0x180008170
 * Callers:
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180008170(void *a1)
{
  RtlAcquireSRWLockExclusive(&unk_18015D380);
  RtlRbRemoveNode(&qword_18015D370, a1);
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&unk_18015D380);
}
