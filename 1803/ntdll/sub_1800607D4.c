/*
 * XREFs of sub_1800607D4 @ 0x1800607D4
 * Callers:
 *     sub_18006073C @ 0x18006073C (sub_18006073C.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 *     sub_1800609A8 @ 0x1800609A8 (sub_1800609A8.c)
 *     sub_180060A50 @ 0x180060A50 (sub_180060A50.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800607D4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *result; // rax
  _QWORD *i; // rbx
  unsigned int v11; // edi
  unsigned int v12; // eax
  char *v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  int v16; // ebp
  char v17; // cl
  unsigned int v18; // eax
  unsigned int v19; // ebp
  char *v20; // rdx
  unsigned int v21; // r8d
  __int64 (__fastcall *v22)(__int64, int, unsigned int); // rax
  __int64 v23; // rcx
  volatile signed __int64 *v24; // rcx
  unsigned int v25; // [rsp+30h] [rbp-48h]
  _QWORD *v26; // [rsp+38h] [rbp-40h]
  volatile signed __int64 *v27; // [rsp+40h] [rbp-38h]
  int v29; // [rsp+88h] [rbp+10h]
  unsigned int v30; // [rsp+90h] [rbp+18h]
  int v31; // [rsp+98h] [rbp+20h] BYREF

  v30 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v6 = 0LL;
    v7 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      sub_1800607D4(a1, *(_QWORD *)(v6 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v30;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  v8 = (_QWORD *)(a2 + 24);
  v26 = v8;
  if ( (_QWORD *)*v8 != v8 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v27 = (volatile signed __int64 *)(a2 + 16);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 16), (char *)a2, a3, a4);
    for ( i = (_QWORD *)*v8; ; i = (_QWORD *)*i )
    {
      if ( i == v8 )
        return (_QWORD *)RtlReleaseSRWLockShared(v27);
      v29 = 0;
      if ( *((_BYTE *)i + 45) <= 1u )
        continue;
      v11 = 1;
      while ( 1 )
      {
        v12 = sub_1800609A8(i, v11, &v31);
        v11 = v12;
        if ( v12 == -1 )
          break;
        if ( v31 )
        {
          if ( !v29 )
          {
            if ( (v30 & 1) == 0 )
              RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), v13, (__int64)v14, v15);
            v16 = 2;
            v29 = 2;
            RtlAcquireSRWLockExclusive((unsigned __int64)(i + 3), (unsigned __int64)v13, v14, v15);
            goto LABEL_22;
          }
          v17 = *((_BYTE *)i + 44);
          v18 = v12 << v17;
          v19 = v31 << v17;
          v20 = (char *)i + v18;
          v25 = v18;
          v21 = v31 << v17;
          v22 = (__int64 (__fastcall *)(__int64, int, unsigned int))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 32));
          v23 = *(_QWORD *)a1;
          if ( v22 == sub_180011560 )
            sub_180011560(v23, (int)v20, v21);
          else
            v22(v23, (int)v20, v19);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
            -(__int64)((unsigned __int64)v19 >> 12));
          sub_180060A50((_DWORD)i, v25, v19, 1, 0LL);
          v11 += v31;
        }
        v16 = v29;
LABEL_22:
        if ( v11 >= *((unsigned __int8 *)i + 45) )
          goto LABEL_13;
      }
      v16 = v29;
LABEL_13:
      v8 = v26;
      if ( v16 )
      {
        v24 = i + 3;
        if ( v16 == 2 )
          RtlReleaseSRWLockExclusive(v24);
        else
          RtlReleaseSRWLockShared(v24);
        if ( (v30 & 1) == 0 )
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 96));
      }
    }
  }
  return result;
}
