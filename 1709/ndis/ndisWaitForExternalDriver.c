/*
 * XREFs of ndisWaitForExternalDriver @ 0x1C00AB5E8
 * Callers:
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C00AB55C (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ndisWaitForEvent @ 0x1C00AB64C (ndisWaitForEvent.c)
 *     ndisFindSomeoneToBlame @ 0x1C00F9814 (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x1C00F9AB8 (ndisWaitForAllProcessorsIdle.c)
 */

char __fastcall ndisWaitForExternalDriver(__int64 a1, unsigned int a2, unsigned int a3, ULONG_PTR a4)
{
  unsigned int v4; // ebx
  KPRIORITY v9; // edi
  char v10; // al
  struct _KTHREAD *CurrentThread; // rcx

  v4 = a2;
  if ( a2 > 0x1388 )
  {
    if ( (unsigned __int8)((__int64 (*)(void))ndisWaitForEvent)() )
      return 1;
    v4 -= 5000;
  }
  v9 = KeSetPriorityThread(KeGetCurrentThread(), 2);
  ndisWaitForAllProcessorsIdle();
  v10 = ndisWaitForEvent(a1, v4);
  CurrentThread = KeGetCurrentThread();
  if ( v10 )
  {
    KeSetPriorityThread(CurrentThread, v9);
    return 1;
  }
  KeSetPriorityThread(CurrentThread, v9);
  ndisFindSomeoneToBlame(a3, a4);
  return 0;
}
