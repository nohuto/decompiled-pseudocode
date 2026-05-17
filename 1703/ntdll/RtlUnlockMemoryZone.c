/*
 * XREFs of RtlUnlockMemoryZone @ 0x180083AB0
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800838A0 (RtlLockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180083A50 (RtlUnlockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180083B3C @ 0x180083B3C (sub_180083B3C.c)
 *     ZwUnlockVirtualMemory @ 0x1800A8A90 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockMemoryZone(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *i; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 32);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    *(_DWORD *)(a1 + 40) = v5;
    if ( !v5 )
    {
      for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
      {
        v9 = i;
        v8 = i[1];
        ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
      }
      sub_180083B3C();
    }
  }
  else
  {
    v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v1);
  return v4;
}
