/*
 * XREFs of ObOpenObjectByName @ 0x1404CD2A0
 * Callers:
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     NtOpenSemaphore @ 0x1404CD020 (NtOpenSemaphore.c)
 *     NtOpenMutant @ 0x1404CD0C4 (NtOpenMutant.c)
 *     NtOpenEvent @ 0x1404CD168 (NtOpenEvent.c)
 *     NtOpenDirectoryObject @ 0x1404CD210 (NtOpenDirectoryObject.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     NtOpenSession @ 0x14058334C (NtOpenSession.c)
 *     CmpCreatePredefined @ 0x1405A47C8 (CmpCreatePredefined.c)
 *     IopReferenceDriverObjectByName @ 0x1405AD78C (IopReferenceDriverObjectByName.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     NtOpenPartition @ 0x1405D3F94 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x14065EC8C (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140677CA0 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x14068C23C (NtOpenIoCompletion.c)
 *     NtOpenJobObject @ 0x1406E0F04 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x140718768 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140720F3C (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(int a1, int a2, char a3, int a4, int a5, __int64 a6, __int64 a7)
{
  unsigned __int64 CurrentSilo; // rax
  int v12; // r8d

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
