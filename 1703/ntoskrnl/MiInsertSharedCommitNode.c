/*
 * XREFs of MiInsertSharedCommitNode @ 0x140512070
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiSectionOpen @ 0x140512040 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MmLinkJobProcess @ 0x14054C0D4 (MmLinkJobProcess.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140098EC8 (MiGetCommittedPages.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     MiIncludeSharedCommit @ 0x140099540 (MiIncludeSharedCommit.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
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
  __int16 v14; // ax
  __int64 v15; // rcx
  __int16 v16; // ax
  _QWORD *v18; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 CommittedPages; // r8
  unsigned __int64 v21; // r9
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
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
    NumberOfBytes = 40LL;
    v28 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = 0LL;
    goto LABEL_6;
  }
  v7 = a2;
  v26 = a2;
  if ( (*(_DWORD *)(a2 + 1740) & 0x40) != 0 )
    return 0LL;
  v28 = 0LL;
  NumberOfBytes = 64LL;
LABEL_6:
  v8 = *a1;
  CurrentThread = KeGetCurrentThread();
  v30 = *a1;
  v29 = (unsigned __int64 *)(*a1 + 72LL);
  v25 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v7 + 1904, 0LL);
    v8 = v30;
  }
  v24 = v3 & 2;
  if ( (v3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  }
  v32 = 0;
  v10 = (_QWORD *)*v29;
  if ( *v29 )
  {
    while ( 1 )
    {
      v11 = v10[3];
      if ( a2 < v11 )
      {
        v18 = (_QWORD *)*v10;
        if ( !*v10 )
        {
          v32 = 0;
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
        v18 = (_QWORD *)v10[1];
        if ( !v18 )
        {
          v32 = 1;
          break;
        }
      }
      v10 = v18;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 1LL;
    PoolWithTag[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v26 )
    {
      *(_QWORD *)(v21 + 56) = a1;
      v22 = *(_QWORD **)(v26 + 1920);
      v23 = (_QWORD *)(v21 + 40);
      if ( *v22 != v26 + 1912 )
        __fastfail(3u);
      *v23 = v26 + 1912;
      *(_QWORD *)(v21 + 48) = v22;
      *v22 = v23;
      *(_QWORD *)(v26 + 1920) = v23;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 1896), CommittedPages);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 1320), CommittedPages);
    }
    RtlAvlInsertNodeEx(v29, (unsigned __int64)v10, v32, v21);
    if ( v26 && (*(_DWORD *)(v26 + 1740) & 0x20) != 0 )
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
      ExfTryToWakePushLock((volatile signed __int64 *)(v30 + 40));
    KeAbPostRelease(v30 + 40);
    v14 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v14;
    if ( !v14
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v13);
    }
  }
  if ( !v25 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 1904), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v26 + 1904));
    KeAbPostRelease(v26 + 1904);
    v16 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v16;
    if ( !v16
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v15);
    }
  }
  return (unsigned int)inserted;
}
