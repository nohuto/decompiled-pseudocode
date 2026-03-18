/*
 * XREFs of InitSystemThread @ 0x1C007CCE0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ClearAppStarting @ 0x1C0051D70 (ClearAppStarting.c)
 *     InitClientInfo @ 0x1C007CED0 (InitClientInfo.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  int v12; // ecx
  LARGE_INTEGER v13; // rdi
  int v14; // r8d
  __int64 ThreadWin32Thread; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  PsGetThreadProcess(KeGetCurrentThread());
  v5 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v12) = byte_1C0186D98 - 1;
      Template_xqx(
        v12,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v14,
        v13.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v14,
        0,
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v16 = Win32AllocPoolWithQuota(240LL, 0x69637355u);
  *(_QWORD *)(ThreadWin32Thread + 432) = v16;
  if ( v16 )
  {
    *(_DWORD *)(ThreadWin32Thread + 440) = *(_DWORD *)(ThreadWin32Thread + 440) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(ThreadWin32Thread + 448);
        if ( v17 )
          Win32FreePool(v17);
        v18 = Win32AllocPoolWithQuota(*(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *(_QWORD *)(ThreadWin32Thread + 448) = v18;
        if ( v18 )
        {
          *(_QWORD *)(v18 + 8) = v18 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL), a1[1], *(unsigned __int16 *)a1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL)
                   + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(ThreadWin32Thread + 448) = *(_WORD *)a1;
        }
      }
      v19 = *(_QWORD *)(ThreadWin32Thread + 376);
      if ( v19 && (*(_DWORD *)(v19 + 12) & 0x40) != 0 )
        ClearAppStarting(v19);
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
