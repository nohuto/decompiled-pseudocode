/*
 * XREFs of PopDispatchAcDcCallback @ 0x14076B000
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_1403AAA2C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
