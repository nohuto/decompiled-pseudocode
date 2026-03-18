/*
 * XREFs of NtUserToUnicodeEx @ 0x1C0078E50
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     xxxToUnicodeEx @ 0x1C00790F0 (xxxToUnicodeEx.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserToUnicodeEx(__int64 a1, __int64 a2, _OWORD *a3, volatile void *a4, int a5, int a6, __int64 a7)
{
  _OWORD *v8; // rdi
  int v9; // r13d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  LONGLONG v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  LARGE_INTEGER v20; // rbx
  _OWORD *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 *v24; // rbx
  unsigned int v25; // edi
  bool v27; // al
  int v28; // [rsp+40h] [rbp-1A8h]
  int v29; // [rsp+44h] [rbp-1A4h]
  _BYTE v30[24]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v31; // [rsp+98h] [rbp-150h] BYREF
  _BYTE v32[256]; // [rsp+A0h] [rbp-148h] BYREF

  v8 = a3;
  v29 = a2;
  v9 = a1;
  v31 = 0LL;
  v28 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v16 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  if ( v16 )
  {
    v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    v15 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v27 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v27 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v19) = byte_1C0186D98 - 1;
        Template_xqx(
          v19,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v17,
          v20.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
    }
    if ( v20.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v15 = 1000 * v20.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v17,
          0,
          1000 * v20.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( a5 <= 0 )
  {
    v25 = 0;
    UserSetLastError(87LL, v15, v17, v18);
  }
  else
  {
    v21 = v32;
    v22 = 2LL;
    do
    {
      *v21 = *v8;
      v21[1] = v8[1];
      v21[2] = v8[2];
      v21[3] = v8[3];
      v21[4] = v8[4];
      v21[5] = v8[5];
      v21[6] = v8[6];
      v21 += 8;
      *(v21 - 1) = v8[7];
      v8 += 8;
      --v22;
    }
    while ( v22 );
    ProbeForWrite(a4, 2LL * a5, 2u);
    if ( a5 < 4 )
    {
      v24 = &v31;
    }
    else
    {
      v23 = (__int64 *)Win32AllocPoolWithQuotaZInit(2LL * a5, 0x62757355u);
      v24 = v23;
      if ( !v23 )
        ExRaiseStatus(-1073741801);
      v28 = 1;
      PushW32ThreadLock(v23, v30, Win32FreePool);
    }
    v25 = xxxToUnicodeEx(v9, v29, (unsigned int)v32, (_DWORD)v24, a5, a6, a7);
    memmove((void *)a4, v24, 2LL * a5);
    if ( v28 )
      PopAndFreeAlwaysW32ThreadLock(v30);
  }
  UserSessionSwitchLeaveCrit();
  return v25;
}
