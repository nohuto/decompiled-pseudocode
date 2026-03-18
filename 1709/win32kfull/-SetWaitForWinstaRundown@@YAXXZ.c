/*
 * XREFs of ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00D5894
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void SetWaitForWinstaRundown(void)
{
  void *KernelEvent; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+80h] [rbp+10h] BYREF
  void *ThreadHandle; // [rsp+88h] [rbp+18h] BYREF

  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  KernelEvent = (void *)CreateKernelEvent(1LL, 0LL);
  if ( ObOpenObjectByPointer(gpepCSRSS, 0, 0LL, 2u, 0LL, 0, &ProcessHandle) >= 0 )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           &ObjectAttributes,
           ProcessHandle,
           0LL,
           WaitForWinstaRundown,
           KernelEvent) >= 0 )
    {
      if ( KernelEvent )
        KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
      else
        UserSleep(100LL);
    }
  }
  if ( KernelEvent )
    Win32FreePool(KernelEvent, v1, v2);
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
