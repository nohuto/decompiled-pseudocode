/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C01502A8
 * Callers:
 *     NtCompositionInputThread @ 0x1C0150840 (NtCompositionInputThread.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0093E74 (rimConvertUserToKernelEventHandle.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C0150218 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(
        CInputManager *this,
        void *a2,
        void *a3,
        int (*a4)(struct tagDITCALLBACKSTRUCT *),
        int a5)
{
  CInputManager *v5; // rdi
  int v8; // ebx
  struct _KTHREAD *v9; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbp
  LARGE_INTEGER v21; // rcx
  LARGE_INTEGER v22; // rsi
  LARGE_INTEGER v23; // r8
  __int64 v25; // [rsp+20h] [rbp-38h]
  int v26; // [rsp+20h] [rbp-38h]
  HANDLE v27; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v5 = g_pInputManager;
  Handle = 0LL;
  v27 = 0LL;
  v8 = rimConvertUserToKernelEventHandle(a2, &Handle);
  if ( v8 >= 0 )
  {
    v8 = rimConvertUserToKernelEventHandle(a3, &v27);
    if ( v8 >= 0 )
    {
      v9 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v5 + 1,
                                (signed __int64)KeGetCurrentThread(),
                                0LL);
      if ( !v9 || v9 == KeGetCurrentThread() )
      {
        v10 = Handle;
        Handle = 0LL;
        *((_QWORD *)v5 + 2) = v10;
        v11 = v27;
        v27 = 0LL;
        *((_QWORD *)v5 + 3) = v11;
        *((_QWORD *)v5 + 4) = *(_QWORD *)v5;
        *((_DWORD *)v5 + 17) = a5;
        *((_QWORD *)v5 + 5) = a4;
        v8 = UserActivateDwmInputProcessing((char *)v5 + 16);
        if ( v8 >= 0 )
          v8 = UserProcessDwmInput((char *)v5 + 16);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v12, v14);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v20 = PsGetCurrentThreadWin32Thread(v18, v17, v19);
        if ( v20 )
        {
          v22 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v20 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            v26 = 0;
            LOBYTE(v21.LowPart) = byte_1C0186D98 - 1;
            Template_xqx(
              v21.QuadPart,
              &AcquiredExclusiveUserCritEvent,
              v23.QuadPart,
              v22.QuadPart,
              v26,
              gullUserCritAcquireToken);
          }
          if ( v22.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            LODWORD(v25) = 1000 * v22.QuadPart / gliQpcFreq.QuadPart;
            Template_xqx(
              (__int64)gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v23.QuadPart,
              0LL,
              v25,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v20 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        gptiCurrent = v16;
        gbValidateHandleForIL = 1;
        CInputManager::CleanupDwmInputThread(v5);
        UserSessionSwitchLeaveCrit();
      }
      else
      {
        v8 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v27 )
        ZwClose(v27);
    }
  }
  return (unsigned int)v8;
}
