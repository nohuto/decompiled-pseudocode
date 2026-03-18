/*
 * XREFs of PoQueryProcessEnergyTrackingState @ 0x1407085F4
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     RtlStringCchCopyNW @ 0x1400F9D6C (RtlStringCchCopyNW.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall PoQueryProcessEnergyTrackingState(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8

  memset((void *)a2, 0, 0x90uLL);
  v4 = *(_QWORD *)(a1 + 1856);
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v4 + 432, 0LL);
    *(_DWORD *)(a2 + 4) = (unsigned __int16)*(_DWORD *)(v4 + 464);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v4 + 468);
    v6 = *(_QWORD *)(v4 + 456);
    if ( v6 )
      RtlStringCchCopyNW(
        (NTSTRSAFE_PWSTR)(a2 + 16),
        0x40uLL,
        (STRSAFE_PCNZWCH)(v6 + 32),
        (*(_QWORD *)(v6 + 24) >> 17) & 0x1FFFFFFFLL);
    PopReleaseRwLock(v4 + 432);
  }
}
