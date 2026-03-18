/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0075EA8
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0006B14 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C00032B4 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0005084 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00562D8 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00732AC (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073EE0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(VIDMM_DEVICE *this)
{
  __int64 i; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  __int64 *v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rbx
  VIDMM_DEVICE **v15; // rdx
  VIDMM_DEVICE **v16; // rcx
  void *v17; // rcx
  __int64 j; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  VIDMM_DEVICE_PAGING_QUEUE *v23; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v24; // rcx
  VIDMM_DEVICE_PAGING_QUEUE *v25; // rcx
  __int64 v26; // rbx
  _BYTE v27[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v28[32]; // [rsp+38h] [rbp-20h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 15); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 9);
    if ( v3 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v3 + 160 * i));
    v4 = *((_QWORD *)this + 10);
    v5 = 160 * i;
    if ( v4 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v4 + v5));
    v6 = *((_QWORD *)this + 11);
    if ( v6 )
      VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(v6 + v5));
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v27,
    (struct _KTHREAD **)(*(_QWORD *)this + 41816LL));
  if ( *((_QWORD *)this + 22) )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, (struct _LIST_ENTRY *)this + 11);
  v8 = *(__int64 **)this;
  v9 = (_QWORD *)(*(_QWORD *)this + 41856LL);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    do
    {
      if ( this == (VIDMM_DEVICE *)v10[7] )
        v10[7] = 0LL;
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != v9 );
    v8 = *(__int64 **)this;
  }
  KeSetEvent(*(PRKEVENT *)(*v8 + 152), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  v11 = **(_QWORD **)this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 8) )
  {
    v12 = v11 + 128;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 128, 0LL);
    *(_QWORD *)(v11 + 136) = KeGetCurrentThread();
    v13 = v11 + 128;
    v14 = *(VIDMM_DEVICE **)(v11 + 16);
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( this == v14 )
    {
      v26 = **(_QWORD **)this;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v26 + 48, 0LL);
      *(_QWORD *)(v26 + 56) = KeGetCurrentThread();
      *(_QWORD *)(v26 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v26 + 48, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
    (struct _KTHREAD **)(*(_QWORD *)this + 41816LL));
  v15 = (VIDMM_DEVICE **)*((_QWORD *)this + 24);
  if ( v15[1] != (VIDMM_DEVICE *)((char *)this + 192)
    || (v16 = (VIDMM_DEVICE **)*((_QWORD *)this + 25), *v16 != (VIDMM_DEVICE *)((char *)this + 192)) )
  {
    __fastfail(3u);
  }
  *v16 = (VIDMM_DEVICE *)v15;
  v15[1] = (VIDMM_DEVICE *)v16;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  v17 = (void *)*((_QWORD *)this + 5);
  if ( v17 )
    operator delete(v17);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 15); j = (unsigned int)(j + 1) )
  {
    v19 = *((_QWORD *)this + 9);
    if ( v19 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v19 + 160 * j));
    v20 = *((_QWORD *)this + 10);
    v21 = 160 * j;
    if ( v20 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v20 + v21));
    v22 = *((_QWORD *)this + 11);
    if ( v22 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)(v22 + v21));
  }
  v23 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 9);
  if ( v23 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v23);
  *((_QWORD *)this + 9) = 0LL;
  v24 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 10);
  if ( v24 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v24);
  *((_QWORD *)this + 10) = 0LL;
  v25 = (VIDMM_DEVICE_PAGING_QUEUE *)*((_QWORD *)this + 11);
  if ( v25 )
    VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(v25);
  *((_QWORD *)this + 11) = 0LL;
  if ( (*((_BYTE *)this + 50) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)this + 1), *(struct VIDMM_GLOBAL **)this);
}
