/*
 * XREFs of TpWaitForWait @ 0x180059580
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 * Callees:
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForWait(__int64 a1, int a2)
{
  int v3; // ebx
  char v5; // bp
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // ebx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v15 = 0;
  v5 = 0;
  result = sub_180025954(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
    {
      v13 = *(_QWORD *)(a1 + 144);
      RtlAcquireSRWLockExclusive(a1 + 240, v7, v8, v9);
      ++*(_BYTE *)(a1 + 355);
      sub_180028788(a1, v13 + 112, 2, &v15);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v3 = v15;
    }
    result = (__int64)sub_18002C5FC((_QWORD *)a1, a2);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v10, v11, v12);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v3 )
    {
      v14 = -v3;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v14);
      if ( (_DWORD)result == v14 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
