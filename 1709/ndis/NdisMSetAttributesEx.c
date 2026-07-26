/*
 * XREFs of NdisMSetAttributesEx @ 0x1C0103A40
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00BFE50 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1C00E7A90 (NdisMSetAttributes.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0011550 (NdisInitializeTimer.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisSetMiniportHandlers @ 0x1C010390C (ndisSetMiniportHandlers.c)
 */

void __stdcall NdisMSetAttributesEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        UINT CheckForHangTimeInSeconds,
        ULONG AttributeFlags,
        NDIS_INTERFACE_TYPE AdapterType)
{
  KIRQL v9; // bp
  __int64 i; // rcx
  unsigned __int8 v11; // al
  KIRQL v12; // al
  KIRQL v13; // bl

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Fu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x80u) == 0 )
    *((_QWORD *)MiniportAdapterHandle + 3) = MiniportAdapterContext;
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 727219;
  ndisSetMiniportHandlers((__int64)MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  *((_DWORD *)MiniportAdapterHandle + 119) = AdapterType;
  if ( CheckForHangTimeInSeconds < 2 )
  {
    *((_DWORD *)MiniportAdapterHandle + 94) = 2;
  }
  else if ( CheckForHangTimeInSeconds > 0x40 )
  {
    *((_DWORD *)MiniportAdapterHandle + 94) = 64;
  }
  else
  {
    *((_DWORD *)MiniportAdapterHandle + 94) = CheckForHangTimeInSeconds & 0xFFFFFFFE;
  }
  *((_DWORD *)MiniportAdapterHandle + 468) |= 0x2000000u;
  if ( (AttributeFlags & 8) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 30) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 1u;
  }
  if ( (AttributeFlags & 1) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x800u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20u;
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x1000u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x40u;
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100u;
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x200000u;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20000u;
  KeInitializeEvent((PRKEVENT)((char *)MiniportAdapterHandle + 1912), NotificationEvent, 1u);
  if ( (AttributeFlags & 0x20) != 0 || (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x40000u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpcX,
      MiniportAdapterHandle);
    *((_QWORD *)MiniportAdapterHandle + 55) = ndisMSendCompleteX;
  }
  else
  {
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpc,
      MiniportAdapterHandle);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) != 0 )
    ndisReferencePackage((__int64)&dword_1C0097378);
  v11 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v11 > 5u || v11 == 5 && *((_BYTE *)MiniportAdapterHandle + 33) || (AttributeFlags & 0x200) != 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 2u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000u;
  }
  if ( ndisPadShortPackets && (AttributeFlags & 0x810) == 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000000u;
  }
  if ( (AttributeFlags & 0x80u) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100000u;
  *((_DWORD *)MiniportAdapterHandle + 30) |= 0x10000u;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  v13 = v12;
  *((_DWORD *)MiniportAdapterHandle + 464) = 727382;
  ndisSetMiniportHandlers((__int64)MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v13);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x60u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)MiniportAdapterHandle);
}
