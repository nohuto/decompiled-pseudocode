/*
 * XREFs of NtMITWaitForMultipleObjectsEx @ 0x1C004C0E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0048F80 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserProcessMITInput @ 0x1C004C450 (UserProcessMITInput.c)
 *     ConvertUserHandlesToKernelHandles @ 0x1C004CFA4 (ConvertUserHandlesToKernelHandles.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITWaitForMultipleObjectsEx(__int64 a1, char *Src, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v6; // r13
  unsigned int v7; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  LONGLONG v13; // rcx
  __int64 v14; // rdi
  LARGE_INTEGER v15; // rbx
  int v16; // r8d
  __int64 v17; // r14
  void *v18; // rdi
  void **v19; // r12
  struct _MITIocpContext *v20; // rax
  struct _MITIocpContext *v21; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // r9
  __int64 i; // rdx
  int v25; // eax
  __int64 v26; // rcx
  char v29; // al
  __int64 v30; // rcx
  _BYTE v31[24]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v32[24]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v33[24]; // [rsp+88h] [rbp-40h] BYREF

  v6 = (unsigned int)a1;
  v7 = -1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Src, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v14 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v29 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v29 = 0;
      }
      if ( v29 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v13,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v16,
          v15.LowPart,
          0,
          (char)gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v13 = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        Template_xqx(
          v13,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v16,
          0,
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v7 = -1;
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( !CInputThread::IsInputThread((CInputThread *)v13) )
  {
    v30 = 5LL;
LABEL_48:
    v7 = -1;
    UserSetLastError(v30);
    goto LABEL_36;
  }
  if ( (unsigned int)(v6 - 1) > 0x3F )
  {
    v30 = 87LL;
    goto LABEL_48;
  }
  v17 = 8 * v6;
  if ( 8 * v6 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( &Src[v17] > (char *)W32UserProbeAddress || &Src[v17] < Src )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v18 = Win32AllocPoolWithQuotaZInit(8 * v6, 0x79737355u);
  v19 = (void **)Win32AllocPoolWithQuotaZInit(v17 + 16, 0x79737355u);
  v20 = (struct _MITIocpContext *)Win32AllocPoolWithQuotaZInit(56 * v6, 0x79737355u);
  v21 = v20;
  if ( !v18 || !v19 || !v20 )
  {
    v7 = -1;
    UserSetLastError(8LL);
    goto LABEL_36;
  }
  memmove(v18, Src, 8 * v6);
  CurrentProcess = PsGetCurrentProcess();
  ProcessPeb = PsGetProcessPeb(CurrentProcess);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
  {
    v25 = *((_DWORD *)v18 + 2 * i);
    switch ( v25 )
    {
      case -12:
        v26 = *(_QWORD *)(*(_QWORD *)(ProcessPeb + 32) + 48LL);
        break;
      case -11:
        v26 = *(_QWORD *)(*(_QWORD *)(ProcessPeb + 32) + 40LL);
        break;
      case -10:
        v26 = *(_QWORD *)(*(_QWORD *)(ProcessPeb + 32) + 32LL);
        break;
      default:
        continue;
    }
    *((_QWORD *)v18 + i) = v26;
  }
  PushW32ThreadLock(v18, v33, Win32FreePool);
  PushW32ThreadLock(v19, v32, CleanupConvertedKmHandles);
  PushW32ThreadLock(v21, v31, Win32FreePool);
  *(_DWORD *)v19 = v6;
  if ( (unsigned int)ConvertUserHandlesToKernelHandles(v19 + 1, v18, (unsigned int)v6) )
    v7 = UserProcessMITInput(v6, v19 + 1, v21, a5);
  PopW32ThreadLock(v31);
  PopAndFreeAlwaysW32ThreadLock(v32);
  PopW32ThreadLock(v33);
  Win32FreePool((__int64)v18);
  if ( v21 )
    Win32FreePool((__int64)v21);
LABEL_36:
  UserSessionSwitchLeaveCrit();
  return v7;
}
