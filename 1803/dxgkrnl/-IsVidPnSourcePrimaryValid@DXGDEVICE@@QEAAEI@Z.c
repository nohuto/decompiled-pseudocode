/*
 * XREFs of ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C018B050
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C010CF28 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01565C4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01566FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C018B008 (-IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGDEVICE::IsVidPnSourcePrimaryValid(DXGDEVICE *this, unsigned int a2)
{
  int v2; // edx

  v2 = *((_DWORD *)this + a2 + 262);
  return (_BYTE)v2 && (*((_DWORD *)this + 82) != 1 || (v2 & 0x100) != 0);
}
