/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C004CD60
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C00018B0 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C00023DC (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002678 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C0012110 (VidSchDestroyDeviceSyncObject.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DE58 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0069710 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     VidSchDestroySyncObject @ 0x1C006B960 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(VIDMM_DEVICE *this)
{
  __int64 i; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  VIDMM_GLOBAL *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *j; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  VIDMM_DEVICE *v12; // rbx
  __int64 v13; // rbx
  VIDMM_DEVICE **v14; // rdx
  VIDMM_DEVICE **v15; // rax
  void *v16; // rcx
  __int64 k; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  VIDMM_DEVICE_PAGING_QUEUE *v30; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v31; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v32; // rcx
  _BYTE v33[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v34[32]; // [rsp+38h] [rbp-20h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 15); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 9);
    if ( v3 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v3 + 160 * i));
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v4 + 160 * i));
    v5 = *((_QWORD *)this + 11);
    if ( v5 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v5 + 160 * i));
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v33,
    (struct _KTHREAD **)(*(_QWORD *)this + 41536LL));
  if ( *((_QWORD *)this + 22) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)this + 11);
  v7 = (_QWORD *)(*(_QWORD *)this + 41576LL);
  for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
  {
    if ( this == (VIDMM_DEVICE *)j[7] )
      j[7] = 0LL;
  }
  KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 152LL), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  v9 = **(_QWORD **)this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v9 + 8) )
  {
    v10 = v9 + 128;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9 + 128, 0LL);
    *(_QWORD *)(v9 + 136) = KeGetCurrentThread();
    v11 = v9 + 128;
    v12 = *(VIDMM_DEVICE **)(v9 + 16);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    if ( this == v12 )
    {
      v13 = **(_QWORD **)this;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13 + 48, 0LL);
      *(_QWORD *)(v13 + 56) = KeGetCurrentThread();
      *(_QWORD *)(v13 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v34,
    (struct _KTHREAD **)(*(_QWORD *)this + 41536LL));
  v14 = (VIDMM_DEVICE **)*((_QWORD *)this + 24);
  v15 = (VIDMM_DEVICE **)*((_QWORD *)this + 25);
  if ( v14[1] != (VIDMM_DEVICE *)((char *)this + 192) || *v15 != (VIDMM_DEVICE *)((char *)this + 192) )
    __fastfail(3u);
  *v15 = (VIDMM_DEVICE *)v14;
  v14[1] = (VIDMM_DEVICE *)v15;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  v16 = (void *)*((_QWORD *)this + 5);
  if ( v16 )
    operator delete(v16);
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 15); k = (unsigned int)(k + 1) )
  {
    v18 = *((_QWORD *)this + 9);
    if ( v18 )
    {
      v19 = v18 + 160 * k;
      v20 = *(_QWORD *)(v19 + 152);
      if ( v20 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v19 + 136) + 32LL);
        if ( v21 )
          VidSchDestroyDeviceSyncObject(v20, v21, 1, 0LL);
        VidSchDestroySyncObject(*(PVOID *)(v19 + 152));
      }
    }
    v22 = *((_QWORD *)this + 10);
    if ( v22 )
    {
      v23 = v22 + 160 * k;
      v24 = *(_QWORD *)(v23 + 152);
      if ( v24 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v23 + 136) + 32LL);
        if ( v25 )
          VidSchDestroyDeviceSyncObject(v24, v25, 1, 0LL);
        VidSchDestroySyncObject(*(PVOID *)(v23 + 152));
      }
    }
    v26 = *((_QWORD *)this + 11);
    if ( v26 )
    {
      v27 = v26 + 160 * k;
      v28 = *(_QWORD *)(v27 + 152);
      if ( v28 )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(v27 + 136) + 32LL);
        if ( v29 )
          VidSchDestroyDeviceSyncObject(v28, v29, 1, 0LL);
        VidSchDestroySyncObject(*(PVOID *)(v27 + 152));
      }
    }
  }
  v30 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 9);
  if ( v30 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v30);
  *((_QWORD *)this + 9) = 0LL;
  v31 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  if ( v31 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v31);
  *((_QWORD *)this + 10) = 0LL;
  v32 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 11);
  if ( v32 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v32);
  *((_QWORD *)this + 11) = 0LL;
  if ( (*((_BYTE *)this + 50) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)this + 1), *(struct VIDMM_GLOBAL **)this);
}
