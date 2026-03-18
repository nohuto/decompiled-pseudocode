/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x1405D92E8
 * Callers:
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1405D9404 (CmpCreateGlobalKeyLockEntry.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  unsigned int v6; // edi
  _QWORD *GlobalKeyLockEntry; // rbx
  struct _KTHREAD *v8; // rax
  _QWORD *v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  v5 = qword_140386F08;
  v6 = 0;
  while ( 1 )
  {
    if ( (__int64 *)v5 == &qword_140386F08 )
      goto LABEL_5;
    if ( *(_QWORD *)(v5 + 24) == a1 )
      break;
    v5 = *(_QWORD *)v5;
  }
  if ( v5 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 16)) <= 1 )
      __fastfail(0xEu);
    *a2 = v5;
LABEL_8:
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v6;
  }
LABEL_5:
  ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  GlobalKeyLockEntry = (_QWORD *)CmpCreateGlobalKeyLockEntry(a1);
  if ( GlobalKeyLockEntry )
  {
    *(_WORD *)(a1 + 4) |= 0x80u;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    v9 = (_QWORD *)qword_140386F10;
    if ( *(__int64 **)qword_140386F10 != &qword_140386F08 )
      __fastfail(3u);
    *GlobalKeyLockEntry = &qword_140386F08;
    GlobalKeyLockEntry[1] = v9;
    *v9 = GlobalKeyLockEntry;
    qword_140386F10 = (__int64)GlobalKeyLockEntry;
    *a2 = (__int64)GlobalKeyLockEntry;
    goto LABEL_8;
  }
  return (unsigned int)-1073741670;
}
