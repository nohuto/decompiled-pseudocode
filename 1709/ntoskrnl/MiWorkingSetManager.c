/*
 * XREFs of MiWorkingSetManager @ 0x1400F0224
 * Callers:
 *     KeBalanceSetManager @ 0x140148E40 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x14021F800 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiAdjustCachedStacks @ 0x14008CEDC (MiAdjustCachedStacks.c)
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     MiSignalLargePageRebuild @ 0x1400F00E0 (MiSignalLargePageRebuild.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F0408 (MiNumberWsSwapPagefiles.c)
 *     MiScanPagefiles @ 0x1400F0444 (MiScanPagefiles.c)
 *     MiAdjustModifiedPageLoad @ 0x1400F04F8 (MiAdjustModifiedPageLoad.c)
 *     MiAdjustPteBins @ 0x1400F09DC (MiAdjustPteBins.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F0D10 (MiEmptyDecayClusterTimers.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0FD4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F1070 (MiDeleteStaleCacheMaps.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiQueueExtentPfnDeletion @ 0x140223A70 (MiQueueExtentPfnDeletion.c)
 */

char __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // r14d
  char v6; // bp
  char i; // si
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 UnbiasedInterruptTime; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  signed __int32 v18[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v19[4]; // [rsp+20h] [rbp-98h] BYREF
  char v20; // [rsp+24h] [rbp-94h]

  v2 = *(_QWORD *)(a1 + 5680);
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
    v12 = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 32) = 0;
    v13 = ((_BYTE)v12 + 1) & 0xF;
    *(_DWORD *)(v2 + 24) = v13;
    v14 = ((_BYTE)v13 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v14 + 3328) )
      KeSetEvent((PRKEVENT)(a1 + 8 * (v14 + 2 * (v14 + 266))), 0, 0);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_140389250, 0, 0);
  v20 = 1;
  v6 = 1;
  MiProcessWorkingSets(a1, (__int64)v19);
  for ( i = v20; v20 != 1; i = v20 )
  {
    if ( v6 == i )
    {
      ++*(_DWORD *)(v2 + 2588);
      i = 1;
      v20 = 1;
    }
    else
    {
      MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v2 + 2344) >> 3, *(unsigned int *)(v2 + 128));
      ++*(_DWORD *)(v2 + 2584);
      MiScanPagefiles(a1);
      v3 = 1;
    }
    v6 = i;
    MiProcessWorkingSets(a1, (__int64)v19);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
    if ( byte_140388271 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v3 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v2 + 2344) >> 3, *(unsigned int *)(v2 + 128));
    MiScanPagefiles(a1);
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 1056) )
    {
      _InterlockedOr(v18, 0);
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a1 + 1064)) >= 0x861C46800LL )
      {
        if ( byte_140388B09 )
        {
          *(_QWORD *)(a1 + 1064) = UnbiasedInterruptTime - 33000000000LL;
        }
        else
        {
          v15 = *(_QWORD *)(a1 + 168);
          _m_prefetchw((const void *)(v15 + 24));
          v16 = *(_QWORD *)(v15 + 24);
          while ( (unsigned __int64)(v16 + 1) > 1 )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), v16 + 1, v16);
            if ( v17 == v16 )
            {
              *(_QWORD *)(a1 + 1032) = 0LL;
              *(_QWORD *)(a1 + 1048) = MiTrimUnusedPageFileRegionsWorker;
              *(_QWORD *)(a1 + 1056) = a1;
              ExQueueWorkItemToPartition(a1 + 1032, 3, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
              goto LABEL_16;
            }
          }
          if ( v16 )
            __fastfail(0xEu);
        }
      }
    }
  }
LABEL_16:
  v8 = *(_QWORD *)(a1 + 6336);
  v9 = *(_QWORD *)(a1 + 6448);
  if ( v8 > v9 && v8 - v9 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
  return MiSignalLargePageRebuild(a1);
}
