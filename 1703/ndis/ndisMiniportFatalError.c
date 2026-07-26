/*
 * XREFs of ndisMiniportFatalError @ 0x1C00E122C
 * Callers:
 *     ndisSetPowerResumeComplete @ 0x1C006FCA0 (ndisSetPowerResumeComplete.c)
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00D9DE0 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00614AC (NdisMRemoveMiniportInternal.c)
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
        ndisMDereferenceIfBlock(a1, 0x13u),
        !*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 864LL))
    || (v6 = *(_QWORD *)(a1 + 4112)) == 0
    || !*(_QWORD *)(v6 + 32)
    || (*(_DWORD *)(a1 + 124) & 0x1080000) != 0
    || *(int *)(a1 + 120) < 0
    || *(_DWORD *)(a1 + 1520) != 1 )
  {
    v4 = 0;
  }
  if ( (unsigned __int8)byte_1C0092614 >= 2u )
    WPP_SF_qD(0x42u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, a1, v4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 3784) + 864LL))(*(_QWORD *)(a1 + 24));
  else
    NdisMRemoveMiniportInternal(a1, a2);
}
