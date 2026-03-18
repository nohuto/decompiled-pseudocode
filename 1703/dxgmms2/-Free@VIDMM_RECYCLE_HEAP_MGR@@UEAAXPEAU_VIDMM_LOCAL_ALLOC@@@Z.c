/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0064FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C001166C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0068420 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006F4EC (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(VIDMM_RECYCLE_HEAP_MGR *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  bool v3; // zf
  DXGFASTMUTEX *v4; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  DXGFASTMUTEX *v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  v16 = 0;
  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184) == 0LL;
  v4 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184);
  v15 = v4;
  if ( v3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v10 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v10);
    if ( v16 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v13);
      v14[5] = &v15;
      v14[3] = 275LL;
      v14[4] = 4LL;
      v14[6] = 0LL;
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    v4 = v15;
  }
  DXGFASTMUTEX::Acquire(v4);
  v6 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 3);
  v7 = *((_QWORD *)this + 1);
  v16 = 1;
  *(_QWORD *)(v7 + 88) += *((_QWORD *)v6 + 4) - *((_QWORD *)v6 + 5);
  VIDMM_RECYCLE_MULTIRANGE::Decommit(v6);
  if ( v16 )
  {
    v16 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v15, v8, v9);
  }
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
