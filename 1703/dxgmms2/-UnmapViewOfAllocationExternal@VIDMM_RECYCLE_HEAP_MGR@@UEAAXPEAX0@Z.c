/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C009EE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00113A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011400 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011428 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnmapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        void *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r9d
  unsigned __int64 v8; // rcx
  void *v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14, v5, v6);
  v7 = dword_1C003C33C;
  if ( (unsigned __int64)qword_1C003C128 > 0x53333333 )
    v7 = dword_1C003C32C;
  v8 = a2[5] - a2[4];
  if ( v8 <= (unsigned int)(v7 << 20) )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    MmUnmapViewOfSection(CurrentProcess, a3);
  }
  else
  {
    v9 = *(void **)(a2[10] + 56LL);
    v10 = (void *)PsGetCurrentProcess(v8);
    VidMmUnmapViewAsync(v10, v9, a3);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v11, v12);
}
