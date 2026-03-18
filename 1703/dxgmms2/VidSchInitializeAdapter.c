/*
 * XREFs of VidSchInitializeAdapter @ 0x1C00708F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C006FA64 (VidSchiReadGlobalConfiguration.c)
 *     VidSchiInitializeNode @ 0x1C0071084 (VidSchiInitializeNode.c)
 *     VidSchiCreateNode @ 0x1C0071134 (VidSchiCreateNode.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0071334 (VidSchiRequestSchedulerStatus.c)
 *     VidSchTerminateAdapter @ 0x1C00ACAA0 (VidSchTerminateAdapter.c)
 */

__int64 __fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  PVOID PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 StartContext; // rbx
  int v11; // eax
  __int64 v12; // r10
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // ecx
  size_t v18; // rsi
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID v22; // rax
  char v23; // cl
  int v24; // eax
  struct _KEVENT *v25; // rsi
  __int64 v26; // rbp
  struct _KEVENT *v27; // rsi
  __int64 v28; // rbp
  __int64 Timer; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r15d
  PVOID v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  _DWORD *v37; // rax
  __int64 v38; // rbp
  __int64 v39; // r14
  __int64 v40; // r12
  union _SLIST_HEADER *v41; // rcx
  __int64 v42; // rbp
  __int64 v43; // r14
  __int64 v44; // r12
  union _SLIST_HEADER *v45; // rcx
  unsigned int v46; // esi
  unsigned int v47; // ebp
  unsigned int v48; // r14d
  unsigned int v49; // r15d
  __int64 Node; // rax
  __int64 v51; // rdx
  NTSTATUS v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-58h] BYREF
  void *ThreadHandle; // [rsp+A0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1640uLL, 0x68536956u);
    StartContext = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v59 = WdLogNewEntry5_WdWarning(v9, v8);
      WdLogEvent5_WdWarning(v59);
      return 0LL;
    }
    memset(PoolWithTag, 0, 0x1640uLL);
    *(_DWORD *)StartContext = 1818380118;
    *(_DWORD *)(StartContext + 4) = *(_DWORD *)(v6 + 200);
    *(_QWORD *)(StartContext + 8) = a1;
    *(_QWORD *)(StartContext + 16) = v6;
    *(_QWORD *)(StartContext + 24) = a2;
    *(_DWORD *)(StartContext + 32) = *(_DWORD *)(v6 + 1644);
    *(_DWORD *)(StartContext + 36) = 7;
    *(_QWORD *)(StartContext + 5672) = a3;
    v11 = *(_DWORD *)(v6 + 1160);
    *(_DWORD *)(StartContext + 40) = v11;
    if ( !v11 )
    {
      *(_DWORD *)(StartContext + 40) = 1;
      *(_BYTE *)(StartContext + 50) = 1;
    }
    if ( *(_BYTE *)(v6 + 2151) )
      *(_BYTE *)(StartContext + 51) = 1;
    *(_BYTE *)(StartContext + 45) = (*(_DWORD *)(v6 + 1672) & 2) != 0;
    *(_BYTE *)(StartContext + 44) = *(_BYTE *)(v6 + 2146);
    *(_BYTE *)(StartContext + 46) = (*(_DWORD *)(v6 + 1672) & 0x10) != 0;
    *(_BYTE *)(StartContext + 47) = (*(_DWORD *)(v6 + 1668) & 0x10) != 0;
    *(_BYTE *)(StartContext + 48) = (*(_DWORD *)(v6 + 1672) & 0x20) == 0;
    *(_BYTE *)(StartContext + 49) = (*(_DWORD *)(v6 + 1672) & 0x40) != 0;
    *(_DWORD *)(StartContext + 128) = *(_DWORD *)(v6 + 2152);
    *(_BYTE *)(StartContext + 132) = *(_BYTE *)(v6 + 2242) != 0;
    *(_DWORD *)(StartContext + 136) = *(_DWORD *)(v6 + 2180);
    v12 = *(unsigned int *)(v6 + 248);
    *(_QWORD *)(StartContext + 56) = (unsigned int)v12;
    if ( (_DWORD)v12 )
    {
      v13 = 0;
      v14 = 0LL;
      v15 = (unsigned int)v12;
      do
      {
        v16 = *(unsigned __int16 *)(v14 + *(_QWORD *)(v6 + 2192));
        v14 += 48LL;
        v13 += v16;
        *(_DWORD *)(StartContext + 60) = v13;
        --v15;
      }
      while ( v15 );
    }
    v17 = 31;
    if ( *(_DWORD *)(v6 + 1664) < 0x1Fu )
      v17 = *(_DWORD *)(v6 + 1664);
    *(_DWORD *)(StartContext + 2432) = v17;
    v18 = 8 * v12;
    *(_DWORD *)(StartContext + 2152) ^= (*(_DWORD *)(StartContext + 2152) ^ (8 * *(_DWORD *)(v6 + 1668))) & 0x10;
    *(_DWORD *)(StartContext + 2152) ^= ((unsigned __int8)*(_DWORD *)(StartContext + 2152) ^ (unsigned __int8)(4 * *(_DWORD *)(v6 + 1668))) & 0x20;
    v19 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v12, 0x68536956u);
    *(_QWORD *)(StartContext + 232) = v19;
    if ( v19
      && (memset(v19, 0, v18),
          v22 = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x68536956u),
          (*(_QWORD *)(StartContext + 240) = v22) != 0LL) )
    {
      memset(v22, 0, v18);
      *(_DWORD *)(StartContext + 264) = 0;
      VidSchiReadGlobalConfiguration(StartContext);
      v23 = *(_BYTE *)(StartContext + 2152) & 0xA0;
      *(_DWORD *)(StartContext + 2160) = 5;
      *(_DWORD *)(StartContext + 2164) = 31;
      v24 = 1;
      if ( v23 == -96 )
        v24 = 3;
      *(_DWORD *)(StartContext + 2152) |= 8u;
      *(_DWORD *)(StartContext + 2156) = v24;
      if ( !*(_DWORD *)(StartContext + 2168) && (*(_DWORD *)(v6 + 1668) & 0x40) == 0 )
        *(_DWORD *)(StartContext + 2168) = 1;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1032));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1136));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 1240));
      ExInitializeResourceLite((PERESOURCE)(StartContext + 272));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1880));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1904));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1888));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 1896));
      v25 = (struct _KEVENT *)(StartContext + 1344);
      v26 = 4LL;
      do
      {
        memset(v25, 0, 0x38uLL);
        KeInitializeEvent(v25, SynchronizationEvent, 0);
        v25 = (struct _KEVENT *)((char *)v25 + 56);
        --v26;
      }
      while ( v26 );
      v27 = (struct _KEVENT *)(StartContext + 1568);
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
LABEL_49:
        v60 = WdLogNewEntry5_WdWarning(v31, v30);
        WdLogEvent5_WdWarning(v60);
        goto LABEL_45;
      }
      *(_QWORD *)(StartContext + 256) = StartContext + 248;
      *(_QWORD *)(StartContext + 248) = StartContext + 248;
      InitializeSListHead((PSLIST_HEADER)(StartContext + 1920));
      *(_QWORD *)(StartContext + 1944) = StartContext + 1936;
      *(_QWORD *)(StartContext + 1936) = StartContext + 1936;
      *(_QWORD *)(StartContext + 1800) = StartContext + 1792;
      *(_QWORD *)(StartContext + 1792) = StartContext + 1792;
      *(_QWORD *)(StartContext + 1816) = StartContext + 1808;
      *(_QWORD *)(StartContext + 1808) = StartContext + 1808;
      *(_QWORD *)(StartContext + 1832) = StartContext + 1824;
      *(_QWORD *)(StartContext + 1824) = StartContext + 1824;
      *(_QWORD *)(StartContext + 1848) = StartContext + 1840;
      *(_QWORD *)(StartContext + 1840) = StartContext + 1840;
      *(_QWORD *)(StartContext + 2960) = StartContext + 2952;
      *(_QWORD *)(StartContext + 2952) = StartContext + 2952;
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 2968));
      KeInitializeSpinLock((PKSPIN_LOCK)(StartContext + 2976));
      *(_QWORD *)(StartContext + 1864) = StartContext + 1856;
      *(_QWORD *)(StartContext + 1856) = StartContext + 1856;
      *(_QWORD *)(StartContext + 1000) = StartContext + 992;
      *(_QWORD *)(StartContext + 992) = StartContext + 992;
      *(_QWORD *)(StartContext + 1016) = StartContext + 1008;
      *(_QWORD *)(StartContext + 1008) = StartContext + 1008;
      ExInitializeResourceLite((PERESOURCE)(StartContext + 2688));
      KeInitializeEvent((PRKEVENT)(StartContext + 2792), SynchronizationEvent, 0);
      *(_QWORD *)(StartContext + 2008) = StartContext;
      *(_QWORD *)(StartContext + 2000) = VidSchiControlVSyncThread;
      v32 = 0;
      *(_QWORD *)(StartContext + 1984) = 0LL;
      *(_QWORD *)(StartContext + 2064) = VidSchiDeferredVisibilityThread;
      *(_QWORD *)(StartContext + 2072) = v6;
      *(_QWORD *)(StartContext + 2048) = 0LL;
      *(_QWORD *)(StartContext + 3128) = StartContext + 3120;
      *(_QWORD *)(StartContext + 3120) = StartContext + 3120;
      if ( *(_DWORD *)(StartContext + 40) )
      {
        do
        {
          v33 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xC780uLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v32 + 2992) = v33;
          if ( !v33 )
            goto LABEL_49;
          memset(v33, 0, 0xC780uLL);
          v34 = 0;
          **(_DWORD **)(StartContext + 8LL * v32 + 2992) = 1852985430;
          *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + 18896LL) = -1;
          for ( *(_BYTE *)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + 46932LL) = 1;
                v34 < *(_DWORD *)(StartContext + 128);
                *v36 = v36 )
          {
            v35 = 272LL * v34++;
            v36 = (_QWORD *)(v35 + *(_QWORD *)(StartContext + 8LL * v32 + 2992) + 176LL);
            v36[1] = v36;
          }
          v37 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
          *(_QWORD *)(StartContext + 8LL * v32 + 5544) = v37;
          if ( !v37 )
            goto LABEL_49;
          *(_QWORD *)v37 = 0LL;
          v37[2] = 0;
          InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + 19264LL));
          v38 = 0LL;
          v39 = 0LL;
          v40 = 64LL;
          do
          {
            *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + v38 + 19280) = 1701790550;
            v41 = *(union _SLIST_HEADER **)(StartContext + 8LL * v32 + 2992);
            ExpInterlockedPushEntrySList(v41 + 1204, (PSLIST_ENTRY)&v41[v39 + 1206]);
            v39 += 27LL;
            v38 += 432LL;
            --v40;
          }
          while ( v40 );
          *(_QWORD *)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + 46936LL) = 0LL;
          *(_WORD *)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + 51056LL) = 0;
          InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + 46944LL));
          v42 = 0LL;
          v43 = 0LL;
          v44 = 64LL;
          do
          {
            *(_DWORD *)(*(_QWORD *)(StartContext + 8LL * v32 + 2992) + v42 + 46960) = 1751864408;
            v45 = *(union _SLIST_HEADER **)(StartContext + 8LL * v32 + 2992);
            ExpInterlockedPushEntrySList(v45 + 2934, (PSLIST_ENTRY)&v45[v43 + 2936]);
            v43 += 4LL;
            v42 += 64LL;
            --v44;
          }
          while ( v44 );
        }
        while ( ++v32 < *(_DWORD *)(StartContext + 40) );
      }
      v46 = 0;
      v47 = 0;
      if ( *(_DWORD *)(StartContext + 56) )
      {
        while ( 1 )
        {
          v48 = 0;
          v49 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2192) + 48LL * v47);
          *(_BYTE *)(StartContext + v47 + 64) = v46;
          if ( v49 )
            break;
LABEL_39:
          if ( ++v47 >= *(_DWORD *)(StartContext + 56) )
            goto LABEL_40;
        }
        while ( 1 )
        {
          Node = VidSchiCreateNode(StartContext, v47, v48, v46);
          *(_QWORD *)(StartContext + 8LL * v46 + 416) = Node;
          if ( !Node )
            break;
          if ( (int)VidSchiInitializeNode(Node) < 0 )
            goto LABEL_45;
          ++v46;
          if ( ++v48 >= v49 )
            goto LABEL_39;
        }
        v58 = WdLogNewEntry5_WdAssertion(v46, v51);
        *(_QWORD *)(v58 + 32) = v46;
      }
      else
      {
LABEL_40:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v52 = PsCreateSystemThread(
                &ThreadHandle,
                0x1FFFFFu,
                &ObjectAttributes,
                0LL,
                0LL,
                VidSchiWorkerThread,
                (PVOID)StartContext);
        v55 = v52;
        if ( v52 >= 0 )
        {
          VidSchiRequestSchedulerStatus(StartContext, 1LL, 1LL);
          ObfReferenceObject(*(PVOID *)(StartContext + 144));
          ZwClose(ThreadHandle);
          return StartContext;
        }
        v58 = WdLogNewEntry5_WdAssertion(v54, v53);
        *(_QWORD *)(v58 + 32) = v55;
      }
    }
    else
    {
      v58 = WdLogNewEntry5_WdAssertion(v21, v20);
    }
    *(_QWORD *)(v58 + 24) = v6;
    WdLogEvent5_WdAssertion(v58);
LABEL_45:
    VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)StartContext);
    return 0LL;
  }
  v57 = WdLogNewEntry5_WdAssertion(0LL, a2);
  WdLogEvent5_WdAssertion(v57);
  return 0LL;
}
