/*
 * XREFs of ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B1460
 * Callers:
 *     DxgkPresent @ 0x1C00C8F20 (DxgkPresent.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B1F48 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01DB5A0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01DBC00 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01DC260 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::CloseInternalCddPrimaryHandle(DXGDEVICE *this, struct COREDEVICEACCESS *a2)
{
  __int64 i; // rdi
  struct DXGRESOURCE *v5; // r9

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 424); i = (unsigned int)(i + 1) )
  {
    v5 = (struct DXGRESOURCE *)*((_QWORD *)this + i + 60);
    if ( v5 )
    {
      if ( *((_BYTE *)this + i + 464) )
      {
        DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v5, a2, DXGDEVICE::DestroyFlagsDefault);
        *((_BYTE *)this + i + 464) = 0;
      }
    }
  }
}
