/*
 * XREFs of MmPrefetchPagesEx @ 0x14053D370
 * Callers:
 *     PfSnPrefetchSections @ 0x14046540C (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x14053CED0 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x14053D360 (MmPrefetchPages.c)
 *     HvpViewMapPrefetchFile @ 0x140676244 (HvpViewMapPrefetchFile.c)
 *     PfpPrefetchFiles @ 0x1406C3B40 (PfpPrefetchFiles.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiPfCompletePrefetchIos @ 0x14010B05C (MiPfCompletePrefetchIos.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfExecuteReadList @ 0x14053D754 (MiPfExecuteReadList.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r13
  __int64 v6; // r15
  _QWORD *PoolWithTag; // rsi
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v10; // r14d
  __int64 v11; // rbp
  _QWORD *v12; // r14
  __int64 *v13; // r13
  __int64 v14; // r12
  int List; // eax
  int v16; // ecx
  char v18; // bl
  __int64 v19; // rax
  unsigned int v20; // r12d
  __int64 v21; // rdx
  PVOID v22; // rcx
  __int64 *v23; // rbx
  __int64 v24; // r12
  PVOID *v25; // rbx
  __int64 *v26; // r13
  char **v27; // rax
  char *v28; // rcx
  __int64 v29; // rdx
  struct _KTHREAD *v30; // [rsp+20h] [rbp-48h]
  PVOID *v31; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+70h] [rbp+8h]
  int v35; // [rsp+88h] [rbp+20h]
  __int64 v36; // [rsp+88h] [rbp+20h]

  v3 = a1;
  v4 = a3;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  v6 = a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x6C526D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v35 = 0;
  v30 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  if ( v3 )
  {
    v11 = v3;
    v12 = PoolWithTag;
    v13 = PoolWithTag;
    v14 = a2 - (_QWORD)PoolWithTag;
    do
    {
      List = MiPfPrepareReadList(*(_DWORD **)((char *)v12 + v14), v13, a3);
      if ( List < 0 )
      {
        v35 = List;
      }
      else
      {
        v16 = v8 | 1;
        if ( !*v12 )
          v16 = v8;
        v8 = v16;
      }
      ++v13;
      ++v12;
      --v11;
    }
    while ( v11 );
    v3 = a1;
    CurrentThread = v30;
    v4 = a3;
    v10 = v35;
  }
  if ( (v8 & 1) == 0 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v10 )
      return v10;
    return 0LL;
  }
  ++BYTE6(CurrentThread[1].Queue);
  v10 = 0;
  v18 = v8 & 0xFE;
  v19 = 0LL;
  v20 = 0;
  if ( !v3 )
    goto LABEL_24;
  v36 = 0LL;
  while ( 1 )
  {
    v21 = PoolWithTag[v19];
    v31 = (PVOID *)&PoolWithTag[v19];
    if ( v21 )
      break;
LABEL_22:
    ++v19;
    ++v20;
    v36 = v19;
    if ( v20 >= v3 )
    {
      LODWORD(v19) = 0;
      goto LABEL_24;
    }
  }
  *(_DWORD *)(v21 + 72) = 0;
  LODWORD(v19) = MiPfPutPagesInTransition(PoolWithTag[v19], v4);
  if ( (int)v19 >= 0 )
  {
    v22 = *v31;
    if ( *((PVOID *)*v31 + 11) == (char *)*v31 + 88 )
    {
      MiReleaseReadListResources((__int64)v22);
      ExFreePoolWithTag(*v31, 0);
      *v31 = 0LL;
    }
    else
    {
      v18 |= 1u;
      MiPfExecuteReadList(v22, 0LL, 0xFFFFFFFFLL, 0LL);
    }
    v19 = v36;
    goto LABEL_22;
  }
  v33 = v19;
  if ( v20 < v3 )
  {
    v26 = &PoolWithTag[v36];
    do
    {
      if ( *v26 )
      {
        while ( 1 )
        {
          v27 = (char **)(*v26 + 88);
          if ( *v27 == (char *)v27 )
            break;
          v28 = *v27;
          v29 = *(_QWORD *)*v27;
          if ( *((char ***)*v27 + 1) != v27 || *(char **)(v29 + 8) != v28 )
            __fastfail(3u);
          *v27 = (char *)v29;
          *(_QWORD *)(v29 + 8) = v27;
          MiFreeInPageSupportBlock(v28);
        }
        MiReleaseReadListResources(*v26);
        ExFreePoolWithTag((PVOID)*v26, 0);
        *v26 = 0LL;
      }
      ++v20;
      ++v26;
    }
    while ( v20 < v3 );
    LODWORD(v19) = v33;
  }
LABEL_24:
  if ( (v18 & 1) != 0 )
  {
    if ( v3 )
    {
      v23 = PoolWithTag;
      v24 = v6;
      do
      {
        if ( *v23 )
        {
          MiPfCompletePrefetchIos((_QWORD *)(*v23 + 88), 0LL);
          MiReleaseReadListResources(*v23);
        }
        ++v23;
        --v24;
      }
      while ( v24 );
    }
  }
  else
  {
    v10 = v19;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  if ( v3 )
  {
    v25 = (PVOID *)PoolWithTag;
    do
    {
      if ( *v25 )
        ExFreePoolWithTag(*v25, 0);
      ++v25;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return v10;
}
