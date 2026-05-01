/*
 * XREFs of CrmGlobalsSubscriberRemove @ 0x180069E18
 * Callers:
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsSubscriberRemove(__int64 a1)
{
  RtlAcquireSRWLockExclusive(&unk_180092A18);
  dword_180092A20 = GetCurrentThreadId();
  RtlRbRemoveNode(&xmmword_180092A28, a1 + 40);
  *(_QWORD *)(a1 + 56) = -1LL;
  dword_180092A20 = 0;
  return RtlReleaseSRWLockExclusive(&unk_180092A18);
}
