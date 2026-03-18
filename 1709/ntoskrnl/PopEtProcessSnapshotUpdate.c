/*
 * XREFs of PopEtProcessSnapshotUpdate @ 0x140457AC0
 * Callers:
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1404579A8 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1404579D0 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopEtProcessSnapshotCreate @ 0x140457570 (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140457C68 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PopEtProcessSnapshotFind @ 0x14045808C (PopEtProcessSnapshotFind.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x1404581A0 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtAggregateKeyCleanup @ 0x14045876C (PopEtAggregateKeyCleanup.c)
 */

__int64 __fastcall PopEtProcessSnapshotUpdate(unsigned int *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  int v5; // ebx
  _QWORD *v7; // rdx
  __int64 v8; // [rsp+50h] [rbp+8h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 1856LL);
  PopAcquireRwLockExclusive(v2 + 16);
  v9 = PopEtProcessSnapshotFind(a1);
  v4 = (_QWORD *)v9;
  if ( !v9 )
  {
    v5 = PopEtProcessSnapshotCreate((__int64)a1, &v9);
    if ( v5 < 0 )
      goto LABEL_6;
    if ( *a1 == 1 || *(_DWORD *)(v3 + 468) > 1u )
    {
      v4 = (_QWORD *)v9;
      goto LABEL_3;
    }
    v4 = (_QWORD *)v9;
  }
  PopEtEnergyTrackerUpdateAggregate(v2, v4, *((_QWORD *)a1 + 3), *a1);
LABEL_3:
  if ( *a1 == 4 )
  {
    v8 = v4[1] & (-1LL << (*(_DWORD *)(v2 + 68) & 0x1F));
    v7 = (_QWORD *)(*(_QWORD *)(v2 + 72)
                  + 8LL
                  * ((37
                    * (BYTE6(v8)
                     + 37
                     * (BYTE5(v8)
                      + 37
                      * (BYTE4(v8)
                       + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                    + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v2 + 68) >> 5) - 1)));
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)v9;
    while ( (*v7 & 1) == 0 )
    {
      if ( (_QWORD *)*v7 == v4 )
      {
        *v7 = *v4;
        --*(_DWORD *)(v2 + 64);
        *v4 |= 0x8000000000000002uLL;
        goto LABEL_16;
      }
      v7 = (_QWORD *)*v7;
    }
    v4 = (_QWORD *)v9;
LABEL_16:
    PopEtAggregateKeyCleanup(v4 + 2);
    ExFreePoolWithTag(v4, 0x54456F50u);
  }
  else
  {
    PopEtProcessSnapshotUpdateFromSnapshotContext(v4, a1);
  }
  v5 = 0;
LABEL_6:
  PopReleaseRwLock(v2 + 16);
  return (unsigned int)v5;
}
