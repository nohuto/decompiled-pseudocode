/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C009A4A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C004FCB0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  CBaseInput *v1; // rdx
  char *v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // ecx
  LARGE_INTEGER v17; // rbx
  int v18; // r8d

  v1 = (CBaseInput *)*((_QWORD *)this + 9);
  v2 = (char *)this + 80;
  v3 = 0LL;
  if ( v1 != (CBaseInput *)((char *)this + 80) )
    v3 = *((_QWORD *)this + 9);
  if ( *((int *)this + 8) >= 0 )
  {
    (*(void (__fastcall **)(CBaseInput *, CBaseInput *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(
      this,
      v1,
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
    if ( v3 )
      *((_QWORD *)this + 9) = v2;
  }
  v7 = CBaseInput::Read(this);
  if ( v3 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
    if ( v15 )
    {
      v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v16) = byte_1C0186D98 - 1;
        Template_xqx(
          v16,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v18,
          v17.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v17.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v18,
          0,
          1000 * v17.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    Win32FreePool(v3);
    UserSessionSwitchLeaveCrit();
  }
  return v7;
}
