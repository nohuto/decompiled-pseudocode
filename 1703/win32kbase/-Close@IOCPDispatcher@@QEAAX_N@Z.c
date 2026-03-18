/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C004CE30
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C004CF70 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C012E25C (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C004C6B8 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  HANDLE v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  int v15; // ecx
  LARGE_INTEGER v16; // rdi
  int v17; // r8d
  int v18; // [rsp+28h] [rbp-40h]
  _BYTE v19[56]; // [rsp+30h] [rbp-38h] BYREF
  char v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  if ( this[322] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit();
      while ( 1 )
      {
        v4 = this[322];
        LOBYTE(v18) = 0;
        v21 = -200000LL;
        v5 = ZwRemoveIoCompletionEx(v4, v19, 1LL, &v20, &v21, v18);
        if ( v5 < 0 )
          break;
        if ( v5 == 258 )
          goto LABEL_6;
      }
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_D(gBaseLog, v6, 2, 15, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, v5);
LABEL_6:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v6, v8);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v14 = PsGetCurrentThreadWin32Thread(v12, v11, v13);
      if ( v14 )
      {
        v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v15) = byte_1C0186D98 - 1;
          Template_xqx(
            v15,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v17,
            v16.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
        if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v17,
            0,
            1000 * v16.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v10;
      gbValidateHandleForIL = 1;
    }
    ZwClose(this[322]);
    this[322] = 0LL;
  }
}
