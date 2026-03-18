/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0068870
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001215C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00121E4 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B880 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        unsigned __int8 a4)
{
  bool v4; // zf
  char *v5; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v13; // rax
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  v4 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184) == 0LL;
  v5 = (char *)this + 1184;
  v15 = 0;
  v14 = v5;
  if ( v4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v13 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14, (__int64)a2, (__int64)a3);
  v10 = VIDMM_RECYCLE_MULTIRANGE::Reset(a3, a2, a4);
  if ( v15 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v14, v9, v11);
  return v10;
}
