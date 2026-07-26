/*
 * XREFs of NdisFRestartComplete @ 0x1C00E50A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __stdcall NdisFRestartComplete(NDIS_HANDLE NdisFilterHandle, NDIS_STATUS Status)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Du, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)NdisFilterHandle, Status);
  *(_DWORD *)(*((_QWORD *)NdisFilterHandle + 16) + 8LL) = Status;
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Eu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)NdisFilterHandle, Status);
}
