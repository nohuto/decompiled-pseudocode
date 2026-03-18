/*
 * XREFs of AlpcpCleanupProcessViews @ 0x1404FCCD4
 * Callers:
 *     LpcExitProcess @ 0x1404FCC90 (LpcExitProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     AlpcpForceUnlinkSecureView @ 0x140451F5C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v2; // r13
  volatile signed __int64 *v3; // rsi
  const void *v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rbp
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r15
  _QWORD *v9; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = (_QWORD *)(a1 + 1624);
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 1616);
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 1616, 0LL);
  v9 = v2;
  while ( (_QWORD *)*v2 != v2 )
  {
    v7 = *v2 - 80LL;
    if ( v4 == (const void *)v7 )
    {
      ++v5;
    }
    else
    {
      v5 = 0;
      v4 = (const void *)(*v2 - 80LL);
      v6 = 0LL;
    }
    v8 = v7 & -(__int64)(AlpcpReferenceBlob(v7) != 0);
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    if ( v6 )
    {
      if ( v5 > 0x64 )
      {
        v2 = v9;
        if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - v6) > 0x23C34600 )
        {
          DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v4);
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
          v5 = 0;
          v6 = 0LL;
        }
      }
    }
    else
    {
      v2 = v9;
      v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    if ( v8 )
    {
      AlpcpForceUnlinkSecureView(v8);
      AlpcpDereferenceBlobEx(v8, 1);
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
