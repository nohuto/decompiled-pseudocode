/*
 * XREFs of VideoPortCallout @ 0x1C009CCB0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     CreateKernelEvent @ 0x1C0054640 (CreateKernelEvent.c)
 *     InitCreateSystemThreadsMsg @ 0x1C0090DA0 (InitCreateSystemThreadsMsg.c)
 *     CSTRemove @ 0x1C009CE10 (CSTRemove.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void *__fastcall VideoPortCallout(__int64 a1, __int64 a2, __int64 a3)
{
  void *result; // rax
  int v5; // ebx
  int SystemThreadsMsg; // edi
  LARGE_INTEGER *v7; // rdi
  struct tagTHREADINFO *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v14; // ecx
  int v15; // r8d
  LONGLONG v16; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // ecx
  LARGE_INTEGER v24; // rbx
  int v25; // r8d
  int v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h]
  _BYTE v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v30; // [rsp+54h] [rbp-ACh]

  result = 0LL;
  v27 = 0LL;
  Object = 0LL;
  if ( !gbVideoInitialized )
  {
    v5 = -1073741823;
LABEL_3:
    SystemThreadsMsg = v26;
    goto LABEL_4;
  }
  v27 = a1;
  result = CreateKernelEvent(SynchronizationEvent, 0);
  Object = result;
  if ( !result )
  {
    v5 = -1073741801;
    goto LABEL_3;
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v22 = PsGetCurrentThreadWin32Thread(v20, v19, v21);
  if ( v22 )
  {
    v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v23) = byte_1C0186D98 - 1;
      Template_xqx(
        v23,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v25,
        v24.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v24.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v25,
        0,
        1000 * v24.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v22 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v18;
  gbValidateHandleForIL = 1;
  if ( CsrApiPort )
  {
    SystemThreadsMsg = InitCreateSystemThreadsMsg((__int64)v29, 4u, (__int64)&v27);
    if ( SystemThreadsMsg )
    {
      v30 |= 3u;
      v5 = LpcRequestPort(CsrApiPort, v29);
    }
    else
    {
      v5 = -1073741801;
    }
  }
  else
  {
    SystemThreadsMsg = v26;
    v5 = -1073741816;
  }
  UserSessionSwitchLeaveCrit();
  if ( v5 >= 0 )
  {
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
    v5 = *(_DWORD *)(a1 + 24);
    goto LABEL_14;
  }
  result = Object;
LABEL_4:
  if ( !SystemThreadsMsg )
    goto LABEL_15;
  v7 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( v7 )
    v7[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = 0x10000000;
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v14) = byte_1C0186D98 - 1;
      Template_xqx(
        v14,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        0x10000000,
        v16,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v16 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v15,
        0,
        1000 * v16 / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  CSTRemove(4LL, &v27);
  UserSessionSwitchLeaveCrit();
LABEL_14:
  result = Object;
LABEL_15:
  if ( result )
    result = (void *)Win32FreePool((__int64)result);
  *(_DWORD *)(a1 + 24) = v5;
  return result;
}
