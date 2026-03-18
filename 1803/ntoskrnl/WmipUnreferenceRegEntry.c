/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1400739AC
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140162060 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140589B0C (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140589E50 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x1406007DC (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140600880 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x1406045B0 (WmipRegistrationWorker.c)
 *     WmipEventNotification @ 0x140611850 (WmipEventNotification.c)
 *     WmipFreeTraceDeviceList @ 0x140646460 (WmipFreeTraceDeviceList.c)
 *     WmipUpdateRegistration @ 0x140651638 (WmipUpdateRegistration.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
