/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C01CE178
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C00363A0 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00363D0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0038124 (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  __int64 v2; // rcx
  OUTPUTDUPL_SESSION_MGR *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  void *v12; // rcx

  v2 = *((_QWORD *)this + 2335);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 2335) = 0LL;
  }
  v3 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  if ( *((_DWORD *)this + 4682) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 2710LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_QWORD *)this + 2342) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 2711LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((DXGSESSIONDATA **)this + 2318) != (DXGSESSIONDATA *)((char *)this + 18544) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 2716LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((DXGSESSIONDATA **)this + 2320) != (DXGSESSIONDATA *)((char *)this + 18560) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v7 + 24) = 2717LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (void *)*((_QWORD *)this + 2324);
  *((_QWORD *)this + 2325) = 0LL;
  ObfDereferenceObject(v8);
  if ( *((_QWORD *)this + 2331) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 2722LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Global = DXGGLOBAL::GetGlobal(v9);
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1188), this);
  v12 = (void *)*((_QWORD *)this + 2334);
  if ( v12 )
  {
    operator delete[](v12);
    *((_QWORD *)this + 2334) = 0LL;
    *((_DWORD *)this + 4666) = 0;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18688));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18608));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
