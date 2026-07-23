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

void __fastcall RtlpHpLfhSubsegmentDecommitPages(_RTL_SRWLOCK *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebp
  int v6; // r14d
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v11; // r13d
  unsigned int EmptyUnits; // eax
  _QWORD *v13; // r8
  unsigned __int64 v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  char v18; // cl
  unsigned int v19; // ebx
  unsigned int v20; // r15d
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v21 = a3;
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
    v13 = *(_QWORD **)(a1->Value + 72);
    v14 = v13[1] >> *(_BYTE *)(a1->Value + 11);
    v15 = *(_BYTE *)(a1->Value + 12);
    if ( v14 <= 8 )
      v14 = 8LL;
    v16 = v13[1] >> v15;
    if ( v16 <= 8 )
      v16 = 8LL;
    v17 = v13[3] + v13[2];
    if ( (v17 <= v14 || (int)RtlpHpScheduleCompaction() >= 0) && v17 <= v16 )
      return;
    v7 = v22;
  }
  if ( v8 < *(unsigned __int8 *)(a2 + 45) )
  {
    v11 = v21;
    do
    {
      EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v8, &v21);
      v8 = EmptyUnits;
      if ( EmptyUnits == -1 )
        break;
      if ( v21 >= v7 )
      {
        if ( v6 )
        {
          v18 = *(_BYTE *)(a2 + 44);
          v19 = EmptyUnits << v18;
          v20 = v21 << v18;
          ((void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[4].Value))(
            a1->Value,
            a2 + (EmptyUnits << v18),
            v21 << v18);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(a1[8].Value + 24),
            -(__int64)((unsigned __int64)v20 >> 12));
          RtlpHpLfhSubsegmentDecBlockCounts(a2, v19, v20, 1, 0LL);
          if ( !v5 )
            break;
          v8 += v21;
          v7 = v22;
        }
        else
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared(a1 + 9);
          v6 = 2;
          if ( v11 != -2 )
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
        }
      }
      else
      {
        if ( !v5 )
          break;
        v8 = v21 + EmptyUnits;
      }
    }
    while ( v8 < *(unsigned __int8 *)(a2 + 45) );
    if ( v6 )
    {
      if ( v11 != -2 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
      if ( (a5 & 1) == 0 )
        RtlReleaseSRWLockShared(a1 + 9);
    }
  }
}
