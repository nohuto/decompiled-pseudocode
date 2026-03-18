/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0002410
 * Callers:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001FFE8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0068D94 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( *((_QWORD *)this + 1) )
  {
    v2 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v2 + 24) = 342LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 343LL;
    WdLogEvent5_WdAssertion(v3);
  }
}
