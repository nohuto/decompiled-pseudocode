/*
 * XREFs of KiDeregisterNmiSxCallback @ 0x140240F44
 * Callers:
 *     KeDeregisterNmiCallback @ 0x140240BE0 (KeDeregisterNmiCallback.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1401790D0 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiDeregisterNmiSxCallback(PVOID a1)
{
  int v2; // esi
  KIRQL v3; // al
  PVOID *v4; // rbx
  KIRQL v5; // bp
  PVOID *v6; // rax
  PVOID v7; // r8
  PVOID *v8; // rdx
  PVOID *v9; // r9
  bool v10; // zf
  unsigned int v11; // edi
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity.Group = 0;
  v2 = 0;
  PreviousAffinity.Mask = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
  v4 = (PVOID *)KiNmiCallbackListHead;
  v5 = v3;
  v6 = &KiNmiCallbackListHead;
  if ( !KiNmiCallbackListHead )
    goto LABEL_16;
  while ( 1 )
  {
    v7 = v4[3];
    v8 = v4;
    v9 = v6;
    v10 = v7 == a1;
    if ( v7 == a1 )
      break;
    v6 = v4;
    v4 = (PVOID *)*v4;
    if ( !v4 )
    {
      v10 = v7 == a1;
      break;
    }
  }
  if ( v10 )
    v8 = v9;
  if ( v4 && v4[3] == a1 )
  {
    *v8 = *v4;
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    __writecr8(v5);
    v11 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        if ( v2 )
        {
          KiSetSystemAffinityThreadToProcessor(v11, 0LL);
        }
        else
        {
          KiSetSystemAffinityThreadToProcessor(v11, &PreviousAffinity);
          v2 = 1;
        }
        ++v11;
      }
      while ( v11 < (unsigned int)KeNumberProcessors_0 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v4, 0x494D4E4Bu);
    return 0LL;
  }
  else
  {
LABEL_16:
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    __writecr8(v5);
    return 3221225480LL;
  }
}
