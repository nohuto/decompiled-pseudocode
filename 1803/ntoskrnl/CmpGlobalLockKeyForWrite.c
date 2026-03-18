/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x140645F54
 * Callers:
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x140646070 (CmpCreateGlobalKeyLockEntry.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 GlobalKeyLockEntry; // rbx
  unsigned int v8; // edi
  struct _KTHREAD *v9; // rax
  __int64 *v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  GlobalKeyLockEntry = qword_1403CA448;
  v8 = 0;
  while ( 1 )
  {
    if ( (__int64 *)GlobalKeyLockEntry == &qword_1403CA448 )
      goto LABEL_5;
    if ( *(_QWORD *)(GlobalKeyLockEntry + 24) == a1 )
      break;
    GlobalKeyLockEntry = *(_QWORD *)GlobalKeyLockEntry;
  }
  if ( GlobalKeyLockEntry )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(GlobalKeyLockEntry + 16)) <= 1 )
      __fastfail(0xEu);
LABEL_8:
    *a2 = GlobalKeyLockEntry;
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL, v5, v6);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v8;
  }
LABEL_5:
  ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL, v5, v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  GlobalKeyLockEntry = CmpCreateGlobalKeyLockEntry(a1);
  if ( GlobalKeyLockEntry )
  {
    *(_WORD *)(a1 + 4) |= 0x80u;
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    v10 = (__int64 *)qword_1403CA450;
    if ( *(__int64 **)qword_1403CA450 != &qword_1403CA448 )
      __fastfail(3u);
    *(_QWORD *)GlobalKeyLockEntry = &qword_1403CA448;
    *(_QWORD *)(GlobalKeyLockEntry + 8) = v10;
    *v10 = GlobalKeyLockEntry;
    qword_1403CA450 = GlobalKeyLockEntry;
    goto LABEL_8;
  }
  return (unsigned int)-1073741670;
}
