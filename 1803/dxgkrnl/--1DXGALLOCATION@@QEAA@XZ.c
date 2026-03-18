/*
 * XREFs of ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00D3598
 * Callers:
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C0023A24 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF2DC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00F1260 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 * Callees:
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00E2790 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C016B99C (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGALLOCATION::~DXGALLOCATION(DXGALLOCATION *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x40000) != 0 )
  {
    UnlockParavirtualizedAllocationOnGuest(this, 1u);
    v1 = *((_DWORD *)this + 18);
  }
  if ( (v1 & 0x100000) != 0 )
    DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)this + 5));
}
