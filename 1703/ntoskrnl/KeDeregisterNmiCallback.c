/*
 * XREFs of KeDeregisterNmiCallback @ 0x1401FD710
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14015D8E0 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  int v2; // esi
  KIRQL v3; // al
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  KIRQL v6; // bp
  unsigned int v7; // edi
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity.Group = 0;
  v2 = 0;
  PreviousAffinity.Mask = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
  v4 = (PVOID *)KiNmiCallbackListHead;
  v5 = &KiNmiCallbackListHead;
  v6 = v3;
  if ( !KiNmiCallbackListHead )
    goto LABEL_13;
  do
  {
    if ( v4[3] == Handle )
      break;
    v5 = v4;
    v4 = (PVOID *)*v4;
  }
  while ( v4 );
  if ( v4 && v4[3] == Handle )
  {
    *v5 = *v4;
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    __writecr8(v6);
    v7 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        if ( v2 )
        {
          KiSetSystemAffinityThreadToProcessor(v7, 0LL);
        }
        else
        {
          KiSetSystemAffinityThreadToProcessor(v7, &PreviousAffinity);
          v2 = 1;
        }
        ++v7;
      }
      while ( v7 < (unsigned int)KeNumberProcessors_0 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v4, 0x494D4E4Bu);
    return 0;
  }
  else
  {
LABEL_13:
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    __writecr8(v6);
    return -1073741816;
  }
}
