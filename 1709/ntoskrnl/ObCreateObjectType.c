/*
 * XREFs of ObCreateObjectType @ 0x1405C6D70
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     CmpCreateObjectTypes @ 0x14083A96C (CmpCreateObjectTypes.c)
 *     DbgkpInitializePhase0 @ 0x14083EE54 (DbgkpInitializePhase0.c)
 *     IoCreateObjectTypes @ 0x140841088 (IoCreateObjectTypes.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     ExpWin32Initialization @ 0x14084362C (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x1408439B8 (ExpTimerInitialization.c)
 *     PspInitializeSiloStructures @ 0x140843AC8 (PspInitializeSiloStructures.c)
 *     WmipInitializeSecurity @ 0x140843F94 (WmipInitializeSecurity.c)
 *     SepTokenInitialization @ 0x14084B9C8 (SepTokenInitialization.c)
 *     ExpInitializeCallbacks @ 0x140852C8C (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140853288 (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140853E60 (PopPowerRequestInit.c)
 *     MiSectionInitialization @ 0x14085467C (MiSectionInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140855B44 (ExpWorkerFactoryInitialization.c)
 *     MiInitializeSessionIds @ 0x140856228 (MiInitializeSessionIds.c)
 *     EtwpInitializeRegistration @ 0x1408566F0 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x140856A9C (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140856DEC (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x1408575D8 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x140857784 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x14085781C (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
