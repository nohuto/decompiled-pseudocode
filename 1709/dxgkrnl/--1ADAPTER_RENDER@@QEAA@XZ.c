/*
 * XREFs of ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0176CB4
 * Callers:
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C001E314 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ @ 0x1C0021654 (--1-$DXGNODELIST@VADAPTER_RENDER@@VDXGDEVICE@@@@AEAA@XZ.c)
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0021768 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C0188E5C (-DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::~ADAPTER_RENDER(ADAPTER_RENDER *this)
{
  struct _LOOKASIDE_LIST_EX *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rdi
  DXGVIRTUALGPUMANAGER *v6; // rcx
  _QWORD *v7; // rdi
  DXGVIRTUALGPUMANAGER *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( *((_BYTE *)this + 712) )
    ADAPTER_RENDER::DestroyFormattingBuffer(this);
  if ( *((_BYTE *)this + 1057) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1104));
  v2 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 137);
  if ( v2 )
  {
    ExDeleteLookasideListEx(v2);
    v3 = (void *)*((_QWORD *)this + 137);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  v4 = (void *)*((_QWORD *)this + 124);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = (_QWORD *)*((_QWORD *)this + 154);
  if ( v5 )
  {
    v6 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 154);
    *v5 = &DXGVIRTUALGPUMANAGER::`vftable';
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(v6);
    operator delete(v5);
  }
  v7 = (_QWORD *)*((_QWORD *)this + 153);
  if ( v7 )
  {
    v8 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 153);
    *v7 = &DXGVIRTUALGPUMANAGER::`vftable';
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(v8);
    operator delete(v7);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 616));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 544));
  if ( *((ADAPTER_RENDER **)this + 24) != (ADAPTER_RENDER *)((char *)this + 192) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_RENDER *)((char *)this + 152));
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 17);
  DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>::~DXGNODELIST<ADAPTER_RENDER,DXGDEVICE>((_QWORD *)this + 15);
  *((_QWORD *)this + 2) = 0LL;
}
