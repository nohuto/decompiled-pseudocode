/*
 * XREFs of MiInsertSharedCommitNode @ 0x140595350
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x140531244 (MmLinkJobProcess.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiSectionOpen @ 0x1405958D0 (MiSectionOpen.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiIncludeSharedCommit @ 0x1400E6C10 (MiIncludeSharedCommit.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(__int64 *a1, unsigned __int64 a2, int a3)
{
  char v3; // si
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rax
  int inserted; // esi
  bool v15; // zf
  _QWORD *v17; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 CommittedPages; // rax
  _QWORD *v20; // r9
  _QWORD *v21; // r8
  _QWORD *v22; // rdx
  volatile signed __int64 *v23; // rcx
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+24h] [rbp-44h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-38h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]
  unsigned __int64 *v29; // [rsp+40h] [rbp-28h]
  __int64 v30; // [rsp+48h] [rbp-20h]
  bool v32; // [rsp+88h] [rbp+20h]

  v3 = a3;
  if ( !MiIncludeSharedCommit((__int64)a1) || (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
    return 0LL;
  if ( (a2 & 1) != 0 )
  {
    v26 = 0LL;
    v7 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    NumberOfBytes = 40LL;
    v28 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v9 = 0LL;
    goto LABEL_6;
  }
  v9 = a2;
  v26 = a2;
  if ( (*(_DWORD *)(a2 + 1740) & 0x10) != 0 )
    return 0LL;
  v28 = 0LL;
  NumberOfBytes = 64LL;
LABEL_6:
  v10 = *a1;
  CurrentThread = KeGetCurrentThread();
  v30 = *a1;
  v29 = (unsigned __int64 *)(*a1 + 72);
  v25 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 1928, 0LL);
    v10 = v30;
  }
  v24 = v3 & 2;
  if ( (v3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
  }
  v32 = 0;
  v12 = (_QWORD *)*v29;
  if ( *v29 )
  {
    while ( 1 )
    {
      v13 = v12[3];
      if ( a2 < v13 )
      {
        v17 = (_QWORD *)*v12;
        if ( !*v12 )
        {
          v32 = 0;
          break;
        }
      }
      else
      {
        if ( a2 <= v13 )
        {
          ++v12[4];
          goto LABEL_14;
        }
        v17 = (_QWORD *)v12[1];
        if ( !v17 )
        {
          v32 = 1;
          break;
        }
      }
      v12 = v17;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  v8 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 1LL;
    PoolWithTag[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v26 )
    {
      v20[7] = a1;
      v21 = *(_QWORD **)(v26 + 1944);
      v22 = v20 + 5;
      if ( *v21 != v26 + 1936 )
        __fastfail(3u);
      *v22 = v26 + 1936;
      v20[6] = v21;
      *v21 = v22;
      *(_QWORD *)(v26 + 1944) = v22;
      v23 = (volatile signed __int64 *)(v26 + 1920);
    }
    else
    {
      v23 = (volatile signed __int64 *)(v28 + 1320);
    }
    _InterlockedExchangeAdd64(v23, CommittedPages);
    RtlAvlInsertNodeEx(v29, (unsigned __int64)v12, v32, v20);
    if ( v26 && (*(_DWORD *)(v26 + 1740) & 8) != 0 )
    {
      inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v26 + 944) | 1LL, 3LL);
      if ( inserted < 0 )
        MiRemoveSharedCommitNode(a1, v26, a3 | 7u);
    }
    else
    {
LABEL_14:
      inserted = 0;
    }
  }
  else
  {
    inserted = -1073741670;
  }
  if ( !v24 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v30 + 40), v10, v7, v8);
    KeAbPostRelease(v30 + 40);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( !v25 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 1928), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v26 + 1928), v10, v7, v8);
    KeAbPostRelease(v26 + 1928);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)inserted;
}
