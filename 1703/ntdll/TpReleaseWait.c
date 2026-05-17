/*
 * XREFs of TpReleaseWait @ 0x1800135B0
 * Callers:
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     RtlDeregisterWaitEx @ 0x180012890 (RtlDeregisterWaitEx.c)
 *     sub_180082FA0 @ 0x180082FA0 (sub_180082FA0.c)
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseWait(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = sub_180017610(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = sub_1800144B8(a1, 1LL);
    if ( (_DWORD)result )
    {
      v3 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      sub_180017414(a1, v3 + 112, 2LL, &v6);
      ++*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
      v4 = 1 - v6;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v6 - 1);
      if ( (_DWORD)result == v4 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
