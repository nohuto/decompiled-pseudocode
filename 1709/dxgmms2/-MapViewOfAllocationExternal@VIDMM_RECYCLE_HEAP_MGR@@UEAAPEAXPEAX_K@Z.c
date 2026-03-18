/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00A6A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001215C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00121BC (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00121E4 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0074858 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::MapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v13; // [rsp+60h] [rbp+8h] BYREF
  void *v14; // [rsp+68h] [rbp+10h] BYREF
  void *v15; // [rsp+78h] [rbp+20h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12, v5, v6);
  v7 = a2[10];
  v14 = 0LL;
  v8 = (unsigned int)(**(_DWORD **)(v7 + 32) - 4);
  LOBYTE(v8) = (v8 & 0xFFFFFFFD) == 0;
  VidMmRecycleHeapMapSection(*(PVOID *)(v7 + 56), a2[6], a3, v8, &v14, &v15, 1u, &v13);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v9, v10);
  return v14;
}
