/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C006E060
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  __int64 v4; // rcx
  struct _LOOKASIDE_LIST_EX *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  NTSTATUS v8; // edi
  struct _LOOKASIDE_LIST_EX *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[40]; // [rsp+40h] [rbp-28h] BYREF

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new[](0x18uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 198) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(dword_1C0047630);
    v15 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v15 + 24) = 9273LL;
LABEL_10:
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v5 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 164) = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(dword_1C0047630);
    v15 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v15 + 24) = 9287LL;
    goto LABEL_10;
  }
  v8 = ExInitializeLookasideListEx(v5, 0LL, 0LL, PagedPool, 0, 0xA8uLL, 0x32316956u, 0);
  if ( v8 < 0 )
  {
    _InterlockedIncrement(dword_1C0047630);
    v16 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v16 + 24) = 9296LL;
LABEL_14:
    WdLogEvent5_WdLowResource(v16);
    return (unsigned int)v8;
  }
  v9 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x30316956u, (POOL_TYPE)512);
  *((_QWORD *)this + 165) = v9;
  if ( !v9 )
  {
    _InterlockedIncrement(dword_1C0047630);
    v15 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v15 + 24) = 9305LL;
    goto LABEL_10;
  }
  v8 = ExInitializeLookasideListEx(v9, 0LL, 0LL, PagedPool, 0, 0xE0uLL, 0x32316956u, 0);
  if ( v8 < 0 )
  {
    _InterlockedIncrement(dword_1C0047630);
    v16 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v16 + 24) = 9314LL;
    goto LABEL_14;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v17,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  v12 = (_QWORD *)qword_1C0047720;
  v13 = (_QWORD *)((char *)this + 1592);
  if ( *(struct _LIST_ENTRY **)qword_1C0047720 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
    __fastfail(3u);
  *((_QWORD *)this + 200) = qword_1C0047720;
  *v13 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  *v12 = v13;
  qword_1C0047720 = (__int64)this + 1592;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return 0LL;
}
