/*
 * XREFs of PopDispatchAcDcCallback @ 0x140706B70
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_1403661AC == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
