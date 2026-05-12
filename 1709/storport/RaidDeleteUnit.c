/*
 * XREFs of RaidDeleteUnit @ 0x1C001842C
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C00131A4 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C003B980 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003BEB4 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     RaidUnitSavePowerCycleCount @ 0x1C0018218 (RaidUnitSavePowerCycleCount.c)
 *     RaidUnitFreeResources @ 0x1C001827C (RaidUnitFreeResources.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C002D11C (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0046E3C (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rcx

  RaidUnitSavePowerCycleCount(a1);
  if ( (*(_BYTE *)(a1 + 154) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 5144) )
    *(_QWORD *)(v2 + 5144) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 2624)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2656), 0, 1) == 1 )
  {
    RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1584) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1576));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
