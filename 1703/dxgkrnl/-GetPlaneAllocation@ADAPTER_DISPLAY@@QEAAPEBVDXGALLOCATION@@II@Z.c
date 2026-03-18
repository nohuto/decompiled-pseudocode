/*
 * XREFs of ?GetPlaneAllocation@ADAPTER_DISPLAY@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C01719A8
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01B9D98 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0171A1C (-GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 */

const struct DXGALLOCATION *__fastcall ADAPTER_DISPLAY::GetPlaneAllocation(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  const struct DXGALLOCATION *PlaneAllocationUnsafe; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v6 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (ADAPTER_DISPLAY *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  PlaneAllocationUnsafe = DISPLAY_SOURCE::GetPlaneAllocationUnsafe(
                            (DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3208 * v4),
                            v6);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v7, v9, v10);
  return PlaneAllocationUnsafe;
}
