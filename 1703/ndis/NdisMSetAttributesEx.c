/*
 * XREFs of NdisMSetAttributesEx @ 0x1C00F5ED0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AA760 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1C00DDB40 (NdisMSetAttributes.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C00145E0 (NdisInitializeTimer.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisSetMiniportHandlers @ 0x1C00F6108 (ndisSetMiniportHandlers.c)
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
  int v11; // edx
  struct _NDIS_TIMER *v12; // rcx
  unsigned __int8 v13; // al
  KIRQL v14; // al
  KIRQL v15; // bl

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Eu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x80u) == 0 )
    *((_QWORD *)MiniportAdapterHandle + 3) = MiniportAdapterContext;
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 727226;
  ndisSetMiniportHandlers(MiniportAdapterHandle);
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
  v11 = *((_DWORD *)MiniportAdapterHandle + 30);
  v12 = (struct _NDIS_TIMER *)((char *)MiniportAdapterHandle + 216);
  if ( (v11 & 0x20000) == 0 && (AttributeFlags & 0x20) == 0 )
  {
    NdisInitializeTimer(v12, (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpc, MiniportAdapterHandle);
  }
  else
  {
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11 | 0x40000;
    NdisInitializeTimer(v12, (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpcX, MiniportAdapterHandle);
    *((_QWORD *)MiniportAdapterHandle + 55) = ndisMSendCompleteX;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) != 0 )
    ndisReferencePackage((__int64)&dword_1C0091068);
  v13 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v13 > 5u || v13 == 5 && *((_BYTE *)MiniportAdapterHandle + 33) || (AttributeFlags & 0x200) != 0 )
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
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  v15 = v14;
  *((_DWORD *)MiniportAdapterHandle + 464) = 727389;
  ndisSetMiniportHandlers(MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v15);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Fu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)MiniportAdapterHandle);
}
