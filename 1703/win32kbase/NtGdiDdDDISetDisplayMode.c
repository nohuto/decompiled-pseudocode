/*
 * XREFs of NtGdiDdDDISetDisplayMode @ 0x1C00629F0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006295C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDISetDisplayMode(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // esi
  __int64 v4; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = ((__int64 (__fastcall *)(__int64, struct _LUID *, unsigned int *))qword_1C018B888)(a1, &v16, &v15);
  if ( v3 >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
    if ( v10 )
    {
      v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v11) = byte_1C0186D98 - 1;
        Template_xqx(
          v11,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v13,
          v12.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v13,
          0,
          1000 * v12.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    if ( (int)IsUserResetPointerSupported() >= 0 )
      UserResetPointer();
    DrvUpdatePDevForWDDMVidPnSource(&v16, v15);
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)v3;
}
