/*
 * XREFs of ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0060CFC
 * Callers:
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F60 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C009F530 (-VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKM.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066190 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C006DA40 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C0098B50 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        bool a5)
{
  __int64 v6; // rbx
  struct VIDMM_PAGING_QUEUE **v10; // rsi
  struct VIDMM_PAGING_QUEUE *v11; // r13
  struct VIDMM_PAGING_QUEUE **NewPacket; // rbx
  struct VIDMM_PAGING_QUEUE *v13; // rax
  __int64 v14; // rcx
  char v15; // si
  bool v16; // di
  unsigned __int64 v18; // [rsp+48h] [rbp-21h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v19; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v22; // [rsp+68h] [rbp-1h] BYREF
  PVOID Object; // [rsp+70h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v25; // [rsp+D8h] [rbp+6Fh] BYREF

  v25 = 0;
  v6 = *((_QWORD *)a3 + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 128, 0LL);
  v10 = (struct VIDMM_PAGING_QUEUE **)((char *)a3 + 16);
  *(_QWORD *)(v6 + 136) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a3 + 13);
  *((_QWORD *)a3 + 13) = (char *)v11 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a3 + 2);
  if ( NewPacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a3 + 16)
    || (v13 = *NewPacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPacket + 1) != NewPacket) )
  {
    __fastfail(3u);
  }
  *v10 = v13;
  *((_QWORD *)v13 + 1) = v10;
  v14 = *((_QWORD *)a3 + 10) + 128LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket != v10
    || (NewPacket = (struct VIDMM_PAGING_QUEUE **)operator new[](0xA0uLL, 0x38346956u, PagedPool)) != 0LL )
  {
    memset(NewPacket, 0, 0xA0uLL);
    NewPacket[5] = v11;
  }
  else
  {
    NewPacket = 0LL;
  }
  if ( !a4 || *(_DWORD *)a2 == 118 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    if ( !NewPacket )
    {
      v18 = *((_QWORD *)a3 + 12);
      v19 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v19, &v18, 1u, 0LL);
      NewPacket = (struct VIDMM_PAGING_QUEUE **)VIDMM_PAGING_QUEUE::GetNewPacket(a3);
    }
  }
  *((_BYTE *)NewPacket + 24) = 0;
  *((_BYTE *)NewPacket + 25) = v15;
  *((_OWORD *)NewPacket + 3) = *(_OWORD *)a2;
  *((_OWORD *)NewPacket + 4) = *((_OWORD *)a2 + 1);
  *((_OWORD *)NewPacket + 5) = *((_OWORD *)a2 + 2);
  *((_OWORD *)NewPacket + 6) = *((_OWORD *)a2 + 3);
  *((_OWORD *)NewPacket + 7) = *((_OWORD *)a2 + 4);
  NewPacket[16] = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 10);
  if ( !v15 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    NewPacket[7] = (struct VIDMM_PAGING_QUEUE *)&Event;
  }
  v16 = a5;
  if ( a5 )
  {
    v25 = -1073741776;
    NewPacket[10] = (struct VIDMM_PAGING_QUEUE *)&v25;
  }
  VIDMM_PAGING_QUEUE::AppendReadyPacket(a3, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, &v20);
  if ( v16 )
  {
    if ( v15 )
    {
      v21 = v20;
      v22 = a4;
      VIDMM_GLOBAL::WaitForFences(this, &v22, &v21, 1u, 0LL);
    }
    else
    {
      Object = &Event;
      KeWaitForMultipleObjects(1u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    }
  }
  return v25;
}
