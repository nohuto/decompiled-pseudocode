/*
 * XREFs of WdipSemEnableContextProvider @ 0x14060DC28
 * Callers:
 *     WdipSemEnableContextProviders @ 0x14060DBCC (WdipSemEnableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemEnableDisableTrace @ 0x14060DD28 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r15
  int v12; // r14d

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A4E08, 0LL);
  if ( !a1 )
  {
    v2 = -1073741811;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_BYTE *)(a1 + 18);
    v8 = *(_BYTE *)(v6 + 48);
    v9 = *(_QWORD *)(v6 + 56);
    v10 = *(_DWORD *)(v6 + 64);
    if ( v7 <= v8 )
      v7 = *(_BYTE *)(v6 + 48);
    v11 = v9 | *(_QWORD *)(a1 + 24);
    v12 = v10 | *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(v6 + 69) && v11 == v9 && v7 == v8 && v12 == v10 )
      goto LABEL_8;
    LOBYTE(v4) = v7;
    v2 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           a1,
           v4,
           (unsigned int)v9 | *(_DWORD *)(a1 + 24),
           v12,
           1);
    if ( v2 >= 0 )
    {
      *(_BYTE *)(v6 + 69) = 1;
      *(_QWORD *)(v6 + 56) = v11;
      *(_BYTE *)(v6 + 48) = v7;
      *(_DWORD *)(v6 + 64) = v12;
LABEL_8:
      ++*(_DWORD *)(v6 + 72);
    }
  }
LABEL_9:
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A4E08, 0LL, v4, v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
