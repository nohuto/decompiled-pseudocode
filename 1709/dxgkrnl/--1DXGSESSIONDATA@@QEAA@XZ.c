/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C00B29C0
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0008028 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0008C40 (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C000F1A0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  OUTPUTDUPL_SESSION_MGR *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  if ( *((DXGSESSIONDATA **)this + 2318) != (DXGSESSIONDATA *)((char *)this + 18544) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v7 + 24) = 2613LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((DXGSESSIONDATA **)this + 2320) != (DXGSESSIONDATA *)((char *)this + 18560) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v8 + 24) = 2614LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v3 = (void *)*((_QWORD *)this + 2324);
  *((_QWORD *)this + 2325) = 0LL;
  ObfDereferenceObject(v3);
  Global = DXGGLOBAL::GetGlobal(v4);
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1108), this);
  v6 = (void *)*((_QWORD *)this + 2328);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)this + 2328) = 0LL;
    *((_DWORD *)this + 4654) = 0;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
