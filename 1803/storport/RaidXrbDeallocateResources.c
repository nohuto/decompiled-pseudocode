/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C0007D98
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C0007EEC (RaidUnitReleaseIrp.c)
 *     RaAdapterStartPowerIo @ 0x1C000F43C (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C000FDA0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00281D4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028680 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C7A0 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005EFC0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0063B84 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0063E98 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C0007D00 (RaidDmaPutScatterGatherList.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2)
{
  KIRQL v2; // bp
  struct _MDL *v5; // rcx
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rcx

  if ( a1 )
  {
    v2 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( HIDWORD(WPP_MAIN_CB.DeviceObjectExtension) )
      {
        v5 = *(struct _MDL **)(a1 + 120);
        if ( v5 )
        {
          MmProtectMdlSystemAddress(v5, 4u);
          MmUnlockPages(*(PMDL *)(a1 + 120));
          IoFreeMdl(*(PMDL *)(a1 + 120));
          *(_QWORD *)(a1 + 120) = 0LL;
        }
      }
      if ( !a2 )
        v2 = KfRaiseIrql(2u);
      RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 696LL));
      v6 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v6 )
      {
        RaidDmaPutScatterGatherList((__int64 *)(*(_QWORD *)(a1 + 216) + 696LL));
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v2);
    }
    v7 = *(struct _MDL **)(a1 + 104);
    if ( v7 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      IoFreeMdl(v7);
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_BYTE *)(a1 + 16) &= ~1u;
    }
    v8 = *(struct _MDL **)(a1 + 136);
    if ( v8 )
    {
      MmUnlockPages(v8);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
