/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140681000
 * Callers:
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     DbgkRegisterErrorPort @ 0x1405D1A50 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14068102C (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *a1)
{
  ObCloseHandle(a1[1], 0);
  ExFreePoolWithTag(a1, 0);
}
