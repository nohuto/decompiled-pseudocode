/*
 * XREFs of ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0173318
 * Callers:
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0021510 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000BA4C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C00232B4 (--1-$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ.c)
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00233C8 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::~ADAPTER_RENDER(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LOOKASIDE_LIST_EX *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  if ( *((_BYTE *)this + 616) )
    ADAPTER_RENDER::DestroyFormattingBuffer(this);
  if ( *((_BYTE *)this + 961) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1008));
  v5 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 125);
  if ( v5 )
  {
    ExDeleteLookasideListEx(v5);
    v6 = (void *)*((_QWORD *)this + 125);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  v7 = (void *)*((_QWORD *)this + 112);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 520), a2, a3, a4);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 448), v8, v9, v10);
  if ( *((ADAPTER_RENDER **)this + 24) != (ADAPTER_RENDER *)((char *)this + 192) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 152), v11, v13, v14);
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 17, v16, v17, v18);
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 15, v19, v20, v21);
  *((_QWORD *)this + 2) = 0LL;
}
