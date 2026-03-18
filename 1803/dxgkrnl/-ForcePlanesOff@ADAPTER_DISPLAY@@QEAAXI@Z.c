/*
 * XREFs of ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0154430
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0019D28 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0153150 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ForcePlanesOff(DXGADAPTER **this)
{
  DXGADAPTER *v1; // r8
  ADAPTER_DISPLAY *v2; // r9
  unsigned int v3; // r10d
  char v4; // r8

  if ( *((_QWORD *)this[2] + 308) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(this[2]) )
    {
      if ( (unsigned int)DXGADAPTER::GetDriverVersion(v1) != 2200 )
        return;
      v4 = 0;
    }
    else
    {
      v4 = 1;
    }
    ADAPTER_DISPLAY::DisableMPOPlanes(v2, v3, v4);
  }
}
