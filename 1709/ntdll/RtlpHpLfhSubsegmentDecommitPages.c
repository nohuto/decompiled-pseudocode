/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x18005F17C
 * Callers:
 *     RtlpHpLfhCacheAddSubsegment @ 0x18005F08C (RtlpHpLfhCacheAddSubsegment.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpScheduleCompaction @ 0x18004911C (RtlpHpScheduleCompaction.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1800497B8 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C96C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int64 a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebp
  int v6; // r14d
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v11; // r13d
  unsigned int EmptyUnits; // eax
  char *v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r8
  unsigned __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r15
  char v21; // cl
  unsigned int v22; // ebx
  unsigned int v23; // r15d
  unsigned int v24; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v5 = (unsigned int)a3 >> 31;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  if ( a3 >= 0 )
  {
    if ( !a3 )
      return;
  }
  else
  {
    v8 = 1;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && a3 >= 0 )
  {
    v16 = *(_QWORD **)(*(_QWORD *)a1 + 72LL);
    v17 = v16[1] >> *(_BYTE *)(*(_QWORD *)a1 + 11LL);
    v18 = *(_BYTE *)(*(_QWORD *)a1 + 12LL);
    if ( v17 <= 8 )
      v17 = 8LL;
    v19 = v16[1] >> v18;
    if ( v19 <= 8 )
      v19 = 8LL;
    v20 = v16[3] + v16[2];
    if ( (v20 <= v17 || (int)RtlpHpScheduleCompaction() >= 0) && v20 <= v19 )
      return;
    v7 = v25;
  }
  if ( v8 < *(unsigned __int8 *)(a2 + 45) )
  {
    v11 = v24;
    do
    {
      EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v8, &v24);
      v8 = EmptyUnits;
      if ( EmptyUnits == -1 )
        break;
      if ( v24 >= v7 )
      {
        if ( v6 )
        {
          v21 = *(_BYTE *)(a2 + 44);
          v22 = EmptyUnits << v21;
          v23 = v24 << v21;
          ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 32)))(
            *(_QWORD *)a1,
            a2 + (EmptyUnits << v21),
            v24 << v21);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 24LL),
            -(__int64)((unsigned __int64)v23 >> 12));
          RtlpHpLfhSubsegmentDecBlockCounts(a2, v22, v23, 1, 0LL);
          if ( !v5 )
            break;
          v8 += v24;
          v7 = v25;
        }
        else
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), v13, (__int64)v14, v15);
          v6 = 2;
          if ( v11 != -2 )
            RtlAcquireSRWLockExclusive(a2 + 24, (unsigned __int64)v13, v14, v15);
        }
      }
      else
      {
        if ( !v5 )
          break;
        v8 = v24 + EmptyUnits;
      }
    }
    while ( v8 < *(unsigned __int8 *)(a2 + 45) );
    if ( v6 )
    {
      if ( v11 != -2 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 24));
      if ( (a5 & 1) == 0 )
        RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
    }
  }
}
