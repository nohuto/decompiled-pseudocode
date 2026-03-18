/*
 * XREFs of PopEtProcessSnapshotUpdate @ 0x140537D50
 * Callers:
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x14052FAD8 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140537C60 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopEtProcessSnapshotCreate @ 0x1405326C0 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateKeyCleanup @ 0x140535008 (PopEtAggregateKeyCleanup.c)
 *     PopEtProcessSnapshotFind @ 0x140537F30 (PopEtProcessSnapshotFind.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14053807C (PopEtEnergyTrackerUpdateAggregate.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x140538498 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 */

__int64 __fastcall PopEtProcessSnapshotUpdate(unsigned int *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 1856LL);
  PopAcquireRwLockExclusive(v2 + 16);
  v10 = PopEtProcessSnapshotFind(a1);
  v4 = (_QWORD *)v10;
  if ( !v10 )
  {
    v6 = PopEtProcessSnapshotCreate((__int64)a1, &v10);
    if ( v6 < 0 )
      goto LABEL_6;
    v5 = *a1;
    if ( *a1 == 1 || *(_DWORD *)(v3 + 468) > 1u )
    {
      v4 = (_QWORD *)v10;
      goto LABEL_3;
    }
    v4 = (_QWORD *)v10;
  }
  PopEtEnergyTrackerUpdateAggregate(v2, v4, *((_QWORD *)a1 + 3), *a1);
  v5 = *a1;
LABEL_3:
  if ( v5 == 4 )
  {
    v8 = v4[1] & (-1LL << (*(_DWORD *)(v2 + 68) & 0x1F));
    v9 = (_QWORD *)(*(_QWORD *)(v2 + 72)
                  + 8
                  * ((HIBYTE(v8)
                    + 37
                    * (BYTE6(v8)
                     + 37
                     * (BYTE5(v8)
                      + 37
                      * (BYTE4(v8)
                       + 37
                       * ((((_DWORD)v4[1] & (unsigned int)(-1 << (*(_DWORD *)(v2 + 68) & 0x1F))) >> 24)
                        + 37
                        * ((unsigned __int8)(((_DWORD)v4[1] & (unsigned int)(-1 << (*(_DWORD *)(v2 + 68) & 0x1F))) >> 16)
                         + 37
                         * ((unsigned __int8)((unsigned __int16)(v4[1] & (-1 << (*(_DWORD *)(v2 + 68) & 0x1F))) >> 8)
                          + 37 * ((unsigned __int8)v8 + 11623883)))))))) & ((*(_DWORD *)(v2 + 68) >> 5) - 1)));
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)v10;
    while ( (*v9 & 1) == 0 )
    {
      if ( (_QWORD *)*v9 == v4 )
      {
        *v9 = *v4;
        --*(_DWORD *)(v2 + 64);
        *v4 |= 0x8000000000000002uLL;
        goto LABEL_16;
      }
      v9 = (_QWORD *)*v9;
    }
    v4 = (_QWORD *)v10;
LABEL_16:
    PopEtAggregateKeyCleanup(v4 + 2);
    ExFreePoolWithTag(v4, 0x54456F50u);
  }
  else
  {
    PopEtProcessSnapshotUpdateFromSnapshotContext(v4, a1);
  }
  v6 = 0;
LABEL_6:
  PopReleaseRwLock(v2 + 16);
  return (unsigned int)v6;
}
