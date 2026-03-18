/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14048BED4
 * Callers:
 *     DbgkpRemoveErrorPort @ 0x14048BA68 (DbgkpRemoveErrorPort.c)
 *     DbgkFlushErrorPort @ 0x1405103C0 (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140710660 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
