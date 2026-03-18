/*
 * XREFs of ObCreateObjectType @ 0x140621880
 * Callers:
 *     ExpKeyedEventInitialization @ 0x14089EE78 (ExpKeyedEventInitialization.c)
 *     CmpCreateObjectTypes @ 0x14089F16C (CmpCreateObjectTypes.c)
 *     DbgkpInitializePhase0 @ 0x14089F2E0 (DbgkpInitializePhase0.c)
 *     MiSectionInitialization @ 0x14089F4C0 (MiSectionInitialization.c)
 *     MiInitializeSessionIds @ 0x14089F6EC (MiInitializeSessionIds.c)
 *     WmipInitializeSecurity @ 0x14089FA2C (WmipInitializeSecurity.c)
 *     PspInitializeSiloStructures @ 0x14089FF04 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x1408A0088 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x1408A0824 (ExpWin32Initialization.c)
 *     IoCreateObjectTypes @ 0x1408A0A1C (IoCreateObjectTypes.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     SepTokenInitialization @ 0x1408BD630 (SepTokenInitialization.c)
 *     PopEtInit @ 0x1408C3458 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x1408C40AC (ExpInitializeCallbacks.c)
 *     PopPowerRequestInit @ 0x1408C5EB8 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x1408C7E8C (ExpWorkerFactoryInitialization.c)
 *     EtwpInitializeRegistration @ 0x1408C88E0 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x1408C8B68 (ExpMutantInitialization.c)
 *     EtwpInitializeCoverageSampler @ 0x1408C8D9C (EtwpInitializeCoverageSampler.c)
 *     ExpProfileInitialization @ 0x1408C8F84 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x1408C95E8 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x1408C9738 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1408C97D0 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
