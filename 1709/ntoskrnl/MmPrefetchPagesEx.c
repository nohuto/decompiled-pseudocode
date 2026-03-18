/*
 * XREFs of MmPrefetchPagesEx @ 0x14048E088
 * Callers:
 *     PfSnPrefetchSections @ 0x140440C2C (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x140442F2C (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x14048E070 (MmPrefetchPages.c)
 *     HvpViewMapPrefetchFile @ 0x1406A0780 (HvpViewMapPrefetchFile.c)
 *     PfpPrefetchFiles @ 0x1406F27CC (PfpPrefetchFiles.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400207A4 (MiPfCompletePrefetchIos.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiPfExecuteReadList @ 0x140492E94 (MiPfExecuteReadList.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  char *PoolWithTag; // rax
  void *v6; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int v8; // ebx
  unsigned int v9; // r13d
  _QWORD *v10; // r14
  char *v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r15
  int List; // eax
  int v15; // ecx
  char v17; // bl
  unsigned int v18; // r12d
  unsigned int v19; // ebp
  __int64 *v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rbp
  PVOID *v26; // rbx
  __int64 v27; // rcx
  char **v28; // rax
  char *v29; // rcx
  unsigned __int64 v30; // rdx
  struct _KTHREAD *v31; // [rsp+20h] [rbp-48h]
  PVOID v33; // [rsp+88h] [rbp+20h]

  v3 = a1;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x6C526D4Du);
  v33 = PoolWithTag;
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  v31 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)v3 )
  {
    v10 = PoolWithTag;
    v11 = PoolWithTag;
    v12 = a2 - (_QWORD)PoolWithTag;
    v13 = (unsigned int)v3;
    do
    {
      List = MiPfPrepareReadList(*(_QWORD *)((char *)v10 + v12), v11, a3);
      if ( List < 0 )
      {
        v9 = List;
      }
      else
      {
        v15 = v8 | 1;
        if ( !*v10 )
          v15 = v8;
        v8 = v15;
      }
      v11 += 8;
      ++v10;
      --v13;
    }
    while ( v13 );
    v6 = v33;
    CurrentThread = v31;
  }
  if ( (v8 & 1) == 0 )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag(v6, 0);
    return v9;
  }
  ++BYTE6(CurrentThread[1].Queue);
  v17 = v8 & 0xFE;
  v18 = 0;
  v19 = 0;
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v20 = (__int64 *)v6;
  while ( !*v20 )
  {
LABEL_19:
    ++v19;
    ++v20;
    if ( v19 >= (unsigned int)v3 )
      goto LABEL_20;
  }
  *(_DWORD *)(*v20 + 72) = 0;
  v21 = MiPfPutPagesInTransition(*v20, a3);
  if ( v21 >= 0 )
  {
    v22 = *v20;
    if ( *(_QWORD *)(*v20 + 88) == *v20 + 88 )
    {
      MiReleaseReadListResources(v22);
      ExFreePoolWithTag((PVOID)*v20, 0);
      *v20 = 0LL;
    }
    else
    {
      v17 |= 1u;
      MiPfExecuteReadList(v22, 0LL, 0xFFFFFFFFLL, 0LL);
    }
    goto LABEL_19;
  }
  v18 = v21;
  while ( v19 < (unsigned int)v3 )
  {
    if ( *((_QWORD *)v6 + v19) )
    {
      while ( 1 )
      {
        v27 = *((_QWORD *)v6 + v19);
        v28 = (char **)(v27 + 88);
        if ( *v28 == (char *)v28 )
          break;
        v29 = *v28;
        if ( *((char ***)*v28 + 1) != v28 || (v30 = *(_QWORD *)v29, *(char **)(*(_QWORD *)v29 + 8LL) != v29) )
          __fastfail(3u);
        *v28 = (char *)v30;
        *(_QWORD *)(v30 + 8) = v28;
        MiFreeInPageSupportBlock(v29, v30);
      }
      MiReleaseReadListResources(v27);
      ExFreePoolWithTag(*((PVOID *)v6 + v19), 0);
      *((_QWORD *)v6 + v19) = 0LL;
    }
    ++v19;
  }
LABEL_20:
  v23 = v3;
  if ( (v17 & 1) != 0 )
  {
    v18 = 0;
    if ( (_DWORD)v3 )
    {
      v24 = v6;
      v25 = v3;
      do
      {
        if ( *v24 )
        {
          MiPfCompletePrefetchIos((_QWORD **)(*v24 + 88LL), 0LL);
          MiReleaseReadListResources(*v24);
        }
        ++v24;
        --v25;
      }
      while ( v25 );
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  if ( (_DWORD)v3 )
  {
    v26 = (PVOID *)v6;
    do
    {
      if ( *v26 )
        ExFreePoolWithTag(*v26, 0);
      ++v26;
      --v23;
    }
    while ( v23 );
  }
  ExFreePoolWithTag(v6, 0);
  return v18;
}
