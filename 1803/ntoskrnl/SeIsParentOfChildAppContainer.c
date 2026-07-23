/*
 * XREFs of SeIsParentOfChildAppContainer @ 0x14048B860
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     SepGetTokenSessionMapEntry @ 0x1402A1924 (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x140540D98 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x140794BFC (SepFindMatchingLowBoxNumberEntries.c)
 */

BOOLEAN __fastcall SeIsParentOfChildAppContainer(unsigned int a1, int a2, int a3)
{
  BOOLEAN IsParentOfChildAppContainer; // di
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rax
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  IsParentOfChildAppContainer = 0;
  v5 = 0;
  if ( !a2 || !a3 )
    return 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v5 = 1;
    if ( (int)SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2) < 0 )
    {
LABEL_13:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
      KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return IsParentOfChildAppContainer;
    }
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
  }
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( (int)SepFindMatchingLowBoxNumberEntries(*(PRTL_DYNAMIC_HASH_TABLE *)(v9 + 24), (__int64)&v13) >= 0 )
    IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(*(PSID *)(v14 + 32), *(PSID *)(v13 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v10, v11, v12);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
    goto LABEL_13;
  return IsParentOfChildAppContainer;
}
