/*
 * XREFs of TpWaitForTimer @ 0x1800143D0
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 * Callees:
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, int a2)
{
  __int64 result; // rax
  char v5; // bp
  char v6; // bl
  __int64 v7; // r8

  result = sub_18001770C(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v6 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      LOBYTE(v7) = 1;
      v5 = sub_1800177A0(a1, *(_QWORD *)(a1 + 144) + 112LL, v7);
      if ( *(_DWORD *)(a1 + 56) )
        v6 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
    }
    result = (__int64)sub_18001434C((_QWORD *)a1, a2);
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
