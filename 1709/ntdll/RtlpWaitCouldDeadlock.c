/*
 * XREFs of RtlpWaitCouldDeadlock @ 0x18004A984
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 * Callees:
 *     <none>
 */

bool RtlpWaitCouldDeadlock()
{
  struct _TEB *v1; // rcx
  __int64 WowTebOffset; // rax
  __int64 v3; // rcx

  if ( byte_18015F3E8 )
    return 1;
  if ( !UseWOW64 )
    return 0;
  v1 = NtCurrentTeb();
  WowTebOffset = v1->WowTebOffset;
  if ( (_DWORD)WowTebOffset )
  {
    if ( (int)WowTebOffset >= 0 )
      v1 = (struct _TEB *)((char *)v1 + WowTebOffset);
  }
  else
  {
    v1 = 0LL;
  }
  v3 = *(unsigned int *)(LODWORD(v1->NtTib.Self) + 0xCLL);
  return v3 && *(_BYTE *)(v3 + 40);
}
