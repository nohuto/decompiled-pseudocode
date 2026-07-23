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

void __fastcall sub_1800607D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rsi
  _QWORD *i; // rbx
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // ebp
  char v12; // cl
  unsigned int v13; // eax
  unsigned int v14; // ebp
  char *v15; // rdx
  unsigned int v16; // r8d
  __int64 (__fastcall *v17)(__int64, int, unsigned int); // rax
  __int64 v18; // rcx
  _RTL_SRWLOCK *v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-48h]
  _QWORD *v21; // [rsp+38h] [rbp-40h]
  _RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp-38h]
  int v24; // [rsp+88h] [rbp+10h]
  unsigned int v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h] BYREF

  v25 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v5 = 0LL;
    v6 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      sub_1800607D4(a1, *(_QWORD *)(v5 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v25;
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = (_QWORD *)(a2 + 24);
  v21 = v7;
  if ( (_QWORD *)*v7 != v7 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    SRWLock = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    for ( i = (_QWORD *)*v7; ; i = (_QWORD *)*i )
    {
      if ( i == v7 )
      {
        RtlReleaseSRWLockShared(SRWLock);
        return;
      }
      v24 = 0;
      if ( *((_BYTE *)i + 45) <= 1u )
        continue;
      v9 = 1;
      while ( 1 )
      {
        v10 = sub_1800609A8(i, v9, &v26);
        v9 = v10;
        if ( v10 == -1 )
          break;
        if ( v26 )
        {
          if ( !v24 )
          {
            if ( (v25 & 1) == 0 )
              RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 96));
            v11 = 2;
            v24 = 2;
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)i + 3);
            goto LABEL_22;
          }
          v12 = *((_BYTE *)i + 44);
          v13 = v10 << v12;
          v14 = v26 << v12;
          v15 = (char *)i + v13;
          v20 = v13;
          v16 = v26 << v12;
          v17 = (__int64 (__fastcall *)(__int64, int, unsigned int))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 32));
          v18 = *(_QWORD *)a1;
          if ( v17 == sub_180011560 )
            sub_180011560(v18, (int)v15, v16);
          else
            v17(v18, (int)v15, v14);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
            -(__int64)((unsigned __int64)v14 >> 12));
          sub_180060A50((_DWORD)i, v20, v14, 1, 0LL);
          v9 += v26;
        }
        v11 = v24;
LABEL_22:
        if ( v9 >= *((unsigned __int8 *)i + 45) )
          goto LABEL_13;
      }
      v11 = v24;
LABEL_13:
      v7 = v21;
      if ( v11 )
      {
        v19 = (_RTL_SRWLOCK *)(i + 3);
        if ( v11 == 2 )
          RtlReleaseSRWLockExclusive(v19);
        else
          RtlReleaseSRWLockShared(v19);
        if ( (v25 & 1) == 0 )
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 96));
      }
    }
  }
}
