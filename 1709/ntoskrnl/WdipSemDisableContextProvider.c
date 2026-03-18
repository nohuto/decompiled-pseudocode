/*
 * XREFs of WdipSemDisableContextProvider @ 0x14073FE74
 * Callers:
 *     WdipSemDisableContextProviders @ 0x14073FF84 (WdipSemDisableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     WdipSemCaptureState @ 0x140279D40 (WdipSemCaptureState.c)
 *     WdipSemEnableDisableTrace @ 0x1405A8CF4 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebp
  __int64 v6; // r8
  __int64 v7; // rbx
  __int16 v8; // cx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403613A8, 0LL);
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2, v6);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v7 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v7 + 40) )
        {
          v3 = WdipSemEnableDisableTrace(
                 v8,
                 (__int128 *)a1,
                 *(_BYTE *)(v7 + 16),
                 *(_QWORD *)(v7 + 24),
                 *(_DWORD *)(v7 + 32),
                 1);
          if ( v3 >= 0 )
          {
            *(_BYTE *)(v7 + 48) = *(_BYTE *)(v7 + 16);
            *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 24);
            *(_DWORD *)(v7 + 64) = *(_DWORD *)(v7 + 32);
          }
        }
        else
        {
          v3 = WdipSemEnableDisableTrace(v8, (__int128 *)a1, 0, 0LL, 0, 0);
          if ( v3 >= 0 )
            memset((void *)(v7 + 48), 0, 0x20uLL);
        }
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_1403613A8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
