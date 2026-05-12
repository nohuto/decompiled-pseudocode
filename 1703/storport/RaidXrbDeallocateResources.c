/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C0006D80
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C0006CB4 (RaidUnitReleaseIrp.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C000EC8C (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C870 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidDmaPutScatterGatherList @ 0x1C0030B58 (RaidDmaPutScatterGatherList.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2, __int64 a3)
{
  KIRQL v3; // bp
  __int64 v6; // rax
  int v7; // edi
  bool v8; // di
  struct _MDL *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  __int64 v13; // rdx
  struct _MDL *v14; // rcx
  struct _MDL *v15; // rcx

  if ( a1 )
  {
    v3 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v6 = *(_QWORD *)(a1 + 168);
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v7 = *(_DWORD *)(v6 + 24);
      else
        v7 = *(_DWORD *)(v6 + 12);
      v8 = (v7 & 0x40) == 0;
      if ( RaidVerifierEnabled )
      {
        v9 = *(struct _MDL **)(a1 + 120);
        if ( v9 )
        {
          MmProtectMdlSystemAddress(v9, 4u);
          MmUnlockPages(*(PMDL *)(a1 + 120));
          IoFreeMdl(*(PMDL *)(a1 + 120));
          *(_QWORD *)(a1 + 120) = 0LL;
        }
      }
      if ( !a2 )
        v3 = KfRaiseIrql(2u);
      if ( *(_QWORD *)(a1 + 216) != -696LL )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 696LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            v12 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v11 + 96);
            if ( v12 )
            {
              LOBYTE(a3) = v8;
              v12(v10, *(_QWORD *)(a1 + 112), a3);
            }
          }
        }
      }
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      v13 = *(_QWORD *)(a1 + 152);
      if ( v13 )
      {
        RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 216) + 696LL, v13, 0LL);
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v3);
    }
    v14 = *(struct _MDL **)(a1 + 104);
    if ( v14 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      IoFreeMdl(v14);
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_BYTE *)(a1 + 16) &= ~1u;
    }
    v15 = *(struct _MDL **)(a1 + 136);
    if ( v15 )
    {
      MmUnlockPages(v15);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
