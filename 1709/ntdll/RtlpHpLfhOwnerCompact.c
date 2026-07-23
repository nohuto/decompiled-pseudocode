/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x1800495E4
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x18004954C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800495E4 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180049050 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800495E4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1800497B8 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C96C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rsi
  _QWORD *i; // rbx
  unsigned int v9; // edi
  unsigned int EmptyUnits; // eax
  int v11; // ebp
  char v12; // cl
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 (__fastcall *v17)(__int64, __int64, unsigned int); // rax
  __int64 Value; // rcx
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
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v5 + *(_QWORD *)(a2 + 96)), a3);
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
      v9 = 1;
      if ( *((_BYTE *)i + 45) <= 1u )
        continue;
      while ( 1 )
      {
        EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(i, v9, &v26);
        v9 = EmptyUnits;
        if ( EmptyUnits == -1 )
          break;
        if ( v26 )
        {
          if ( !v24 )
          {
            if ( (v25 & 1) == 0 )
              RtlAcquireSRWLockShared(a1 + 9);
            v11 = 2;
            v24 = 2;
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)i + 3);
            goto LABEL_21;
          }
          v12 = *((_BYTE *)i + 44);
          v13 = EmptyUnits << v12;
          v14 = v26 << v12;
          v15 = (__int64)i + v13;
          v20 = v13;
          v16 = v26 << v12;
          v17 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[4].Value);
          Value = a1->Value;
          if ( v17 == RtlpHpSegLfhVsDecommit )
            RtlpHpSegLfhVsDecommit(Value, v15, v16);
          else
            v17(Value, v15, v14);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(a1[8].Value + 24),
            -(__int64)((unsigned __int64)v14 >> 12));
          RtlpHpLfhSubsegmentDecBlockCounts((_DWORD)i, v20, v14, 1, 0LL);
          v9 += v26;
        }
        v11 = v24;
LABEL_21:
        if ( v9 >= *((unsigned __int8 *)i + 45) )
          goto LABEL_12;
      }
      v11 = v24;
LABEL_12:
      v7 = v21;
      if ( v11 )
      {
        v19 = (_RTL_SRWLOCK *)(i + 3);
        if ( v11 == 2 )
          RtlReleaseSRWLockExclusive(v19);
        else
          RtlReleaseSRWLockShared(v19);
        if ( (v25 & 1) == 0 )
          RtlReleaseSRWLockShared(a1 + 9);
      }
    }
  }
}
