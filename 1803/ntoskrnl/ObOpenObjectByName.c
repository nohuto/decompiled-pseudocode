/*
 * XREFs of ObOpenObjectByName @ 0x140557B60
 * Callers:
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     NtOpenSemaphore @ 0x1405578E4 (NtOpenSemaphore.c)
 *     NtOpenMutant @ 0x140557988 (NtOpenMutant.c)
 *     NtOpenEvent @ 0x140557A2C (NtOpenEvent.c)
 *     NtOpenDirectoryObject @ 0x140557AD0 (NtOpenDirectoryObject.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1405F7614 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     NtOpenSession @ 0x1406121B8 (NtOpenSession.c)
 *     CmpCreatePredefined @ 0x14062EBFC (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x140653090 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x1406EC05C (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1407073A8 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x14071CF0C (NtOpenIoCompletion.c)
 *     NtOpenJobObject @ 0x14077B1B4 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x1407BEBC0 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x1407C807C (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  unsigned __int64 CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
