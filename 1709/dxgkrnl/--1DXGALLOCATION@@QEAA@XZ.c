/*
 * XREFs of ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00F1E74
 * Callers:
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C001D47C (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AEB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C009CB10 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 * Callees:
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C007FDC0 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C01837B8 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGALLOCATION::~DXGALLOCATION(struct _EX_RUNDOWN_REF **this)
{
  if ( ((_DWORD)this[9] & 0x40000) != 0 )
    UnlockParavirtualizedAllocationOnGuest((struct DXGALLOCATION *)this, 1u);
  if ( ((_DWORD)this[9] & 0x100000) != 0 )
    DxgkUnreferenceDxgResource(this[5]);
}
