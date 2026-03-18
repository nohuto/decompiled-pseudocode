/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006E1C0
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C00056B0 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D00 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D8C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00056F0 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D968 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006F3E8 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C00712F0 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00717D0 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0071A10 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  struct _KTHREAD **v1; // rdx
  char *v3; // rcx
  __int64 v4; // rax
  char **v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  struct _LOOKASIDE_LIST_EX *v12; // rcx
  struct _LOOKASIDE_LIST_EX *v13; // rcx
  void *v14; // rcx
  struct VIDMM_RECYCLE_RANGE *v15; // rbx
  unsigned __int8 v16; // dl
  VIDMM_RECYCLE_MULTIRANGE **v17; // rsi
  unsigned __int8 v18; // dl
  __int64 v19; // rax
  char *v20; // [rsp+30h] [rbp-48h] BYREF
  char v21; // [rsp+38h] [rbp-40h]
  _BYTE v22[32]; // [rsp+40h] [rbp-38h] BYREF
  int v23; // [rsp+80h] [rbp+8h] BYREF

  v1 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, v1);
  v3 = (char *)this + 1592;
  v4 = *((_QWORD *)this + 199);
  if ( v4 )
  {
    if ( *(char **)(v4 + 8) != v3 || (v5 = (char **)*((_QWORD *)this + 200), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  v21 = 0;
  v20 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v19 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v19);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  _InterlockedExchange((volatile __int32 *)this + 394, 1);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 382);
  if ( (_DWORD)v8 && !KeCancelTimer((PKTIMER)((char *)this + 1368)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v20);
    KeWaitForSingleObject(*((PVOID *)this + 198), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  }
  v9 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 192);
  while ( v9 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v9 - 104);
    v9 = *(VIDMM_RECYCLE_HEAP_MGR **)v9;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, v15);
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v15);
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v15 + 17);
    if ( v8 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v8, v16);
  }
  v10 = (_QWORD *)((char *)this + 1552);
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      break;
    v17 = (VIDMM_RECYCLE_MULTIRANGE **)(v11 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, (struct VIDMM_RECYCLE_RANGE *)(v11 - 13));
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v17, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v23);
    if ( !v23 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v17[17], v18);
  }
  v12 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v12 )
  {
    ExDeleteLookasideListEx(v12);
    operator delete(*((void **)this + 164));
  }
  v13 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v13 )
  {
    ExDeleteLookasideListEx(v13);
    operator delete(*((void **)this + 165));
  }
  v14 = (void *)*((_QWORD *)this + 198);
  if ( v14 )
    operator delete(v14);
  if ( v21 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v20);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
