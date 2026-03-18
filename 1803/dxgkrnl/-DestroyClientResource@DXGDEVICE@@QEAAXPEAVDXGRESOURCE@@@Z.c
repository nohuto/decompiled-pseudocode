/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C016A808
 * Callers:
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0107B68 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C016C1CC (DxgkDestroyClientAllocation.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C018A420 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0023A54 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A5534 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C016A6CC (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0182B40 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyClientResource(DXGDEVICE *this, struct DXGALLOCATION ***a2)
{
  struct DXGALLOCATION **v4; // rcx
  struct DXGALLOCATION **v5; // rcx
  unsigned int v6; // r9d

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(this, (struct DXGRESOURCE *)a2, 0LL);
  DXGDEVICE::DestroyClientAllocations(this, a2[3]);
  v4 = a2[5];
  if ( v4 )
    v4[4] = (struct DXGALLOCATION *)a2[4];
  v5 = a2[4];
  if ( v5 )
  {
    v5[5] = (struct DXGALLOCATION *)a2[5];
  }
  else if ( *((struct DXGALLOCATION ****)this + 7) == a2 )
  {
    *((_QWORD *)this + 7) = a2[5];
  }
  if ( (*((_BYTE *)this + 1709) & 1) != 0 )
  {
    v6 = *((_DWORD *)a2 + 5);
    if ( v6 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4080LL),
        *(_DWORD *)(*((_QWORD *)this + 5) + 392LL),
        *((_DWORD *)this + 84),
        v6,
        0,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
      *((_DWORD *)a2 + 5) = 0;
    }
  }
  DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)a2);
}
