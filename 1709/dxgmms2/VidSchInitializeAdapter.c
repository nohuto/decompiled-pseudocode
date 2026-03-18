/*
 * XREFs of VidSchInitializeAdapter @ 0x1C0076950
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C0075AC4 (VidSchiReadGlobalConfiguration.c)
 *     VidSchiInitializeNode @ 0x1C0077100 (VidSchiInitializeNode.c)
 *     VidSchiCreateNode @ 0x1C00771B0 (VidSchiCreateNode.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C00773BC (VidSchiRequestSchedulerStatus.c)
 *     VidSchTerminateAdapter @ 0x1C00B5480 (VidSchTerminateAdapter.c)
 */

__int64 __fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  PVOID PoolWithTag; // rax
  __int64 v8; // rcx
  __int64 StartContext; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // ecx
  int v17; // ecx
  size_t v18; // rsi
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID v22; // rax
  int v23; // eax
  char v24; // cl
  struct _KEVENT *v25; // rsi
  __int64 v26; // rbp
  struct _KEVENT *v27; // rsi
  __int64 v28; // rbp
  __int64 Timer; // rax
  __int64 v30; // rcx
  unsigned int v31; // r15d
  PVOID v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  _DWORD *v36; // rax
  __int64 v37; // rbp
  __int64 v38; // r14
  __int64 v39; // r12
  union _SLIST_HEADER *v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // r14
  __int64 v43; // r12
  union _SLIST_HEADER *v44; // rcx
  unsigned int v45; // esi
  unsigned int v46; // ebp
  unsigned int v47; // r14d
  unsigned int v48; // r15d
  __int64 Node; // rax
  __int64 v50; // rdx
  NTSTATUS v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-58h] BYREF
  void *ThreadHandle; // [rsp+A0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1840uLL, 0x68536956u);
    StartContext = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v58 = WdLogNewEntry5_WdWarning(v8);
      WdLogEvent5_WdWarning(v58);
      return 0LL;
    }
    memset(PoolWithTag, 0, 0x1840uLL);
    *(_DWORD *)StartContext = 1818380118;
    *(_DWORD *)(StartContext + 4) = *(_DWORD *)(v6 + 200);
    *(_QWORD *)(StartContext + 8) = a1;
    *(_QWORD *)(StartContext + 16) = v6;
    *(_QWORD *)(StartContext + 24) = a2;
    *(_DWORD *)(StartContext + 32) = *(_DWORD *)(v6 + 1668);
    *(_DWORD *)(StartContext + 36) = 7;
    *(_QWORD *)(StartContext + 6184) = a3;
    v10 = *(_DWORD *)(v6 + 1184);
    *(_DWORD *)(StartContext + 40) = v10;
    if ( !v10 )
    {
      *(_DWORD *)(StartContext + 40) = 1;
      *(_BYTE *)(StartContext + 50) = 1;
    }
    if ( *(_BYTE *)(v6 + 2175) )
      *(_BYTE *)(StartContext + 51) = 1;
    *(_BYTE *)(StartContext + 45) = (*(_DWORD *)(v6 + 1696) & 2) != 0;
    *(_BYTE *)(StartContext + 44) = *(_BYTE *)(v6 + 2170);
    *(_BYTE *)(StartContext + 46) = (*(_DWORD *)(v6 + 1696) & 0x10) != 0;
    *(_BYTE *)(StartContext + 47) = (*(_DWORD *)(v6 + 1692) & 0x10) != 0;
    *(_BYTE *)(StartContext + 48) = (*(_DWORD *)(v6 + 1696) & 0x20) == 0;
    *(_BYTE *)(StartContext + 49) = (*(_DWORD *)(v6 + 1696) & 0x40) != 0;
    *(_BYTE *)(StartContext + 53) = (*(_DWORD *)(v6 + 3884) & 0x40) != 0;
    v11 = 14;
    if ( ((*(_DWORD *)(v6 + 1696) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v6 + 1696) >> 7) & 0xFu) < 0xE )
      v11 = (*(_DWORD *)(v6 + 1696) >> 7) & 0xF;
    *(_DWORD *)(StartContext + 204) = v11;
    *(_DWORD *)(StartContext + 128) = *(_DWORD *)(v6 + 2176);
    *(_BYTE *)(StartContext + 132) = *(_BYTE *)(v6 + 2266) != 0;
    *(_DWORD *)(StartContext + 136) = *(_DWORD *)(v6 + 2204);
    v12 = *(unsigned int *)(v6 + 248);
    *(_QWORD *)(StartContext + 56) = (unsigned int)v12;
    if ( (_DWORD)v12 )
    {
      v13 = 0;
      v14 = 0LL;
      v15 = (unsigned int)v12;
      do
      {
        v16 = *(unsigned __int16 *)(v14 + *(_QWORD *)(v6 + 2216));
        v14 += 48LL;
        v13 += v16;
        *(_DWORD *)(StartContext + 60) = v13;
        --v15;
      }
      while ( v15 );
    }
    v17 = 31;
    if ( *(_DWORD *)(v6 + 1688) < 0x1Fu )
      v17 = *(_DWORD *)(v6 + 1688);
    *(_DWORD *)(StartContext + 2444) = v17;
    v18 = 8 * v12;
    *(_DWORD *)(StartContext + 2168) ^= (*(_DWORD *)(StartContext + 2168) ^ (4 * *(_DWORD *)(v6 + 1692))) & 8;
    *(_DWORD *)(StartContext + 2168) ^= ((unsigned __int8)*(_DWORD *)(StartContext + 2168) ^ (unsigned __int8)(2 * *(_DWORD *)(v6 + 1692))) & 0x10;
    v19 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v12, 0x68536956u);
    *(_QWORD *)(StartContext + 240) = v19;
    if ( v19
      && (memset(v19, 0, v18),
          v22 = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x68536956u),
          (*(_QWORD *)(StartContext + 248) = v22) != 0LL) )
    {
      memset(v22, 0, v18);
      *(_DWORD *)(StartContext + 272) = 0;
      VidSchiReadGlobalConfiguration(StartContext);
      v23 = 1;
      v24 = *(_BYTE *)(StartContext + 2168) & 0x50;
      *(_DWORD *)(StartContext + 2176) = 5;
      if ( v24 == 80 )
        v23 = 3;
      *(_DWORD *)(StartContext + 2172) = v23;
      if ( !*(_DWORD *)(StartContext + 2180) && (*(_DWORD *)(v6 + 1692) & 0x40) == 0 )
        *(_DWORD *)(StartContext + 2180) = 1;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1040));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1144));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1248));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 280));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1888));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1912));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1896));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1904));
      v25 = (struct _KEVENT *)(StartContext + 1352);
      v26 = 4LL;
      do
      {
        memset(v25, 0, 0x38uLL);
        KeInitializeEvent(v25, SynchronizationEvent, 0);
        v25 = (struct _KEVENT *)((char *)v25 + 56);
        --v26;
      }
      while ( v26 );
      v27 = (struct _KEVENT *)(StartContext + 1576);
      v28 = 4LL;
      do
      {
        memset(v27, 0, 0x38uLL);
        KeInitializeEvent(v27, SynchronizationEvent, 0);
        v27 = (struct _KEVENT *)((char *)v27 + 56);
        --v28;
      }
      while ( v28 );
      Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, StartContext, 4LL);
      *(_QWORD *)(StartContext + 160) = Timer;
      if ( !Timer )
      {
LABEL_53:
        v59 = WdLogNewEntry5_WdWarning(v30);
        WdLogEvent5_WdWarning(v59);
        goto LABEL_46;
      }
      *(_QWORD *)(StartContext + 264) = StartContext + 256;
      *(_QWORD *)(StartContext + 256) = StartContext + 256;
      InitializeSListHead((PSLIST_HEADER)(StartContext + 1936));
      *(_QWORD *)(StartContext + 1960) = StartContext + 1952;
      *(_QWORD *)(StartContext + 1952) = StartContext + 1952;
      *(_QWORD *)(StartContext + 1808) = StartContext + 1800;
      *(_QWORD *)(StartContext + 1800) = StartContext + 1800;
      *(_QWORD *)(StartContext + 1824) = StartContext + 1816;
      *(_QWORD *)(StartContext + 1816) = StartContext + 1816;
      *(_QWORD *)(StartContext + 1840) = StartContext + 1832;
      *(_QWORD *)(StartContext + 1832) = StartContext + 1832;
      *(_QWORD *)(StartContext + 1856) = StartContext + 1848;
      *(_QWORD *)(StartContext + 1848) = StartContext + 1848;
      *(_QWORD *)(StartContext + 2976) = StartContext + 2968;
      *(_QWORD *)(StartContext + 2968) = StartContext + 2968;
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 2984));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 2992));
      *(_QWORD *)(StartContext + 1872) = StartContext + 1864;
      *(_QWORD *)(StartContext + 1864) = StartContext + 1864;
      *(_QWORD *)(StartContext + 992) = StartContext + 984;
      *(_QWORD *)(StartContext + 984) = StartContext + 984;
      *(_QWORD *)(StartContext + 1008) = StartContext + 1000;
      *(_QWORD *)(StartContext + 1000) = StartContext + 1000;
      *(_QWORD *)(StartContext + 1024) = StartContext + 1016;
      *(_QWORD *)(StartContext + 1016) = StartContext + 1016;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 2704));
      KeInitializeEvent((PRKEVENT)(StartContext + 2808), SynchronizationEvent, 0);
      *(_QWORD *)(StartContext + 2024) = StartContext;
      *(_QWORD *)(StartContext + 2016) = VidSchiControlVSyncThread;
      v31 = 0;
      *(_QWORD *)(StartContext + 2000) = 0LL;
      *(_QWORD *)(StartContext + 2080) = VidSchiDeferredVisibilityThread;
      *(_QWORD *)(StartContext + 2088) = v6;
      *(_QWORD *)(StartContext + 2064) = 0LL;
      *(_QWORD *)(StartContext + 3144) = StartContext + 3136;
      *(_QWORD *)(StartContext + 3136) = StartContext + 3136;
      if ( *(_DWORD *)(StartContext + 40) )
      {
        do
        {
          v32 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xEE20uLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v31 + 3008) = v32;
          if ( !v32 )
            goto LABEL_53;
          memset(v32, 0, 0xEE20uLL);
          v33 = 0;
          **(_DWORD **)(StartContext + 8LL * v31 + 3008) = 1852985430;
          *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + 23648LL) = -1;
          for ( *(_BYTE *)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + 56804LL) = 1;
                v33 < *(_DWORD *)(StartContext + 128);
                *v35 = v35 )
          {
            v34 = 280LL * v33++;
            v35 = (_QWORD *)(v34 + *(_QWORD *)(StartContext + 8LL * v31 + 3008) + 200LL);
            v35[1] = v35;
          }
          v36 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v31 + 6056) = v36;
          if ( !v36 )
            goto LABEL_53;
          *(_QWORD *)v36 = 0LL;
          v36[2] = 0;
          InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + 24016LL));
          v37 = 0LL;
          v38 = 0LL;
          v39 = 64LL;
          do
          {
            *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + v37 + 24032) = 1701790550;
            v40 = *(union _SLIST_HEADER **)(StartContext + 8LL * v31 + 3008);
            ExpInterlockedPushEntrySList(v40 + 1501, (PSLIST_ENTRY)&v40[v38 + 1503]);
            v38 += 32LL;
            v37 += 512LL;
            --v39;
          }
          while ( v39 );
          *(_QWORD *)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + 56816LL) = 0LL;
          *(_WORD *)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + 60944LL) = 0;
          InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + 56832LL));
          v41 = 0LL;
          v42 = 0LL;
          v43 = 64LL;
          do
          {
            *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v31 + 3008) + v41 + 56848) = 1751864408;
            v44 = *(union _SLIST_HEADER **)(StartContext + 8LL * v31 + 3008);
            ExpInterlockedPushEntrySList(v44 + 3552, (PSLIST_ENTRY)&v44[v42 + 3554]);
            v42 += 4LL;
            v41 += 64LL;
            --v43;
          }
          while ( v43 );
        }
        while ( ++v31 < *(_DWORD *)(StartContext + 40) );
      }
      v45 = 0;
      v46 = 0;
      if ( *(_DWORD *)(StartContext + 56) )
      {
        while ( 1 )
        {
          v47 = 0;
          v48 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2216) + 48LL * v46);
          *(_BYTE *)(StartContext + v46 + 64) = v45;
          if ( v48 )
            break;
LABEL_40:
          if ( ++v46 >= *(_DWORD *)(StartContext + 56) )
            goto LABEL_41;
        }
        while ( 1 )
        {
          Node = VidSchiCreateNode(StartContext, v46, v47, v45);
          *(_QWORD *)(StartContext + 8LL * v45 + 424) = Node;
          if ( !Node )
            break;
          if ( (int)VidSchiInitializeNode(Node) < 0 )
            goto LABEL_46;
          ++v45;
          if ( ++v47 >= v48 )
            goto LABEL_40;
        }
        v57 = WdLogNewEntry5_WdAssertion(v45, v50);
        *(_QWORD *)(v57 + 32) = v45;
      }
      else
      {
LABEL_41:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v51 = PsCreateSystemThread(
                &ThreadHandle,
                0x1FFFFFu,
                &ObjectAttributes,
                0LL,
                0LL,
                VidSchiWorkerThread,
                (PVOID)StartContext);
        v54 = v51;
        if ( v51 >= 0 )
        {
          VidSchiRequestSchedulerStatus(StartContext, 1LL, 1LL);
          ObfReferenceObject(*(PVOID *)(StartContext + 144));
          ZwClose(ThreadHandle);
          return StartContext;
        }
        v57 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v57 + 32) = v54;
      }
    }
    else
    {
      v57 = WdLogNewEntry5_WdAssertion(v21, v20);
    }
    *(_QWORD *)(v57 + 24) = v6;
    WdLogEvent5_WdAssertion(v57);
LABEL_46:
    VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)StartContext);
    return 0LL;
  }
  v56 = WdLogNewEntry5_WdAssertion(0LL, a2);
  WdLogEvent5_WdAssertion(v56);
  return 0LL;
}
