/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1400DEBA0
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1401240E0 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     WmipEventNotification @ 0x140567CD0 (WmipEventNotification.c)
 *     IoWMISystemControl @ 0x14057070C (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140570A50 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x14057F230 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x14057F2D0 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14057F320 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x14058E000 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x140742A98 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
