/*
 * XREFs of PoQueryProcessEnergyTrackingState @ 0x1406D0590
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14006DBC0 (RtlStringCchCopyNW.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall PoQueryProcessEnergyTrackingState(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8

  memset((void *)a2, 0, 0x90uLL);
  v4 = *(_QWORD *)(a1 + 1832);
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v4 + 344, 0LL);
    *(_DWORD *)(a2 + 4) = (unsigned __int16)*(_DWORD *)(v4 + 376);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v4 + 380);
    v6 = *(_QWORD *)(v4 + 368);
    if ( v6 )
      RtlStringCchCopyNW(
        (NTSTRSAFE_PWSTR)(a2 + 16),
        0x40uLL,
        (STRSAFE_PCNZWCH)(v6 + 32),
        (*(_QWORD *)(v6 + 24) >> 17) & 0x1FFFFFFFLL);
    PopReleaseRwLock(v4 + 344);
  }
}
