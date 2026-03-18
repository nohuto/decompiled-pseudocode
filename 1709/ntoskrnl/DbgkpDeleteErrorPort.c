/*
 * XREFs of DbgkpDeleteErrorPort @ 0x1406AC1D0
 * Callers:
 *     DbgkFlushErrorPort @ 0x1404FCFE8 (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x1405EBA80 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1406AC1FC (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
