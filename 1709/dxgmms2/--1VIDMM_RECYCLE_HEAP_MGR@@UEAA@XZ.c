/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0068D94
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C00023D0 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0002410 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001215C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00121E4 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00684B0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C006A670 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006B290 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006C8E4 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C006CAB0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this, __int64 a2)
{
  struct _KTHREAD **v2; // rbx
  char *v4; // rax
  __int64 v5; // rdx
  char **v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // rsi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  struct _LOOKASIDE_LIST_EX *v16; // rcx
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  void *v18; // rcx
  struct VIDMM_RECYCLE_RANGE *v19; // rbx
  VIDMM_RECYCLE_MULTIRANGE **v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  char *v27; // [rsp+30h] [rbp-30h] BYREF
  char v28; // [rsp+38h] [rbp-28h]
  _BYTE v29[8]; // [rsp+40h] [rbp-20h] BYREF
  struct _KTHREAD **v30; // [rsp+48h] [rbp-18h]
  int v31; // [rsp+50h] [rbp-10h]
  int v32; // [rsp+80h] [rbp+20h] BYREF

  v2 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  v30 = v2;
  if ( v2 && v2[1] == KeGetCurrentThread() )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v21 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v21);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  v4 = (char *)this + 1448;
  v31 = 2;
  if ( *((_QWORD *)this + 181) )
  {
    v5 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (char **)*((_QWORD *)this + 182), *v6 != v4) )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  v28 = 0;
  v27 = (char *)this + 1184;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1184LL )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v22 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27, v7, v9);
  _InterlockedExchange((volatile __int32 *)this + 358, 1);
  v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 346);
  if ( (_DWORD)v12 && !KeCancelTimer((PKTIMER)((char *)this + 1224)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27, v23, v24);
    KeWaitForSingleObject(*((PVOID *)this + 180), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27, v25, v26);
  }
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 174);
  while ( v13 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1392) )
  {
    v19 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v13 - 104);
    v13 = *(VIDMM_RECYCLE_HEAP_MGR **)v13;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v12, v19);
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v19);
    v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v19 + 17);
    if ( v12 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v12, v10);
  }
  v14 = (_QWORD *)((char *)this + 1408);
  while ( 1 )
  {
    v15 = (_QWORD *)*v14;
    if ( (_QWORD *)*v14 == v14 )
      break;
    v20 = (VIDMM_RECYCLE_MULTIRANGE **)(v15 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v12, (struct VIDMM_RECYCLE_RANGE *)(v15 - 13));
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v20, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v32);
    if ( !v32 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v20[17], v10);
  }
  v16 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 146);
  if ( v16 )
  {
    ExDeleteLookasideListEx(v16);
    operator delete(*((void **)this + 146));
  }
  v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 147);
  if ( v17 )
  {
    ExDeleteLookasideListEx(v17);
    operator delete(*((void **)this + 147));
  }
  v18 = (void *)*((_QWORD *)this + 180);
  if ( v18 )
    operator delete(v18);
  if ( v28 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27, v10, v11);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184));
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
