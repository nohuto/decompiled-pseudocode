/*
 * XREFs of ndisGetTimeInterval @ 0x1C001FCC4
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00F3C54 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 *     ndisMPowerPolicy @ 0x1C0105D94 (ndisMPowerPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetTimeInterval(_QWORD *a1)
{
  return (MEMORY[0xFFFFF78000000014] - *a1) / 10000LL;
}
