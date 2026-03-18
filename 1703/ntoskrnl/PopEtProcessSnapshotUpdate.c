/*
 * XREFs of PopEtProcessSnapshotUpdate @ 0x1406D30EC
 * Callers:
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406D171C (PopEtEnergyTrackerEnumSnapshotCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1406D2C20 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopEtAggregateKeyCleanup @ 0x1406D0BBC (PopEtAggregateKeyCleanup.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1406D2344 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D2CD8 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotFind @ 0x1406D2FD4 (PopEtProcessSnapshotFind.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x1406D32B0 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 */

__int64 __fastcall PopEtProcessSnapshotUpdate(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  int v5; // ebx
  _QWORD *v6; // rdx
  __int64 v8; // [rsp+70h] [rbp+8h]
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1832LL);
  PopAcquireRwLockExclusive(v2 + 16);
  v9 = PopEtProcessSnapshotFind(a1);
  v4 = (_QWORD *)v9;
  if ( !v9 )
  {
    v5 = PopEtProcessSnapshotCreate(a1, &v9);
    if ( v5 < 0 )
      goto LABEL_19;
    if ( *(_DWORD *)(a1 + 16) == 1 || *(_DWORD *)(v3 + 380) > 1u )
    {
      v4 = (_QWORD *)v9;
      goto LABEL_7;
    }
    v4 = (_QWORD *)v9;
  }
  PopEtEnergyTrackerUpdateAggregate(v2, (__int64)v4, *(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
LABEL_7:
  if ( *(_DWORD *)(a1 + 16) == 4 )
  {
    v8 = v4[1] & (-1LL << (*(_DWORD *)(v2 + 68) & 0x1F));
    v6 = (_QWORD *)(*(_QWORD *)(v2 + 72)
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
    {
      v4 = (_QWORD *)v9;
      v6 = (_QWORD *)(*(_QWORD *)(v2 + 72)
                    + 8LL
                    * ((37
                      * (BYTE6(v8)
                       + 37
                       * (BYTE5(v8)
                        + 37
                        * (BYTE4(v8)
                         + 37
                         * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                      + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v2 + 68) >> 5) - 1)));
    }
    while ( (*v6 & 1) == 0 )
    {
      if ( (_QWORD *)*v6 == v4 )
      {
        *v6 = *v4;
        --*(_DWORD *)(v2 + 64);
        *v4 |= 0x8000000000000002uLL;
        goto LABEL_16;
      }
      v6 = (_QWORD *)*v6;
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
LABEL_19:
  PopReleaseRwLock(v2 + 16);
  return (unsigned int)v5;
}
