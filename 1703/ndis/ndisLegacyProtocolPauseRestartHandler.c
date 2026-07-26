/*
 * XREFs of ndisLegacyProtocolPauseRestartHandler @ 0x1C005C810
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C00F77D4 (ndisPnPNotifyBinding.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     NdisWaitEvent @ 0x1C00A5CE0 (NdisWaitEvent.c)
 */

void __fastcall ndisLegacyProtocolPauseRestartHandler(__int64 a1, int *a2)
{
  KIRQL v4; // al
  char v5; // bl
  KIRQL v6; // al
  bool v7; // zf

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x4Bu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1, *a2);
  if ( *a2 == 8 )
  {
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
    v7 = *(_DWORD *)(a1 + 740) == 0;
    *(_BYTE *)(a1 + 728) = v6;
    *(_DWORD *)(a1 + 736) = 1;
    if ( v7 )
      v5 = 1;
    else
      KeClearEvent((PRKEVENT)(a1 + 744));
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), *(_BYTE *)(a1 + 728));
    if ( !v5 )
      NdisWaitEvent((PNDIS_EVENT)(a1 + 744), 0);
  }
  else if ( *a2 == 9 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
    *(_DWORD *)(a1 + 736) = 2;
    *(_BYTE *)(a1 + 728) = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), v4);
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x4Cu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1, *a2);
}
