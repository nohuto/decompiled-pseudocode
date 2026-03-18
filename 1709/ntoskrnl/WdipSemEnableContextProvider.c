/*
 * XREFs of WdipSemEnableContextProvider @ 0x14073FFF4
 * Callers:
 *     WdipSemEnableContextProviders @ 0x1407400FC (WdipSemEnableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     WdipSemEnableDisableTrace @ 0x1405A8CF4 (WdipSemEnableDisableTrace.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403613A8, 0LL);
  if ( a1 )
  {
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
      if ( !*(_BYTE *)(v4 + 69) || v7 != v5 || v9 != v8 || v10 != v6 )
      {
        v2 = WdipSemEnableDisableTrace(
               _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
               (__int128 *)a1,
               v7,
               v8 | *(_QWORD *)(a1 + 24),
               v10,
               1);
        if ( v2 < 0 )
          goto LABEL_13;
        *(_BYTE *)(v4 + 69) = 1;
        *(_QWORD *)(v4 + 56) = v9;
        *(_BYTE *)(v4 + 48) = v7;
        *(_DWORD *)(v4 + 64) = v10;
      }
      ++*(_DWORD *)(v4 + 72);
    }
  }
  else
  {
    v2 = -1073741811;
  }
LABEL_13:
  ExReleasePushLockEx((ULONG_PTR)&qword_1403613A8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
