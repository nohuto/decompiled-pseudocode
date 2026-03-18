/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00651A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  __int64 v4; // rcx
  struct _LOOKASIDE_LIST_EX *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  struct _LOOKASIDE_LIST_EX *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGPUSHLOCK *v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+50h] [rbp-18h]

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new[](0x18uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 180) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C003C620);
    v17 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v17 + 24) = 9157LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v5 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 146) = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C003C620);
    v17 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v17 + 24) = 9171LL;
    goto LABEL_13;
  }
  v8 = ExInitializeLookasideListEx(v5, 0LL, 0LL, PagedPool, 0, 0xA8uLL, 0x32316956u, 0);
  if ( v8 < 0 )
  {
    _InterlockedIncrement(&dword_1C003C620);
    v18 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v18 + 24) = 9180LL;
LABEL_17:
    WdLogEvent5_WdLowResource(v18);
    return (unsigned int)v8;
  }
  v9 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 147) = v9;
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C003C620);
    v17 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v17 + 24) = 9189LL;
    goto LABEL_13;
  }
  v8 = ExInitializeLookasideListEx(v9, 0LL, 0LL, PagedPool, 0, 0xE0uLL, 0x32316956u, 0);
  if ( v8 < 0 )
  {
    _InterlockedIncrement(&dword_1C003C620);
    v18 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v18 + 24) = 9198LL;
    goto LABEL_17;
  }
  v13 = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  v21 = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  if ( VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock
    && *((struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock + 1) == KeGetCurrentThread() )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v19 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v19);
  }
  DXGPUSHLOCK::AcquireExclusive(v13);
  v14 = (_QWORD *)qword_1C003C6A0;
  v22 = 2;
  v15 = (_QWORD *)((char *)this + 1448);
  if ( *(struct _LIST_ENTRY **)qword_1C003C6A0 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
    __fastfail(3u);
  *((_QWORD *)this + 182) = qword_1C003C6A0;
  *v15 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  *v14 = v15;
  qword_1C003C6A0 = (__int64)this + 1448;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return 0LL;
}
