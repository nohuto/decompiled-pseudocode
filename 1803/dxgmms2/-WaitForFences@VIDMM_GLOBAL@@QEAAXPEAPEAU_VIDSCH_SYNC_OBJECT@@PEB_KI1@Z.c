/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C006AA20
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C0023120 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0060EC0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00649C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C006511C (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00655F0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A05A0 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00A5680 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0005400 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C000DF10 (VidSchSubmitWaitFromCpu.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        char *a3,
        unsigned int a4,
        char *a5)
{
  char *v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  unsigned __int64 *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r14
  _BYTE *PoolWithTag; // rax
  _BYTE *v16; // rax
  size_t v17; // rdi
  char *v18; // r8
  char *v19; // r9
  signed __int64 v20; // r15
  signed __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  PRKEVENT Event; // [rsp+50h] [rbp-71h] BYREF
  PVOID P; // [rsp+58h] [rbp-69h]
  _BYTE v26[16]; // [rsp+60h] [rbp-61h] BYREF
  int v27; // [rsp+70h] [rbp-51h]
  char *v28; // [rsp+78h] [rbp-49h]
  int v29; // [rsp+80h] [rbp-41h] BYREF
  __int64 v30; // [rsp+88h] [rbp-39h]
  __int64 v31; // [rsp+90h] [rbp-31h]
  int v32; // [rsp+98h] [rbp-29h]
  __int128 v33; // [rsp+A0h] [rbp-21h]
  PVOID v34; // [rsp+B0h] [rbp-11h]
  _BYTE v35[16]; // [rsp+B8h] [rbp-9h] BYREF
  int v36; // [rsp+C8h] [rbp+7h]

  v5 = a5;
  v6 = a4;
  Event = 0LL;
  v34 = 0LL;
  v36 = 0;
  LODWORD(v10) = a4;
  P = 0LL;
  v27 = 0;
  if ( !a5 || *((_BYTE *)this + 4616) )
    goto LABEL_3;
  v14 = a4;
  if ( a4 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      v28 = 0LL;
      goto LABEL_20;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a4, 0x6E795356u);
  }
  else
  {
    PoolWithTag = v35;
  }
  v34 = PoolWithTag;
  v36 = v6;
  if ( PoolWithTag && (_DWORD)v6 )
    memset(PoolWithTag, 0, 8 * v6);
  v28 = (char *)v34;
LABEL_20:
  if ( (unsigned int)v6 <= 2 )
  {
    v16 = v26;
    v17 = 8 * v6;
    goto LABEL_22;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    v17 = 8 * v6;
    v16 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v6, 0x6E795356u);
LABEL_22:
    P = v16;
    v27 = v6;
    if ( v16 && (_DWORD)v6 )
      memset(v16, 0, v17);
    v18 = (char *)P;
    goto LABEL_26;
  }
  v18 = 0LL;
LABEL_26:
  v19 = v28;
  if ( !v28 || !v18 )
    goto LABEL_37;
  v10 = 0LL;
  if ( (_DWORD)v6 )
  {
    v20 = a3 - a5;
    v21 = (char *)a2 - a5;
    do
    {
      v22 = *(_QWORD *)&v5[v20];
      if ( *(_QWORD *)v5 <= v22 || *(_QWORD *)v5 - v22 < 0x7FFFFFFF )
      {
        v23 = 8 * v10;
        v10 = (unsigned int)(v10 + 1);
        *(_QWORD *)&v19[v23] = v22;
        *(_QWORD *)&v18[v23] = *(_QWORD *)&v5[v21];
      }
      v5 += 8;
      --v14;
    }
    while ( v14 );
  }
  a3 = (char *)v34;
  a2 = (struct _VIDSCH_SYNC_OBJECT **)P;
LABEL_3:
  v11 = 0;
  if ( !(_DWORD)v10 )
    goto LABEL_8;
  v12 = (unsigned __int64 *)a3;
  while ( 1 )
  {
    v13 = *(unsigned __int64 *)((char *)v12 + (char *)a2 - a3);
    if ( v13 )
    {
      if ( !VidSchIsMonitoredFenceSignaled(v13, *v12) )
        break;
    }
    ++v11;
    ++v12;
    if ( v11 >= (unsigned int)v10 )
      goto LABEL_8;
  }
  v29 = 48;
  v30 = 0LL;
  v32 = 512;
  v31 = 0LL;
  v33 = 0LL;
  if ( (int)ObCreateObject(0LL, ExEventObjectType, &v29, 0LL, 0LL, 24, 0, 0, &Event) >= 0 )
  {
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    ObfReferenceObject(Event);
    if ( (int)VidSchSubmitWaitFromCpu(
                v10,
                (__int64)a2,
                (__int64 *)a3,
                (__int64)Event,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 232LL),
                0LL) < 0 )
      ObfDereferenceObject(Event);
    else
      KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  }
LABEL_37:
  if ( Event )
    ObfDereferenceObject(Event);
LABEL_8:
  if ( P != v26 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v27 = 0;
  if ( v34 != v35 )
  {
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
  }
}
