/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C0053500
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D00 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001D64 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D8C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C00583B0 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetBackingAddress(VIDMM_RECYCLE_HEAP_MGR *this, _QWORD *a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v3 = a2[4];
  v4 = a2[10];
  v14 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray((VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(v4 + 88), &v14, v3, v3 + 4096);
  v8 = v14;
  if ( !v14 )
  {
    v11 = a2[4];
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
    v12[7] = 0LL;
    v12[3] = 270LL;
    v12[4] = 52LL;
    v12[5] = 20LL;
    v12[6] = v11;
    WdLogEvent5_WdCriticalError(v12);
  }
  v9 = v8 << 12;
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v9;
}
