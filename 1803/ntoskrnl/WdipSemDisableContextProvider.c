/*
 * XREFs of WdipSemDisableContextProvider @ 0x14060DAC0
 * Callers:
 *     WdipSemDisableContextProviders @ 0x14060DA50 (WdipSemDisableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemCaptureState @ 0x140169DCC (WdipSemCaptureState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     WdipSemEnableDisableTrace @ 0x14060DD28 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int32 v9; // ecx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A4E08, 0LL);
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v8 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v8 + 40) )
        {
          LOBYTE(v6) = *(_BYTE *)(v8 + 16);
          v3 = WdipSemEnableDisableTrace(v9, a1, v6, *(_QWORD *)(v8 + 24), *(_DWORD *)(v8 + 32), 1);
          if ( v3 >= 0 )
          {
            *(_BYTE *)(v8 + 48) = *(_BYTE *)(v8 + 16);
            *(_QWORD *)(v8 + 56) = *(_QWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 64) = *(_DWORD *)(v8 + 32);
          }
        }
        else
        {
          v3 = WdipSemEnableDisableTrace(v9, a1, 0, 0, 0, 0);
          if ( v3 >= 0 )
            memset((void *)(v8 + 48), 0, 0x20uLL);
        }
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A4E08, 0LL, v6, v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
