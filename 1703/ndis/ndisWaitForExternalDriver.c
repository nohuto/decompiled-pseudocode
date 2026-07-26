/*
 * XREFs of ndisWaitForExternalDriver @ 0x1C00BF894
 * Callers:
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C00BF810 (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ndisWaitForEvent @ 0x1C00BF8F8 (ndisWaitForEvent.c)
 *     ndisFindSomeoneToBlame @ 0x1C00F0134 (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x1C00F031C (ndisWaitForAllProcessorsIdle.c)
 */

char __fastcall ndisWaitForExternalDriver(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
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
  ndisFindSomeoneToBlame(a3, a4, KeGetCurrentThread());
  return 0;
}
