/*
 * XREFs of EtwRegister @ 0x140589230
 * Callers:
 *     KiIntSteerConnect @ 0x14014C4CC (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x14014CE90 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x140167E78 (McGenEventRegister.c)
 *     HvlpEtwRegister @ 0x1401EB18C (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x140404E20 (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     PopDiagSleepStudyInitialize @ 0x1405B9544 (PopDiagSleepStudyInitialize.c)
 *     WdipSemEnableSemProvider @ 0x1405CA614 (WdipSemEnableSemProvider.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406817A8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 *     SepSqmInformation @ 0x1406F9138 (SepSqmInformation.c)
 *     sub_140717FB8 @ 0x140717FB8 (sub_140717FB8.c)
 *     sub_140718264 @ 0x140718264 (sub_140718264.c)
 *     KseInitialize @ 0x1407FBB98 (KseInitialize.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 *     SmInitSystem @ 0x14081FACC (SmInitSystem.c)
 *     PerfDiagInitialize @ 0x140824D70 (PerfDiagInitialize.c)
 *     PnpDiagInitialize @ 0x1408261A8 (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x1408266AC (WheapInitializeEventing.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  return EtwpRegisterProvider(
           v8,
           (__int64)ProviderId,
           3,
           (void (__fastcall *)(GUID *, __int64, __int64, __int64, __int64, __int64, __int64))EnableCallback,
           (__int64)CallbackContext,
           retaddr,
           (__int64 *)RegHandle);
}
