/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C00FAD14
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C000D550 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C0001208 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C000D98C (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this, __int64 a2, __int64 a3, __int64 a4)
{
  OUTPUTDUPL_SESSION_MGR *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2313) = 0LL;
  if ( *((DXGSESSIONDATA **)this + 2317) != (DXGSESSIONDATA *)((char *)this + 18536) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 2576LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((DXGSESSIONDATA **)this + 2319) != (DXGSESSIONDATA *)((char *)this + 18552) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 2577LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v6 = (void *)*((_QWORD *)this + 2323);
  *((_QWORD *)this + 2324) = 0LL;
  ObfDereferenceObject(v6);
  Global = DXGGLOBAL::GetGlobal(v8, v7, v9, v10);
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1108), this);
  v15 = (void *)*((_QWORD *)this + 2327);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)this + 2327) = 0LL;
    *((_DWORD *)this + 4652) = 0;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16), v12, v13, v14);
}
