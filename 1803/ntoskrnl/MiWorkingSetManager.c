/*
 * XREFs of MiWorkingSetManager @ 0x1400807C8
 * Callers:
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x14025B100 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiAdjustCachedStacks @ 0x1400380FC (MiAdjustCachedStacks.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     MiSignalLargePageRebuild @ 0x1400809A4 (MiSignalLargePageRebuild.c)
 *     MiNumberWsSwapPagefiles @ 0x140080AFC (MiNumberWsSwapPagefiles.c)
 *     MiScanPagefiles @ 0x140080B38 (MiScanPagefiles.c)
 *     MiAdjustModifiedPageLoad @ 0x140080BEC (MiAdjustModifiedPageLoad.c)
 *     MiAdjustPteBins @ 0x140080D50 (MiAdjustPteBins.c)
 *     MiEmptyDecayClusterTimers @ 0x140080EE0 (MiEmptyDecayClusterTimers.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140081174 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteStaleCacheMaps @ 0x14008120C (MiDeleteStaleCacheMaps.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiQueueExtentPfnDeletion @ 0x14025E6E8 (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // r14d
  char v6; // si
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 UnbiasedInterruptTime; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  char v14; // bp
  signed __int32 v15[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v16[4]; // [rsp+20h] [rbp-98h] BYREF
  char v17; // [rsp+24h] [rbp-94h]

  v2 = *(_QWORD *)(a1 + 6768);
  v3 = 0;
  if ( !*(_QWORD *)(v2 + 96) )
    *(_QWORD *)(v2 + 96) = KeGetCurrentThread();
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiDeleteStaleCacheMaps();
    MiReclaimUnusedUltraMdlMaps();
  }
  MiEmptyDecayClusterTimers(a1);
  if ( ++*(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 36) )
  {
    v11 = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 32) = 0;
    v12 = ((_BYTE)v11 + 1) & 0xF;
    *(_DWORD *)(v2 + 24) = v12;
    v13 = ((_BYTE)v12 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v13 + 3392) )
      KeSetEvent((PRKEVENT)(a1 + 24 * (v13 + 181)), 0, 0);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_1403CC4D0, 0, 0);
  v17 = 1;
  MiProcessWorkingSets(a1, (__int64)v16);
  v6 = v17;
  if ( v17 != 1 )
  {
    v14 = 1;
    do
    {
      if ( v14 == v6 )
      {
        ++*(_DWORD *)(v2 + 2588);
        v6 = 1;
        v17 = 1;
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v2 + 2344), *(unsigned int *)(v2 + 128));
        ++*(_DWORD *)(v2 + 2584);
        MiScanPagefiles(a1);
        v3 = 1;
      }
      v14 = v6;
      MiProcessWorkingSets(a1, (__int64)v16);
      v6 = v17;
    }
    while ( v17 != 1 );
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
    if ( byte_1403CB411 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v3 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v2 + 2344), *(unsigned int *)(v2 + 128));
    MiScanPagefiles(a1);
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 1056) )
    {
      _InterlockedOr(v15, 0);
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a1 + 1064)) >= 0x861C46800LL )
      {
        if ( byte_1403CBDA1 )
        {
          *(_QWORD *)(a1 + 1064) = UnbiasedInterruptTime - 33000000000LL;
        }
        else if ( PsReferencePartitionSafe(*(_QWORD *)(a1 + 168)) )
        {
          *(_QWORD *)(a1 + 1032) = 0LL;
          *(_QWORD *)(a1 + 1048) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 1056) = a1;
          ExQueueWorkItemToPartition(a1 + 1032);
        }
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 7424);
  v8 = *(_QWORD *)(a1 + 7536);
  if ( v7 > v8 && v7 - v8 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
  return MiSignalLargePageRebuild(a1);
}
