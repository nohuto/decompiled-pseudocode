/*
 * XREFs of RaidDeleteUnit @ 0x1C0012370
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0012CC0 (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001784C (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C003A220 (RaUnitAdapterRemove.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C00123F4 (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0014ED8 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0025F1C (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C00471B4 (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rax

  RaidUnitSavePowerCycleCount(a1);
  if ( (*(_BYTE *)(a1 + 154) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    if ( a1 == *(_QWORD *)(v2 + 5144) )
    {
      *(_QWORD *)(v2 + 5144) = 0LL;
      v2 = *(_QWORD *)(a1 + 24);
    }
    if ( v2 && *(_BYTE *)(a1 + 2624) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2656), 0, 1) == 1 )
      RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1584) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1576));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
