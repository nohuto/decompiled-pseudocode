/*
 * XREFs of EtwRegister @ 0x140601F00
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     KiIntSteerConnect @ 0x1401691C4 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x14016EBB0 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x1401867E4 (McGenEventRegister.c)
 *     HvlpEtwRegister @ 0x14022D644 (HvlpEtwRegister.c)
 *     PfSnBeginBootPhase @ 0x14047892C (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     PopDiagSleepStudyInitialize @ 0x1406249EC (PopDiagSleepStudyInitialize.c)
 *     WdipSemEnableSemProvider @ 0x1406394B8 (WdipSemEnableSemProvider.c)
 *     DbgkpStartSystemErrorHandler @ 0x140711300 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140711794 (DbgkCaptureLiveDump.c)
 *     sub_1407BE3D4 @ 0x1407BE3D4 (sub_1407BE3D4.c)
 *     sub_1407BE6B4 @ 0x1407BE6B4 (sub_1407BE6B4.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 *     KseInitialize @ 0x1408A392C (KseInitialize.c)
 *     PopDiagInitialize @ 0x1408A5C04 (PopDiagInitialize.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     SmInitSystem @ 0x1408C16B8 (SmInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x1408C57D4 (PopBatteryInitPhaseTwo.c)
 *     PerfDiagInitialize @ 0x1408C82CC (PerfDiagInitialize.c)
 *     PnpDiagInitialize @ 0x1408C9A90 (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x1408C9FAC (WheapInitializeEventing.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  int v6; // esi
  int v7; // ebp
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)EnableCallback;
  v7 = (int)ProviderId;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  return EtwpRegisterProvider(v8, v7, 3, v6, (__int64)CallbackContext, retaddr, (__int64)RegHandle);
}
