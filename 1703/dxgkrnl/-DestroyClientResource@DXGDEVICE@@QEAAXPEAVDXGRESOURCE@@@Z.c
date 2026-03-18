/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C017ED14
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00BC120 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C017FFCC (DxgkDestroyClientAllocation.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C0187440 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CEBC4 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C017EC48 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
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
