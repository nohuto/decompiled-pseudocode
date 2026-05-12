/*
 * XREFs of RaidDeleteUnit @ 0x1C0013250
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0013988 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C0039C30 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C00132D0 (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0013480 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C002C2AC (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C00464E4 (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rcx

  RaidUnitSavePowerCycleCount();
  if ( (*(_BYTE *)(a1 + 154) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 5144) )
    *(_QWORD *)(v2 + 5144) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 2576)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2608), 0, 1) == 1 )
  {
    RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1552) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1544));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
