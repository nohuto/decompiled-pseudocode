/*
 * XREFs of ObCreateObjectType @ 0x14059EB50
 * Callers:
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     IoCreateObjectTypes @ 0x1407FCED4 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     ExpWin32Initialization @ 0x1407FEC3C (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x1407FEE34 (ExpTimerInitialization.c)
 *     PspInitializeSiloStructures @ 0x1407FEF44 (PspInitializeSiloStructures.c)
 *     WmipInitializeSecurity @ 0x1407FF444 (WmipInitializeSecurity.c)
 *     MiInitializeSessionIds @ 0x1407FF8DC (MiInitializeSessionIds.c)
 *     MiInitializePartitions @ 0x1407FFA0C (MiInitializePartitions.c)
 *     MiSectionInitialization @ 0x140804AC4 (MiSectionInitialization.c)
 *     SepTokenInitialization @ 0x14081B048 (SepTokenInitialization.c)
 *     DbgkpInitializePhase0 @ 0x14082130C (DbgkpInitializePhase0.c)
 *     ExpInitializeCallbacks @ 0x1408219B8 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x14082212C (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x14082399C (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x14082478C (ExpWorkerFactoryInitialization.c)
 *     EtwpInitializeRegistration @ 0x140825108 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x1408252EC (ExpMutantInitialization.c)
 *     CmpCreateObjectTypes @ 0x140825550 (CmpCreateObjectTypes.c)
 *     ExpProfileInitialization @ 0x1408256D4 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140825C98 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x140825E60 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140825EF8 (ExpEventInitialization.c)
 *     PopEtInit @ 0x140826858 (PopEtInit.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
