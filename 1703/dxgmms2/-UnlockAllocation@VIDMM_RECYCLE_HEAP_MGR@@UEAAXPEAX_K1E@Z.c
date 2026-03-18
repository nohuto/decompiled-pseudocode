/*
 * XREFs of ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C0064E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00113A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011428 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C001166C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C0068224 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006F4EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnlockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  bool v5; // zf
  char *v6; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  char *v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v5 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184) == 0LL;
  v6 = (char *)this + 1184;
  v14 = 0;
  v13 = v6;
  if ( v5 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v12 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v13, (__int64)a2, a3);
  VIDMM_RECYCLE_MULTIRANGE::Unlock(a2, a3, a4, a5);
  if ( v14 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v13, v10, v11);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
