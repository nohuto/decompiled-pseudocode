/*
 * XREFs of TpReleaseWait @ 0x180058580
 * Callers:
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     InitFn @ 0x1800571C0 (InitFn.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 * Callees:
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  __int64 v2; // rbx
  int v3; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)sub_180025954((__int64)Wait, 1LL, 0LL) && (unsigned int)sub_180058A78(Wait, 1LL) )
  {
    v2 = *((_QWORD *)Wait + 18);
    *((_QWORD *)Wait + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    sub_180028788((__int64)Wait, v2 + 112, 2, &v5);
    ++*((_BYTE *)Wait + 355);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    v3 = 1 - v5;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v5 - 1) == v3 )
      (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  }
}
