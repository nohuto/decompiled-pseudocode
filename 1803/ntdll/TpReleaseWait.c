/*
 * XREFs of TpReleaseWait @ 0x180058580
 * Callers:
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     sub_1800571C0 @ 0x1800571C0 (sub_1800571C0.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 * Callees:
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseWait(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  int v7; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  result = sub_180025954(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = sub_180058A78(a1, 1LL);
    if ( (_DWORD)result )
    {
      v6 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240, v3, v4, v5);
      sub_180028788(a1, v6 + 112, 2, &v9);
      ++*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v7 = 1 - v9;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v9 - 1);
      if ( (_DWORD)result == v7 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
