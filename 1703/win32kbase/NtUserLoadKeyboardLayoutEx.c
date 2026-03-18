/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C00E2E90
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0079760 (xxxSafeLoadKeyboardLayoutEx.c)
 *     RtlStringCchCopyNW @ 0x1C008D1D8 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     SetLastNtError @ 0x1C013E9AC (SetLastNtError.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        __int64 a2,
        __int64 a3,
        CTouchProcessor *a4,
        HKL a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  CTouchProcessor *v10; // r12
  HKL KeyboardLayout; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  LONGLONG v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  LARGE_INTEGER v21; // rcx
  LARGE_INTEGER v22; // rsi
  char v23; // al
  struct tagWINDOWSTATION *ProcessWindowStation; // r14
  int v25; // eax
  const wchar_t *v26; // r8
  unsigned __int64 v27; // rcx
  _OWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _OWORD *v31; // rax
  _OWORD *v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-6F8h]
  unsigned int v35; // [rsp+58h] [rbp-6C0h]
  unsigned int v36; // [rsp+5Ch] [rbp-6BCh]
  _BYTE v37[792]; // [rsp+98h] [rbp-680h] BYREF
  _BYTE v38[784]; // [rsp+3B0h] [rbp-368h] BYREF
  wchar_t pszDest[12]; // [rsp+6C0h] [rbp-58h] BYREF

  v35 = a3;
  v36 = a2;
  v10 = (CTouchProcessor *)a6;
  KeyboardLayout = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v20 = PsGetCurrentThreadWin32Thread(v15, v14, v16);
  if ( v20 )
  {
    v22 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v20 + 8));
    v17 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v23 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v23 = 0;
      }
      if ( v23 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v21.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(v21.QuadPart, &AcquiredExclusiveUserCritEvent, v18, v22.QuadPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v22.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v17 = 1000 * v22.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v34) = 1000 * v22.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          (__int64)gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v18,
          0LL,
          v34,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v20 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v13;
  gbValidateHandleForIL = 1;
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004LL, v17, v18, v19);
  }
  else
  {
    memset(v38, 0, sizeof(v38));
    ProcessWindowStation = (struct tagWINDOWSTATION *)_GetProcessWindowStation(0LL);
    if ( a6 >= (unsigned __int64)W32UserProbeAddress )
      v10 = W32UserProbeAddress;
    v25 = *(_DWORD *)v10;
    v26 = (const wchar_t *)*((_QWORD *)v10 + 1);
    if ( ((unsigned __int8)v26 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = (unsigned __int64)v26 + (unsigned __int16)v25 + 2;
    if ( v27 >= (unsigned __int64)W32UserProbeAddress
      || (unsigned __int16)v25 > (unsigned __int16)HIWORD(*(_DWORD *)v10)
      || (v25 & 1) != 0
      || v27 <= (unsigned __int64)v26 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    if ( RtlStringCchCopyNW(pszDest, 9uLL, v26, (unsigned __int64)(unsigned __int16)v25 >> 1) >= 0 )
    {
      if ( a4 )
      {
        if ( (CTouchProcessor *)((char *)a4 + 784) < a4 || (CTouchProcessor *)((char *)a4 + 784) > W32UserProbeAddress )
          a4 = W32UserProbeAddress;
        v28 = v37;
        v29 = 6LL;
        v30 = 6LL;
        do
        {
          *v28 = *(_OWORD *)a4;
          v28[1] = *((_OWORD *)a4 + 1);
          v28[2] = *((_OWORD *)a4 + 2);
          v28[3] = *((_OWORD *)a4 + 3);
          v28[4] = *((_OWORD *)a4 + 4);
          v28[5] = *((_OWORD *)a4 + 5);
          v28[6] = *((_OWORD *)a4 + 6);
          v28 += 8;
          *(v28 - 1) = *((_OWORD *)a4 + 7);
          a4 = (CTouchProcessor *)((char *)a4 + 128);
          --v30;
        }
        while ( v30 );
        *v28 = *(_OWORD *)a4;
        v31 = v38;
        v32 = v37;
        do
        {
          *v31 = *v32;
          v31[1] = v32[1];
          v31[2] = v32[2];
          v31[3] = v32[3];
          v31[4] = v32[4];
          v31[5] = v32[5];
          v31[6] = v32[6];
          v31 += 8;
          *(v31 - 1) = v32[7];
          v32 += 8;
          --v29;
        }
        while ( v29 );
        *v31 = *v32;
      }
      KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                         ProcessWindowStation,
                         a1,
                         a5,
                         v36,
                         v35,
                         (struct tagKBDTABLE_MULT_INTERNAL *)v38,
                         pszDest,
                         a7,
                         a8);
    }
  }
  UserSessionSwitchLeaveCrit();
  return KeyboardLayout;
}
