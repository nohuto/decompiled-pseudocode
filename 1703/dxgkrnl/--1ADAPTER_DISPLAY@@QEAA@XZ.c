/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C016FAB0
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00214E8 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00021D8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000BA4C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01969A0 (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01AC6CC (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int128 v7; // rcx
  DXGGLOBAL *Global; // rax
  char *v9; // rcx
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax

  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 72) )
    {
      v6 = v5 - 24;
      v7 = -(__int128)v5;
      *((_QWORD *)&v7 + 1) &= v6;
      Global = DXGGLOBAL::GetGlobal(v7, a2, a3, a4);
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(Global, *((struct OUTPUTDUPL_MGR_INDIRECT **)&v7 + 1));
    }
    DestroyOutputDuplManager(*((struct OUTPUTDUPL_MGR **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  v9 = (char *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    v10 = v9 - 8;
    `vector destructor iterator'(
      v9,
      3208LL,
      *((_QWORD *)v9 - 1),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete[](v10);
    *((_QWORD *)this + 14) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 400), a2, a3, a4);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 336), v11, v12, v13);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 280), v14, v15, v16);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 200), v17, v18, v19);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 136), v20, v21, v22);
  if ( *((ADAPTER_DISPLAY **)this + 8) != (ADAPTER_DISPLAY *)((char *)this + 64) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    *(_QWORD *)(v27 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v27);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 24), v23, v25, v26);
  *((_QWORD *)this + 2) = 0LL;
}
