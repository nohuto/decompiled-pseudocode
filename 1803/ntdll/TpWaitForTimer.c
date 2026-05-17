/*
 * XREFs of TpWaitForTimer @ 0x18002C520
 * Callers:
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 * Callees:
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  char v8; // bp
  char v9; // si
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9

  result = sub_180025DA4((struct _PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v8 = 0;
    v9 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v5, v6, v7);
      ++*(_BYTE *)(a1 + 355);
      v8 = sub_18002888C(a1, (volatile signed __int64 *)(*(_QWORD *)(a1 + 144) + 112LL), 1);
      if ( *(_DWORD *)(a1 + 56) )
        v9 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    result = sub_18002C5FC(a1, a2);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240, v10, v11, v12);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v8 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
