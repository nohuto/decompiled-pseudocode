/*
 * XREFs of AlpcpCleanupProcessViews @ 0x140511AB4
 * Callers:
 *     LpcExitProcess @ 0x140511A70 (LpcExitProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     AlpcpForceUnlinkSecureView @ 0x14048BE1C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v2; // r13
  volatile signed __int64 *v3; // rsi
  const void *v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // r12
  _QWORD *v18; // [rsp+60h] [rbp+8h]
  const void *v19; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v2 = (_QWORD *)(a1 + 1624);
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 1616);
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 1616, 0LL);
  v18 = v2;
  while ( (_QWORD *)*v2 != v2 )
  {
    v10 = *v2 - 80LL;
    v11 = v5 + 1;
    v12 = 0LL;
    if ( v4 == (const void *)v10 )
      v12 = v6;
    v5 = 0;
    if ( v4 == (const void *)v10 )
      v5 = v11;
    v13 = *v2 - 80LL;
    if ( v4 == (const void *)v10 )
      v13 = (__int64)v4;
    v19 = (const void *)v13;
    v17 = v10 & -(__int64)(AlpcpReferenceBlob(v10) != 0);
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3, v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)v3);
    if ( v12 )
    {
      v6 = v12;
      if ( v5 > 0x64 )
      {
        v2 = v18;
        if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v12 - MEMORY[0xFFFFF780000003B0]) > 0x23C34600 )
        {
          DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v19);
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
          v5 = 0;
          v6 = 0LL;
        }
      }
    }
    else
    {
      v2 = v18;
      v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    if ( v17 )
    {
      AlpcpForceUnlinkSecureView(v17);
      AlpcpDereferenceBlobEx(v17, 1);
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    v4 = v19;
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
