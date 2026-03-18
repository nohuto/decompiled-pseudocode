/*
 * XREFs of MiInsertSharedCommitNode @ 0x1404D0A10
 * Callers:
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiSectionOpen @ 0x1404D09E0 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x14050C860 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiIncludeSharedCommit @ 0x1400A26D0 (MiIncludeSharedCommit.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(_QWORD *a1, unsigned __int64 a2, int a3)
{
  char v3; // si
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rax
  int inserted; // esi
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  _QWORD *v17; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 CommittedPages; // rax
  unsigned __int64 v20; // r9
  _QWORD *v21; // r8
  _QWORD *v22; // rdx
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+24h] [rbp-44h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-38h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]
  unsigned __int64 *v28; // [rsp+40h] [rbp-28h]
  __int64 v29; // [rsp+48h] [rbp-20h]
  bool v31; // [rsp+88h] [rbp+20h]

  v3 = a3;
  if ( !MiIncludeSharedCommit((__int64)a1) || (*(_DWORD *)(v6 + 56) & 0x20) != 0 )
    return 0LL;
  if ( (a2 & 1) != 0 )
  {
    v25 = 0LL;
    NumberOfBytes = 40LL;
    v27 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = 0LL;
    goto LABEL_6;
  }
  v7 = a2;
  v25 = a2;
  if ( (*(_DWORD *)(a2 + 1740) & 0x10) != 0 )
    return 0LL;
  v27 = 0LL;
  NumberOfBytes = 64LL;
LABEL_6:
  v8 = *a1;
  CurrentThread = KeGetCurrentThread();
  v29 = *a1;
  v28 = (unsigned __int64 *)(*a1 + 72LL);
  v24 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v7 + 1928, 0LL);
    v8 = v29;
  }
  v23 = v3 & 2;
  if ( (v3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  }
  v31 = 0;
  v10 = (_QWORD *)*v28;
  if ( *v28 )
  {
    while ( 1 )
    {
      v11 = v10[3];
      if ( a2 < v11 )
      {
        v17 = (_QWORD *)*v10;
        if ( !*v10 )
        {
          v31 = 0;
          break;
        }
      }
      else
      {
        if ( a2 <= v11 )
        {
          ++v10[4];
          goto LABEL_14;
        }
        v17 = (_QWORD *)v10[1];
        if ( !v17 )
        {
          v31 = 1;
          break;
        }
      }
      v10 = v17;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 1LL;
    PoolWithTag[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v25 )
    {
      *(_QWORD *)(v20 + 56) = a1;
      v21 = *(_QWORD **)(v25 + 1944);
      v22 = (_QWORD *)(v20 + 40);
      if ( *v21 != v25 + 1936 )
        __fastfail(3u);
      *v22 = v25 + 1936;
      *(_QWORD *)(v20 + 48) = v21;
      *v21 = v22;
      *(_QWORD *)(v25 + 1944) = v22;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 1920), CommittedPages);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 1320), CommittedPages);
    }
    RtlAvlInsertNodeEx(v28, (unsigned __int64)v10, v31, v20);
    if ( v25 && (*(_DWORD *)(v25 + 1740) & 8) != 0 )
    {
      inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v25 + 944) | 1LL, 3LL);
      if ( inserted < 0 )
        MiRemoveSharedCommitNode(a1, v25, a3 | 7u);
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
  if ( !v23 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 40));
    KeAbPostRelease(v29 + 40);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13);
  }
  if ( !v24 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 1928), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 1928));
    KeAbPostRelease(v25 + 1928);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v15);
  }
  return (unsigned int)inserted;
}
