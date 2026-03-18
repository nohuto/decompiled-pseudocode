/*
 * XREFs of KiDeregisterNmiSxCallback @ 0x140203AB4
 * Callers:
 *     KeDeregisterNmiCallback @ 0x140203800 (KeDeregisterNmiCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1401435F0 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiDeregisterNmiSxCallback(PVOID a1)
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
    if ( v4[3] == a1 )
      break;
    v5 = v4;
    v4 = (PVOID *)*v4;
  }
  while ( v4 );
  if ( v4 && v4[3] == a1 )
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
    return 0LL;
  }
  else
  {
LABEL_13:
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    __writecr8(v6);
    return 3221225480LL;
  }
}
