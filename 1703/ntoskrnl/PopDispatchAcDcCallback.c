/*
 * XREFs of PopDispatchAcDcCallback @ 0x1406CF3C0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14006EEC0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_14034BB2C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
