/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01825E8
 * Callers:
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00BE990 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0184098 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C019CCD4 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C001D4AC (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082398 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0182514 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyClientResource(PERESOURCE *this, struct DXGALLOCATION **a2)
{
  struct DXGALLOCATION *v4; // rcx
  struct DXGALLOCATION *v5; // rcx

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)this, (struct DXGRESOURCE *)a2, 0LL);
  DXGDEVICE::DestroyClientAllocations(this, a2[3]);
  v4 = a2[5];
  if ( v4 )
    *((_QWORD *)v4 + 4) = a2[4];
  v5 = a2[4];
  if ( v5 )
  {
    *((_QWORD *)v5 + 5) = a2[5];
  }
  else if ( this[7] == (PERESOURCE)a2 )
  {
    this[7] = (PERESOURCE)a2[5];
  }
  DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)a2);
}
