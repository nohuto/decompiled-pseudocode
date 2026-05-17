/*
 * XREFs of TpWaitForTimer @ 0x18000C660
 * Callers:
 *     RtlDeleteTimer @ 0x180011A50 (RtlDeleteTimer.c)
 * Callees:
 *     TppWorkWait @ 0x18000C5D0 (TppWorkWait.c)
 *     TppTimerpValidateTimer @ 0x18000F9AC (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, int a2)
{
  __int64 result; // rax
  char v5; // bp
  char v6; // bl
  __int64 v7; // r8

  result = TppTimerpValidateTimer(a1, 0LL);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v6 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      LOBYTE(v7) = 1;
      v5 = TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, v7);
      if ( *(_DWORD *)(a1 + 56) )
        v6 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
    }
    result = (__int64)TppWorkWait((_QWORD *)a1, a2);
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive(a1 + 240);
    }
    if ( v5 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
