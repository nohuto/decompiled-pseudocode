/*
 * XREFs of ObOpenObjectByName @ 0x14051AD00
 * Callers:
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x14051AA48 (IopReferenceDriverObjectByName.c)
 *     NtOpenSemaphore @ 0x14051AB08 (NtOpenSemaphore.c)
 *     NtOpenMutant @ 0x14051ABAC (NtOpenMutant.c)
 *     NtOpenEvent @ 0x14051AC50 (NtOpenEvent.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     CmpCreatePredefined @ 0x1405C1114 (CmpCreatePredefined.c)
 *     NtOpenSession @ 0x1405E228C (NtOpenSession.c)
 *     NtOpenPartition @ 0x1405EFBCC (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x140687AA0 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1406A21DC (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x1406B81EC (NtOpenIoCompletion.c)
 *     NtOpenJobObject @ 0x140717204 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x140757F6C (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140760E34 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, CurrentSilo, a7);
}
