/*
 * XREFs of MiRemoveSharedCommitNode @ 0x140512380
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiSectionClose @ 0x140512010 (MiSectionClose.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MmLinkJobProcess @ 0x14054C0D4 (MmLinkJobProcess.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140098EC8 (MiGetCommittedPages.c)
 *     MiIncludeSharedCommit @ 0x140099540 (MiIncludeSharedCommit.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rcx
  unsigned __int64 *v9; // r8
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rcx
  __int16 v19; // ax
  unsigned __int64 v20; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-30h]
  unsigned __int64 v22; // [rsp+30h] [rbp-28h]
  __int64 v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+68h] [rbp+10h]
  int v26; // [rsp+78h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v6 = 0LL;
    v22 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v20 = 0LL;
  }
  else
  {
    v20 = a2;
    if ( !MiIncludeSharedCommit(a1) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 || (*(_DWORD *)(v6 + 1740) & 0x40) != 0 )
      return;
    v22 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)a1;
  v23 = v8;
  v26 = a3 & 1;
  v9 = (unsigned __int64 *)(v8 + 72);
  v21 = (unsigned __int64 *)(v8 + 72);
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 1904, 0LL);
    v8 = v23;
    v9 = v21;
  }
  v24 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
    v9 = v21;
  }
  v10 = (_QWORD *)*v9;
  if ( *v9 )
  {
    do
    {
      v11 = v10[3];
      if ( a2 < v11 )
      {
        v10 = (_QWORD *)*v10;
      }
      else
      {
        if ( a2 <= v11 )
          break;
        v10 = (_QWORD *)v10[1];
      }
    }
    while ( v10 );
  }
  if ( v10[4]-- == 1LL )
  {
    RtlAvlRemoveNode(v9, (__int64)v10);
    v13 = -MiGetCommittedPages((_QWORD *)a1);
    if ( v20 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 1896), v13);
      v14 = v10[5];
      v15 = (_QWORD *)v10[6];
      if ( *(_QWORD **)(v14 + 8) != v10 + 5 || (_QWORD *)*v15 != v10 + 5 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v20 + 1740) & 0x20) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v20 + 944) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1320), v13);
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v24 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v23 + 40));
    KeAbPostRelease(v23 + 40);
    v17 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v17;
    if ( !v17
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v16);
    }
  }
  if ( !v26 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 1904), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 1904));
    KeAbPostRelease(v20 + 1904);
    v19 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v19;
    if ( !v19
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v18);
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}
