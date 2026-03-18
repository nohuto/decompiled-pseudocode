/*
 * XREFs of MiRemoveSharedCommitNode @ 0x140595640
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x140531244 (MmLinkJobProcess.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiSectionClose @ 0x140595900 (MiSectionClose.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiIncludeSharedCommit @ 0x1400E6C10 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rcx
  unsigned __int64 *v10; // r8
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rax
  unsigned __int64 **v15; // rax
  unsigned __int64 v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v17; // [rsp+28h] [rbp-30h]
  unsigned __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+68h] [rbp+10h]
  int v22; // [rsp+78h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v7 = 0LL;
    v18 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v16 = 0LL;
  }
  else
  {
    v16 = a2;
    if ( !MiIncludeSharedCommit(a1) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 || (*(_DWORD *)(v7 + 1740) & 0x10) != 0 )
      return;
    v18 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)a1;
  v19 = v9;
  v22 = a3 & 1;
  v10 = (unsigned __int64 *)(v9 + 72);
  v17 = (unsigned __int64 *)(v9 + 72);
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v7 + 1928, 0LL);
    v9 = v19;
    v10 = v17;
  }
  v20 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
    v10 = v17;
  }
  v11 = (_QWORD *)*v10;
  if ( *v10 )
  {
    do
    {
      v12 = v11[3];
      if ( a2 < v12 )
      {
        v11 = (_QWORD *)*v11;
      }
      else
      {
        if ( a2 <= v12 )
          break;
        v11 = (_QWORD *)v11[1];
      }
    }
    while ( v11 );
  }
  v13 = v11[4]-- == 1LL;
  if ( v13 )
  {
    RtlAvlRemoveNode(v10, (__int64)v11);
    v14 = -MiGetCommittedPages((_QWORD *)a1);
    if ( v16 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1920), v14);
      v10 = (unsigned __int64 *)v11[5];
      v7 = (__int64)(v11 + 5);
      if ( (_QWORD *)v10[1] != v11 + 5 || (v15 = (unsigned __int64 **)v11[6], *v15 != (unsigned __int64 *)v7) )
        __fastfail(3u);
      *v15 = v10;
      v10[1] = (unsigned __int64)v15;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v16 + 1740) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v16 + 944) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 1320), v14);
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v20 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 40), v7, (__int64)v10, a4);
    KeAbPostRelease(v19 + 40);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( !v22 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1928), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 1928), v7, (__int64)v10, a4);
    KeAbPostRelease(v16 + 1928);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}
