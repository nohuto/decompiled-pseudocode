/*
 * XREFs of sub_18005F64C @ 0x18005F64C
 * Callers:
 *     sub_18005F640 @ 0x18005F640 (sub_18005F640.c)
 * Callees:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007EBA0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_180083574 @ 0x180083574 (sub_180083574.c)
 */

signed __int64 __fastcall sub_18005F64C(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  signed __int64 v8; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  bool v15; // zf
  int v16; // eax
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF

  v2 = (volatile signed __int64 *)(a1 + 360);
  RtlAcquireReleaseSRWLockExclusive(a1 + 360);
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 368);
      if ( (unsigned __int64)(v8 + a2) > *(_QWORD *)(a1 + 376) )
        break;
      if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 368), v8 + a2, v8) )
        return v8;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)v2, v5, v6, v7);
    v10 = *(_QWORD *)(a1 + 368);
    v11 = *(_QWORD *)(a1 + 376);
    if ( v10 + a2 > v11 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v12 = *(_OWORD *)a1;
  v13 = v10 - v11;
  v20 = *(_QWORD *)(a1 + 376);
  v14 = (v13 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = (*(_BYTE *)(a1 + 68) & 1) == 0;
  v19 = v14;
  if ( v15 )
  {
    v18 = v12;
    v16 = sub_18001182C(&v20, (__int64 *)&v19, 0, 4096, 4, &v18, 0LL);
    v14 = v19;
  }
  else
  {
    v17 = v12;
    v16 = sub_180083574(a1, v11, (v13 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL, &v17);
  }
  if ( v16 >= 0 )
  {
    *(_QWORD *)(a1 + 376) += v14;
    goto LABEL_10;
  }
  v8 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v8;
}
