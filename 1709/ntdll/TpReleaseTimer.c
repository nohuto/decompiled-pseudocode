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

__int64 __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 (__fastcall *v4)(__int64); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  result = TppTimerpValidateTimer(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      if ( (unsigned __int8)TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, 0LL) )
        v2 = 2;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( (_DWORD)result == v2 )
      {
        v4 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
        if ( v4 == TppTimerpFree )
          return TppTimerpFree(a1);
        else
          return v4(a1);
      }
    }
  }
  return result;
}
