/*
 * XREFs of SepSetTokenLowboxNumber @ 0x14053F6FC
 * Callers:
 *     SepGetAnonymousToken @ 0x14009F040 (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     SeSetSessionIdToken @ 0x140546054 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x140640AD0 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     SepGetTokenSessionMapEntry @ 0x1402A1924 (SepGetTokenSessionMapEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x140613FF0 (SepInitializeLowBoxNumberTable.c)
 */

__int64 __fastcall SepSetTokenLowboxNumber(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  char v7; // r15
  char v8; // r12
  int LowBoxNumberEntry; // edi
  char *v10; // rsi
  struct _KTHREAD *v11; // rax
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *v22; // rax
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v24; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+48h] BYREF
  __int64 v26; // [rsp+78h] [rbp+50h]
  __int64 v27; // [rsp+80h] [rbp+58h] BYREF

  v26 = a2;
  v4 = *(unsigned int *)(a1 + 120);
  BugCheckParameter2 = 0LL;
  v27 = 0LL;
  v5 = a2;
  v7 = 0;
  v8 = 0;
  LowBoxNumberEntry = 0;
  if ( (unsigned int)v4 < 5 )
  {
    v10 = (char *)&g_SessionLowboxArray + 40 * v4;
    BugCheckParameter2 = (ULONG_PTR)v10;
LABEL_3:
    if ( !v10[32] )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = (volatile signed __int64 *)BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      if ( !v10[32] )
        LowBoxNumberEntry = SepInitializeLowBoxNumberTable(v18);
      if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v19, v20, v21);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
      v5 = v26;
    }
    if ( !LowBoxNumberEntry )
    {
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      v12 = (volatile signed __int64 *)BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      LowBoxNumberEntry = SepGetLowBoxNumberEntry(v12, v5, &v27);
      if ( !LowBoxNumberEntry )
        *(_QWORD *)(a1 + 1080) = v27;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v13, v14, v15);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
    }
    goto LABEL_10;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
  v7 = 1;
  TokenSessionMapEntry = SepGetTokenSessionMapEntry(v4, 0, &BugCheckParameter2);
  LowBoxNumberEntry = TokenSessionMapEntry;
  if ( TokenSessionMapEntry >= 0 )
    goto LABEL_24;
  if ( TokenSessionMapEntry == -1073741275 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v8 = 1;
    v7 = 0;
    LowBoxNumberEntry = SepGetTokenSessionMapEntry(v4, 1, &BugCheckParameter2);
  }
  if ( LowBoxNumberEntry >= 0 )
  {
LABEL_24:
    v10 = (char *)BugCheckParameter2;
    goto LABEL_3;
  }
LABEL_10:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock, a2, a3, a4);
    goto LABEL_29;
  }
  if ( v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
LABEL_29:
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LowBoxNumberEntry;
}
