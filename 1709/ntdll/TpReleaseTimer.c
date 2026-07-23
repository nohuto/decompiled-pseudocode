/*
 * XREFs of TpReleaseTimer @ 0x18000BCB0
 * Callers:
 *     RtlDeleteTimer @ 0x180011A50 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800152C0 (RtlDeleteTimerQueueEx.c)
 *     RtlpInitializeWnf @ 0x180081350 (RtlpInitializeWnf.c)
 * Callees:
 *     TppTimerpFree @ 0x18000BC70 (TppTimerpFree.c)
 *     TppTimerpValidateTimer @ 0x18000F9AC (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x1800107A8 (TppCleanupGroupMemberRelease.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  LOGICAL (__fastcall *v3)(void *); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer(Timer, 1LL) && (unsigned int)TppCleanupGroupMemberRelease(Timer, 1LL) )
  {
    *((_QWORD *)Timer + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    ++*((_BYTE *)Timer + 355);
    if ( (unsigned __int8)TppCancelTimer(Timer, *((_QWORD *)Timer + 18) + 112LL, 0LL) )
      v2 = 2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
    {
      v3 = (LOGICAL (__fastcall *)(void *))**((_QWORD **)Timer + 1);
      if ( v3 == TppTimerpFree )
        TppTimerpFree(Timer);
      else
        v3(Timer);
    }
  }
}
