/*
 * XREFs of RtlLockMemoryZone @ 0x180083910
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800838A0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800839B4 @ 0x1800839B4 (sub_1800839B4.c)
 *     ZwLockVirtualMemory @ 0x1800A7390 (ZwLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A8A90 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlLockMemoryZone(__int64 a1)
{
  volatile signed __int64 *v1; // r14
  int v3; // esi
  _QWORD *i; // rdi
  _QWORD *j; // rbx
  _QWORD *k; // rbx
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+38h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 32);
  v3 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_7:
    ++*(_DWORD *)(a1 + 40);
  }
  else
  {
    for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
    {
      v9 = i;
      v8 = i[1];
      v3 = ZwLockVirtualMemory(-1LL, &v9, &v8, 1LL);
      if ( v3 < 0 )
      {
        for ( j = *(_QWORD **)(a1 + 48); j != i; j = (_QWORD *)*j )
        {
          v9 = j;
          v8 = j[1];
          ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
        }
        goto LABEL_8;
      }
    }
    v3 = sub_1800839B4();
    if ( v3 >= 0 )
      goto LABEL_7;
    for ( k = *(_QWORD **)(a1 + 48); k; k = (_QWORD *)*k )
    {
      v9 = k;
      v8 = k[1];
      ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(v1);
  return (unsigned int)v3;
}
