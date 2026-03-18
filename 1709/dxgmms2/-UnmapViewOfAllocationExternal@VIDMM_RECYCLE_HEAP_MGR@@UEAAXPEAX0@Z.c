/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00A6F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002360 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001215C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00121BC (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00121E4 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnmapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        void *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  VIDMM_RECYCLE_HEAP_MGR *v7; // rcx
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  void *v13; // rbx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18, v5, v6);
  SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v7, 0);
  v12 = a2[5] - a2[4];
  if ( v12 <= SmallAllocationSize )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    MmUnmapViewOfSection(CurrentProcess, a3);
  }
  else
  {
    v13 = *(void **)(a2[10] + 56LL);
    v14 = (void *)PsGetCurrentProcess(v10, v9, v11, v12);
    VidMmUnmapViewAsync(v14, v13, a3);
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v15, v16);
}
