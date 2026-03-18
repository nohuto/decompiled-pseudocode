/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005134C
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0001A04 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001D88 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C000E6A4 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C005284C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006D50C (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     VidSchDestroySyncObject @ 0x1C006F6F0 (VidSchDestroySyncObject.c)
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
  VIDMM_DEVICE **v13; // rdx
  VIDMM_DEVICE **v14; // rcx
  void *v15; // rcx
  __int64 k; // rbx
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // rdx
  VIDMM_DEVICE_PAGING_QUEUE *v22; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v23; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v24; // rcx
  __int64 v25; // rbx
  void *v26; // rcx
  _BYTE v27[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v28[32]; // [rsp+38h] [rbp-20h] BYREF

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
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v27,
    (struct _KTHREAD **)(*(_QWORD *)this + 41240LL));
  if ( *((_QWORD *)this + 22) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)this + 11);
  v7 = (_QWORD *)(*(_QWORD *)this + 41280LL);
  for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
  {
    if ( this == (VIDMM_DEVICE *)j[7] )
      j[7] = 0LL;
  }
  KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 152LL), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
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
      v25 = **(_QWORD **)this;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v25 + 48, 0LL);
      *(_QWORD *)(v25 + 56) = KeGetCurrentThread();
      *(_QWORD *)(v25 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v25 + 48, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
    (struct _KTHREAD **)(*(_QWORD *)this + 41240LL));
  v13 = (VIDMM_DEVICE **)*((_QWORD *)this + 24);
  if ( v13[1] != (VIDMM_DEVICE *)((char *)this + 192)
    || (v14 = (VIDMM_DEVICE **)*((_QWORD *)this + 25), *v14 != (VIDMM_DEVICE *)((char *)this + 192)) )
  {
    __fastfail(3u);
  }
  *v14 = (VIDMM_DEVICE *)v13;
  v13[1] = (VIDMM_DEVICE *)v14;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  v15 = (void *)*((_QWORD *)this + 5);
  if ( v15 )
    operator delete(v15);
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 15); k = (unsigned int)(k + 1) )
  {
    v17 = *((_QWORD *)this + 9);
    if ( v17 )
    {
      v18 = *(void **)(160 * k + v17 + 152);
      if ( v18 )
        VidSchDestroySyncObject(v18);
    }
    v19 = *((_QWORD *)this + 10);
    if ( v19 )
    {
      v20 = *(void **)(160 * k + v19 + 152);
      if ( v20 )
        VidSchDestroySyncObject(v20);
    }
    v21 = *((_QWORD *)this + 11);
    if ( v21 )
    {
      v26 = *(void **)(160 * k + v21 + 152);
      if ( v26 )
        VidSchDestroySyncObject(v26);
    }
  }
  v22 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 9);
  if ( v22 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v22);
  *((_QWORD *)this + 9) = 0LL;
  v23 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  if ( v23 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v23);
  *((_QWORD *)this + 10) = 0LL;
  v24 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 11);
  if ( v24 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v24);
  *((_QWORD *)this + 11) = 0LL;
  if ( (*((_BYTE *)this + 50) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)this + 1), *(struct VIDMM_GLOBAL **)this);
}
