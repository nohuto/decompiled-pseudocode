/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0068C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _LOOKASIDE_LIST_EX *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  struct _LOOKASIDE_LIST_EX *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGPUSHLOCK *v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v25; // [rsp+48h] [rbp-20h]
  int v26; // [rsp+50h] [rbp-18h]

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new[](0x18uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 180) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(dword_1C0040630);
    v21 = WdLogNewEntry5_WdLowResource(v5, v4);
    *(_QWORD *)(v21 + 24) = 9029LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v6 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 146) = v6;
  if ( !v6 )
  {
    _InterlockedIncrement(dword_1C0040630);
    v21 = WdLogNewEntry5_WdLowResource(v8, v7);
    *(_QWORD *)(v21 + 24) = 9043LL;
    goto LABEL_13;
  }
  v11 = ExInitializeLookasideListEx(v6, 0LL, 0LL, PagedPool, 0, 0xA8uLL, 0x32316956u, 0);
  if ( v11 < 0 )
  {
    _InterlockedIncrement(dword_1C0040630);
    v22 = WdLogNewEntry5_WdLowResource(v10, v9);
    *(_QWORD *)(v22 + 24) = 9052LL;
LABEL_17:
    WdLogEvent5_WdLowResource(v22);
    return (unsigned int)v11;
  }
  v12 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 147) = v12;
  if ( !v12 )
  {
    _InterlockedIncrement(dword_1C0040630);
    v21 = WdLogNewEntry5_WdLowResource(v14, v13);
    *(_QWORD *)(v21 + 24) = 9061LL;
    goto LABEL_13;
  }
  v11 = ExInitializeLookasideListEx(v12, 0LL, 0LL, PagedPool, 0, 0xE0uLL, 0x32316956u, 0);
  if ( v11 < 0 )
  {
    _InterlockedIncrement(dword_1C0040630);
    v22 = WdLogNewEntry5_WdLowResource(v16, v15);
    *(_QWORD *)(v22 + 24) = 9070LL;
    goto LABEL_17;
  }
  v17 = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  v25 = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  if ( VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock
    && *((struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock + 1) == KeGetCurrentThread() )
  {
    v23 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v23 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v23);
  }
  DXGPUSHLOCK::AcquireExclusive(v17);
  v18 = (_QWORD *)qword_1C0040708;
  v26 = 2;
  v19 = (_QWORD *)((char *)this + 1448);
  if ( *(struct _LIST_ENTRY **)qword_1C0040708 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
    __fastfail(3u);
  *((_QWORD *)this + 182) = qword_1C0040708;
  *v19 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  *v18 = v19;
  qword_1C0040708 = (__int64)this + 1448;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return 0LL;
}
