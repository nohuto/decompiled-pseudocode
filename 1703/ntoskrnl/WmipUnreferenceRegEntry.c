/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14006E848
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1401530D4 (WmipDeregisterRegEntry.c)
 *     WmipFreeTraceDeviceList @ 0x14043C0C0 (WmipFreeTraceDeviceList.c)
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x14055C374 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x14055C6B0 (WmipQueryWmiDataBlock.c)
 *     WmipEventNotification @ 0x140580E50 (WmipEventNotification.c)
 *     WmipDeregisterDevice @ 0x14059962C (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14059FC1C (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x1405C6890 (WmipRegistrationWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
