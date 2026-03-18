/*
 * XREFs of ??1DXGALLOCATION@@QEAA@XZ @ 0x1C009D83C
 * Callers:
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C00201EC (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00C9280 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 * Callees:
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C009F570 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGALLOCATION::~DXGALLOCATION(DXGALLOCATION *this)
{
  int v1; // eax
  void *v3; // rcx

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x40000) != 0 )
  {
    v3 = (void *)*((_QWORD *)this + 13);
    if ( v3 )
    {
      if ( (v1 & 0x80000) != 0 )
      {
        MmRotatePhysicalView(v3, (PSIZE_T)this + 15, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 13, (PSIZE_T)this + 15, 0x8000u);
      }
      else
      {
        MmUnmapLockedPages(v3, *((PMDL *)this + 14));
        IoFreeMdl(*((PMDL *)this + 14));
      }
    }
  }
  if ( (*((_DWORD *)this + 18) & 0x100000) != 0 )
    DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)this + 5));
}
