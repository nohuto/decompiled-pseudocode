/*
 * XREFs of RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0026618
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C00264D8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0026684 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoFromMiniport(__int64 a1, IRP *a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v7; // rcx

  result = RaidAdapterSendSrbIoControlSynchronously(
             a1,
             a2,
             a3,
             a4,
             (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
             0,
             64);
  if ( (int)result >= 0 )
  {
    v7 = *(unsigned int *)(a3 + 44);
    if ( *(_DWORD *)(v7 + a3) == 2 && *(_DWORD *)(v7 + a3 + 4) == 24 )
      *(_DWORD *)(a1 + 5456) = 2;
    else
      *(_DWORD *)(a1 + 5456) = 1;
  }
  return result;
}
