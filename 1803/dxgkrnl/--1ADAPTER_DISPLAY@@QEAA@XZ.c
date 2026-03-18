/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C01508E8
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00251A0 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000A7A4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01A0A60 (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C8F5C (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this)
{
  struct OUTPUTDUPL_MGR *v2; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT *v3; // rbx
  DXGGLOBAL *Global; // rax
  char *v5; // rcx
  char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( *((_BYTE *)v2 + 72) )
    {
      v3 = (struct OUTPUTDUPL_MGR *)((char *)v2 - 24);
      Global = DXGGLOBAL::GetGlobal((__int64)v2);
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(Global, v3);
      v2 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 13);
    }
    DestroyOutputDuplManager(v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    v6 = v5 - 8;
    `vector destructor iterator'(
      v5,
      3760LL,
      *((_QWORD *)v5 - 1),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete[](v6);
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((ADAPTER_DISPLAY **)this + 60) != (ADAPTER_DISPLAY *)((char *)this + 480) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 440));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 400));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 336));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 280));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 200));
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 136));
  if ( *((ADAPTER_DISPLAY **)this + 8) != (ADAPTER_DISPLAY *)((char *)this + 64) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 24));
  *((_QWORD *)this + 2) = 0LL;
}
