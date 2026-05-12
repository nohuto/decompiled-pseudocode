/*
 * XREFs of RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006F88 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     RaidpAdapterDpcRoutine @ 0x1C000AE80 (RaidpAdapterDpcRoutine.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C0017030 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00281D4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028680 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0039658 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxIdleComponentFromMiniport(__int64 a1, __int64 a2)
{
  bool v3; // al

  v3 = RaidAdapterPoFxIdleComponent(a1, a2, 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 88LL));
  return !v3 ? 0xC100000C : 0;
}
