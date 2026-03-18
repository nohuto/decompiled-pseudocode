/*
 * XREFs of EtwRegister @ 0x1404F0AB0
 * Callers:
 *     KiIntSteerConnect @ 0x1400B32A0 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140134688 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x140145CE0 (McGenEventRegister.c)
 *     HvlpEtwRegister @ 0x1401F0418 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x140429124 (PfSnBeginBootPhase.c)
 *     WdipSemEnableSemProvider @ 0x1405AADCC (WdipSemEnableSemProvider.c)
 *     TraceLoggingRegisterEx @ 0x1405AB2CC (TraceLoggingRegisterEx.c)
 *     PopDiagSleepStudyInitialize @ 0x1405AD454 (PopDiagSleepStudyInitialize.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406AC9C8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x1406ACEEC (DbgkCaptureLiveDump.c)
 *     sub_140757694 @ 0x140757694 (sub_140757694.c)
 *     sub_140757944 @ 0x140757944 (sub_140757944.c)
 *     PopDiagInitialize @ 0x140827B48 (PopDiagInitialize.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     PnpDiagInitialize @ 0x14083E960 (PnpDiagInitialize.c)
 *     KseInitialize @ 0x1408404D4 (KseInitialize.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     SmInitSystem @ 0x14085032C (SmInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x140853920 (PopBatteryInitPhaseTwo.c)
 *     PerfDiagInitialize @ 0x140854D40 (PerfDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140857E18 (WheapInitializeEventing.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x1404F0B1C (EtwpRegisterProvider.c)
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
