/*
 * XREFs of MmPrefetchPagesEx @ 0x1404BBAC8
 * Callers:
 *     PfSnPrefetchSections @ 0x14048F0B8 (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x1404BB614 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x1404BBAB0 (MmPrefetchPages.c)
 *     PfpPrefetchFiles @ 0x14075B918 (PfpPrefetchFiles.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x14003F2B0 (MiPfCompletePrefetchIos.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x1404BC628 (MiPfExecuteReadList.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
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
  char **v27; // rax
  char *v28; // rcx
  __int64 v29; // rdx
  struct _KTHREAD *v30; // [rsp+20h] [rbp-48h]
  PVOID v32; // [rsp+88h] [rbp+20h]

  v3 = a1;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x6C526D4Du);
  v32 = PoolWithTag;
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  v30 = CurrentThread;
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
    v6 = v32;
    CurrentThread = v30;
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
        v27 = (char **)(*((_QWORD *)v6 + v19) + 88LL);
        v28 = *v27;
        if ( *v27 == (char *)v27 )
          break;
        if ( *((char ***)v28 + 1) != v27 || (v29 = *(_QWORD *)v28, *(char **)(*(_QWORD *)v28 + 8LL) != v28) )
          __fastfail(3u);
        *v27 = (char *)v29;
        *(_QWORD *)(v29 + 8) = v27;
        MiFreeInPageSupportBlock(v28);
      }
      MiReleaseReadListResources(*((_QWORD *)v6 + v19));
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
          MiPfCompletePrefetchIos((ULONG_PTR *)(*v24 + 88LL), 0LL, 0LL);
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
