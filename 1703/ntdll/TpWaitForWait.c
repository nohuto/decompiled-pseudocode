/*
 * XREFs of TpWaitForWait @ 0x180012BD0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180012890 (RtlDeregisterWaitEx.c)
 * Callees:
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, unsigned int a2)
{
  int v3; // esi
  char v5; // r14
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // esi
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0;
  v5 = 0;
  result = sub_180017610(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
    {
      v7 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      sub_180017414(a1, v7 + 112, 2LL, &v9);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
      v3 = v9;
    }
    result = sub_18001434C(a1, a2);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive(a1 + 240);
    }
    if ( v3 )
    {
      v8 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v8);
      if ( (_DWORD)result == v8 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
