/*
 * XREFs of NdisMSetAttributesEx @ 0x1C0104F50
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1C00E94D0 (NdisMSetAttributes.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001DEA0 (NdisInitializeTimer.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisSetMiniportHandlers @ 0x1C0104E18 (ndisSetMiniportHandlers.c)
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
  UINT v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // cl
  KIRQL v17; // al
  KIRQL v18; // bl

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x62u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x180) == 0 )
    *((_QWORD *)MiniportAdapterHandle + 3) = MiniportAdapterContext;
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 727327;
  ndisSetMiniportHandlers((__int64)MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  *((_DWORD *)MiniportAdapterHandle + 119) = AdapterType;
  if ( CheckForHangTimeInSeconds < 2 )
  {
    v11 = 2;
  }
  else if ( CheckForHangTimeInSeconds > 0x40 )
  {
    v11 = 64;
  }
  else
  {
    v11 = CheckForHangTimeInSeconds & 0xFFFFFFFE;
  }
  *((_DWORD *)MiniportAdapterHandle + 94) = v11;
  v12 = *((_DWORD *)MiniportAdapterHandle + 30);
  v13 = *((_DWORD *)MiniportAdapterHandle + 468) | 0x2000000;
  *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  if ( (AttributeFlags & 8) != 0 )
  {
    v12 |= 8u;
    v13 |= 1u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 1) != 0 )
  {
    v12 |= 0x800u;
    v13 |= 0x20u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    v12 |= 0x1000u;
    v13 |= 0x40u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    v12 |= 0x8000u;
    v13 |= 0x100u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13 | 0x200000;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 30) = v12 & 0xFFFDFFFF;
  KeInitializeEvent((PRKEVENT)((char *)MiniportAdapterHandle + 1912), NotificationEvent, 1u);
  v14 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (AttributeFlags & 0x20) != 0 || (v14 & 0x20000) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v14 | 0x40000;
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
  v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v15 & 0x20000) != 0 )
  {
    ndisReferencePackage((__int64)&dword_1C0098070);
    v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  v16 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v16 > 5u || v16 == 5 && *((_BYTE *)MiniportAdapterHandle + 33) || (AttributeFlags & 0x200) != 0 )
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
  *((_DWORD *)MiniportAdapterHandle + 30) = v15 | 0x10000;
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  v18 = v17;
  *((_DWORD *)MiniportAdapterHandle + 464) = 727490;
  ndisSetMiniportHandlers((__int64)MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v18);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x63u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)MiniportAdapterHandle);
}
