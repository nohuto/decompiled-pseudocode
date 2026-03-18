/*
 * XREFs of CmpGetCallbackObjectContext @ 0x1405585B8
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1405A75B0 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( *a1 != 1803104306 )
    return 0LL;
  v4 = a1 + 18;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v9 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    v10 = *a2;
    while ( 1 )
    {
      v11 = v9[4];
      if ( v11 == v10 )
        break;
      if ( v11 >= v10 )
      {
        v9 = (_QWORD *)*v9;
        if ( v9 != v4 )
          continue;
      }
      goto LABEL_12;
    }
    v2 = v9[7];
  }
LABEL_12:
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v7, v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
