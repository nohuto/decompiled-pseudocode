/*
 * XREFs of ndisGetTimeInterval @ 0x1C0012370
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00EA690 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetTimeInterval(_QWORD *a1)
{
  return (MEMORY[0xFFFFF78000000014] - *a1) / 10000LL;
}
