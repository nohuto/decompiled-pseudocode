/*
 * XREFs of ndisMiniportFatalError @ 0x1C00EDC6C
 * Callers:
 *     ndisSetPowerResumeComplete @ 0x1C0071CE0 (ndisSetPowerResumeComplete.c)
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E5660 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01033D4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00621EC (NdisMRemoveMiniportInternal.c)
 */

void __fastcall ndisMiniportFatalError(__int64 a1, unsigned __int16 a2)
{
  unsigned __int8 v4; // di
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = 1;
  v5 = ndisMReferenceIfBlock(a1, 0x13u);
  if ( !v5
    || (*(_WORD *)(v5 + 1460) = a2,
        _InterlockedOr((volatile signed __int32 *)(v5 + 1456), 1u),
        ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR),
        !*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 864LL))
    || (v6 = *(_QWORD *)(a1 + 4112)) == 0
    || !*(_QWORD *)(v6 + 32)
    || (*(_DWORD *)(a1 + 124) & 0x1080000) != 0
    || *(int *)(a1 + 120) < 0
    || *(_DWORD *)(a1 + 1520) != 1 )
  {
    v4 = 0;
  }
  if ( (unsigned __int8)byte_1C0099614 >= 2u )
    WPP_SF_qD(0x42u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, v4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 3784) + 864LL))(*(_QWORD *)(a1 + 24));
  else
    NdisMRemoveMiniportInternal(a1, a2);
}
