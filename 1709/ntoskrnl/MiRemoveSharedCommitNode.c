/*
 * XREFs of MiRemoveSharedCommitNode @ 0x1404D0D00
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiSectionClose @ 0x1404D0F90 (MiSectionClose.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x14050C860 (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiIncludeSharedCommit @ 0x1400A26D0 (MiIncludeSharedCommit.c)
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rcx
  unsigned __int64 *v9; // r8
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]
  int v22; // [rsp+68h] [rbp+10h]
  int v24; // [rsp+78h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v6 = 0LL;
    v20 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v18 = 0LL;
  }
  else
  {
    v18 = a2;
    if ( !MiIncludeSharedCommit(a1) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 || (*(_DWORD *)(v6 + 1740) & 0x10) != 0 )
      return;
    v20 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)a1;
  v21 = v8;
  v24 = a3 & 1;
  v9 = (unsigned __int64 *)(v8 + 72);
  v19 = (unsigned __int64 *)(v8 + 72);
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 1928, 0LL);
    v8 = v21;
    v9 = v19;
  }
  v22 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
    v9 = v19;
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
  v12 = v10[4]-- == 1LL;
  if ( v12 )
  {
    RtlAvlRemoveNode(v9, (__int64)v10);
    v15 = -MiGetCommittedPages((_QWORD *)a1);
    if ( v18 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 1920), v15);
      v16 = v10[5];
      if ( *(_QWORD **)(v16 + 8) != v10 + 5 || (v17 = (_QWORD *)v10[6], (_QWORD *)*v17 != v10 + 5) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v18 + 1740) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v18 + 944) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 1320), v15);
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v22 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 40));
    KeAbPostRelease(v21 + 40);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13);
  }
  if ( !v24 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 1928), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v18 + 1928));
    KeAbPostRelease(v18 + 1928);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}
