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

signed __int64 __fastcall sub_18005F64C(__int128 *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rsi
  signed __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  bool v12; // zf
  int v13; // eax
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR v16; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v2 = (_RTL_SRWLOCK *)a1 + 45;
  RtlAcquireReleaseSRWLockExclusive((PRTL_SRWLOCK)a1 + 45);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)a1 + 46);
      if ( (unsigned __int64)(v5 + a2) > *((_QWORD *)a1 + 47) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 46, v5 + a2, v5) )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = *((_QWORD *)a1 + 46);
    v8 = *((_QWORD *)a1 + 47);
    if ( v7 + a2 > v8 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v9 = *a1;
  v10 = v7 - v8;
  BaseAddress = (PVOID)*((_QWORD *)a1 + 47);
  v11 = (v10 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v12 = (*((_BYTE *)a1 + 68) & 1) == 0;
  v16 = v11;
  if ( v12 )
  {
    *(_OWORD *)v15 = v9;
    v13 = sub_18001182C(&BaseAddress, &v16, 0, 4096, 4u, (__int128 *)v15, 0LL);
    v11 = v16;
  }
  else
  {
    v14 = v9;
    v13 = sub_180083574(a1, v8, (v10 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL, &v14);
  }
  if ( v13 >= 0 )
  {
    *((_QWORD *)a1 + 47) += v11;
    goto LABEL_10;
  }
  v5 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v5;
}
