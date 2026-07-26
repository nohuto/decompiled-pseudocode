/*
 * XREFs of ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00748D0
 * Callers:
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001E2D0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisReleaseNicActive @ 0x1C00750D0 (NdisReleaseNicActive.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidComponentId(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return a1 < 17;
  return result;
}
