/*
 * XREFs of ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C012CC70
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?WaitForMarshalingCompletion@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C004FF74 (-WaitForMarshalingCompletion@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall CHidInput::ProcessPTPMouseInput(__int64 a1, _OWORD *a2, int a3)
{
  __int128 v4; // xmm1
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rbx
  LARGE_INTEGER v16; // r8
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]

  *(_OWORD *)(a1 + 656) = *a2;
  v4 = a2[1];
  *(_DWORD *)(a1 + 688) = a3;
  *(_OWORD *)(a1 + 672) = v4;
  KeSetEvent(*(PRKEVENT *)(a1 + 576), 1, 0);
  UserSessionSwitchLeaveCrit();
  CRIMBase::WaitForMarshalingCompletion(a1, 0xAu);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v19 = 0;
      Template_xqx(
        v14.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v16.QuadPart,
        v15.QuadPart,
        v19,
        gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v18) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v16.QuadPart,
        0LL,
        v18,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  result = 1LL;
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  return result;
}
