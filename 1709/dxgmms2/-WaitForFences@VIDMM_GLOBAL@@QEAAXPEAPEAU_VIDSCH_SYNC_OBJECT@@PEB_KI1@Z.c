/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066190
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C00168E0 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C005C730 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0060CFC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0061210 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009AD0C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C009EFC0 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00022B0 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C000CC40 (VidSchSubmitWaitFromCpu.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        char *a3,
        unsigned int a4,
        char *a5)
{
  char *v5; // rdi
  char *v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v11; // rsi
  _BYTE *PoolWithTag; // rax
  _BYTE *v13; // rax
  char *v14; // r9
  signed __int64 v15; // r14
  unsigned __int64 v16; // r8
  signed __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned int v19; // ebx
  unsigned __int64 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  PRKEVENT Event; // [rsp+50h] [rbp-61h] BYREF
  PVOID P; // [rsp+58h] [rbp-59h]
  _BYTE v25[16]; // [rsp+60h] [rbp-51h] BYREF
  int v26; // [rsp+70h] [rbp-41h]
  int v27; // [rsp+78h] [rbp-39h] BYREF
  __int64 v28; // [rsp+80h] [rbp-31h]
  __int64 v29; // [rsp+88h] [rbp-29h]
  int v30; // [rsp+90h] [rbp-21h]
  __int128 v31; // [rsp+98h] [rbp-19h]
  PVOID v32; // [rsp+A8h] [rbp-9h]
  _BYTE v33[16]; // [rsp+B0h] [rbp-1h] BYREF
  int v34; // [rsp+C0h] [rbp+Fh]

  v5 = a5;
  v6 = 0LL;
  v7 = a4;
  Event = 0LL;
  v32 = 0LL;
  v34 = 0;
  LODWORD(v11) = a4;
  P = 0LL;
  v26 = 0;
  if ( !a5 || *((_BYTE *)this + 4616) )
    goto LABEL_21;
  if ( a4 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
      goto LABEL_8;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a4, 0x6E795356u);
  }
  else
  {
    PoolWithTag = v33;
  }
  v32 = PoolWithTag;
  v34 = v7;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8 * v7);
  v6 = (char *)v32;
LABEL_8:
  if ( (unsigned int)v7 <= 2 )
  {
    v13 = v25;
LABEL_10:
    P = v13;
    v26 = v7;
    if ( v13 )
      memset(v13, 0, 8 * v7);
    v14 = (char *)P;
    goto LABEL_13;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v7 >= 8 )
  {
    v13 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v7, 0x6E795356u);
    goto LABEL_10;
  }
  v14 = 0LL;
LABEL_13:
  if ( !v6 || !v14 )
    goto LABEL_31;
  v11 = 0LL;
  if ( (_DWORD)v7 )
  {
    v15 = a3 - a5;
    v16 = v7;
    v17 = (char *)a2 - a5;
    do
    {
      v18 = *(_QWORD *)&v5[v15];
      if ( *(_QWORD *)v5 <= v18 || *(_QWORD *)v5 - v18 < 0x7FFFFFFF )
      {
        v22 = 8 * v11;
        v11 = (unsigned int)(v11 + 1);
        *(_QWORD *)&v6[v22] = v18;
        *(_QWORD *)&v14[v22] = *(_QWORD *)&v5[v17];
      }
      v5 += 8;
      --v16;
    }
    while ( v16 );
  }
  a3 = (char *)v32;
  a2 = (struct _VIDSCH_SYNC_OBJECT **)P;
LABEL_21:
  v19 = 0;
  if ( !(_DWORD)v11 )
    goto LABEL_22;
  v20 = (unsigned __int64 *)a3;
  while ( 1 )
  {
    v21 = *(unsigned __int64 *)((char *)v20 + (char *)a2 - a3);
    if ( v21 )
    {
      if ( !VidSchIsMonitoredFenceSignaled(v21, *v20) )
        break;
    }
    ++v19;
    ++v20;
    if ( v19 >= (unsigned int)v11 )
      goto LABEL_22;
  }
  v27 = 48;
  v28 = 0LL;
  v30 = 512;
  v29 = 0LL;
  v31 = 0LL;
  if ( (int)ObCreateObject(0LL, ExEventObjectType, &v27, 0LL, 0LL, 24, 0, 0, &Event) >= 0 )
  {
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    ObfReferenceObject(Event);
    if ( (int)VidSchSubmitWaitFromCpu(
                v11,
                (__int64)a2,
                (__int64)a3,
                (__int64)Event,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 512LL) + 232LL),
                0LL) < 0 )
      ObfDereferenceObject(Event);
    else
      KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  }
LABEL_31:
  if ( Event )
    ObfDereferenceObject(Event);
LABEL_22:
  if ( P != v25 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v26 = 0;
  if ( v32 != v33 )
  {
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
  }
}
