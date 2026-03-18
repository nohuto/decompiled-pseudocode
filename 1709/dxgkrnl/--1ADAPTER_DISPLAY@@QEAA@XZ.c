/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C01732D8
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C001E2EC (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0008A54 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01AB9C8 (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C6124 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int128 v4; // rcx
  DXGGLOBAL *Global; // rax
  char *v6; // rcx
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 72) )
    {
      v3 = v2 - 24;
      v4 = -(__int128)v2;
      *((_QWORD *)&v4 + 1) &= v3;
      Global = DXGGLOBAL::GetGlobal(v4);
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v4 + 1));
    }
    DestroyOutputDuplManager(*((struct OUTPUTDUPL_MGR **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    v7 = v6 - 8;
    `vector destructor iterator'(
      v6,
      3760LL,
      *((_QWORD *)v6 - 1),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete(v7);
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((ADAPTER_DISPLAY **)this + 60) != (ADAPTER_DISPLAY *)((char *)this + 480) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 440));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 400));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 336));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 280));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 200));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 136));
  if ( *((ADAPTER_DISPLAY **)this + 8) != (ADAPTER_DISPLAY *)((char *)this + 64) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 24));
  *((_QWORD *)this + 2) = 0LL;
}
