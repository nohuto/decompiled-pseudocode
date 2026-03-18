/*
 * XREFs of WdipSemEnableContextProvider @ 0x14057CA58
 * Callers:
 *     WdipSemEnableContextProviders @ 0x14057C9FC (WdipSemEnableContextProviders.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     WdipSemEnableDisableTrace @ 0x14046858C (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  __int64 v4; // rbx
  unsigned __int8 v5; // cl
  int v6; // edx
  char v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // ebp

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140347D88, 0LL);
  if ( !a1 )
  {
    v2 = -1073741811;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_BYTE *)(v4 + 48);
    v6 = *(_DWORD *)(v4 + 64);
    v7 = v5;
    if ( *(_BYTE *)(a1 + 18) > v5 )
      v7 = *(_BYTE *)(a1 + 18);
    v8 = *(_QWORD *)(v4 + 56);
    v9 = v8 | *(_QWORD *)(a1 + 24);
    v10 = v6 | *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(v4 + 69) && v9 == v8 && v7 == v5 && v10 == v6 )
      goto LABEL_8;
    v2 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           a1,
           v7,
           v8 | *(_QWORD *)(a1 + 24),
           v10,
           1);
    if ( v2 >= 0 )
    {
      *(_BYTE *)(v4 + 69) = 1;
      *(_QWORD *)(v4 + 56) = v9;
      *(_BYTE *)(v4 + 48) = v7;
      *(_DWORD *)(v4 + 64) = v10;
LABEL_8:
      ++*(_DWORD *)(v4 + 72);
    }
  }
LABEL_9:
  ExReleasePushLockEx((ULONG_PTR)&qword_140347D88, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
