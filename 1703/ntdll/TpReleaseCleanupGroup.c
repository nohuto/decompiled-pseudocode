/*
 * XREFs of TpReleaseCleanupGroup @ 0x180085DA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

void __cdecl TpReleaseCleanupGroup(PTP_CLEANUP_GROUP CleanupGroup)
{
  if ( !CleanupGroup )
    goto LABEL_7;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return;
  if ( _InterlockedExchange((volatile __int32 *)CleanupGroup + 1, 1) )
  {
LABEL_7:
    sub_1801058B8(CleanupGroup);
    return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)CleanupGroup, 0xFFFFFFFF) == 1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000, CleanupGroup);
}
