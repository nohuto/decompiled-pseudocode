/*
 * XREFs of ndisLegacyProtocolPauseRestartHandler @ 0x1C005CAF0
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C0103560 (ndisPnPNotifyBinding.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     NdisWaitEvent @ 0x1C00AD6C0 (NdisWaitEvent.c)
 */

void __fastcall ndisLegacyProtocolPauseRestartHandler(__int64 a1, int *a2)
{
  KIRQL v4; // al
  KIRQL v5; // al
  int v6; // r14d

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x4Bu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1, *a2);
  if ( *a2 == 8 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
    v6 = *(_DWORD *)(a1 + 740);
    *(_BYTE *)(a1 + 728) = v5;
    *(_DWORD *)(a1 + 736) = 1;
    if ( v6 )
      KeClearEvent((PRKEVENT)(a1 + 744));
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), *(_BYTE *)(a1 + 728));
    if ( v6 )
      NdisWaitEvent((PNDIS_EVENT)(a1 + 744), 0);
  }
  else if ( *a2 == 9 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
    *(_DWORD *)(a1 + 736) = 2;
    *(_BYTE *)(a1 + 728) = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), v4);
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x4Cu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1, *a2);
}
