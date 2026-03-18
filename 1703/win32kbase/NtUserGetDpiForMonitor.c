/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C00281A0
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0026CD0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     HMValidateSharedHandle @ 0x1C002810C (HMValidateSharedHandle.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     EngMulDiv @ 0x1C0049E60 (EngMulDiv.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     UserSetLastStatus @ 0x1C013E9C8 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, __int64 a2, CTouchProcessor *a3, CTouchProcessor *a4)
{
  int v4; // edi
  int v5; // r13d
  INT v6; // esi
  INT v7; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // ecx
  LARGE_INTEGER v15; // rbx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // r15d
  CTouchProcessor *v21; // rcx
  CTouchProcessor *v22; // rcx
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  bool v25; // zf
  __int64 v26; // rax
  INT v27; // ebx
  INT v28; // eax
  INT v29; // r8d
  INT v30; // edx
  bool v31; // al
  INT v32; // edi
  INT v33; // ebx
  INT v34; // edi
  INT v35; // ebx
  INT v36; // eax
  INT v37; // r8d
  INT v38; // edx
  INT v39; // ebx
  INT v40; // eax
  _BYTE v41[40]; // [rsp+40h] [rbp-98h] BYREF
  INT a; // [rsp+68h] [rbp-70h]
  INT v43; // [rsp+6Ch] [rbp-6Ch]
  INT v44; // [rsp+78h] [rbp-60h]
  INT v45; // [rsp+7Ch] [rbp-5Ch]
  char v46; // [rsp+9Ch] [rbp-3Ch]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v31 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v31 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v14,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v16,
          v15.LowPart,
          0,
          (char)gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v16,
        0,
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  v17 = HMValidateSharedHandle(v5);
  v18 = v17;
  if ( !v17 || (v19 = *(_QWORD *)(v17 + 120)) == 0 )
  {
    v20 = 0;
    UserSetLastError(6LL);
    goto LABEL_18;
  }
  if ( v4 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v19, (__int64)v41);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v20 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_18;
    }
    v20 = 1;
    if ( v4 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v6 = a;
        v7 = v43;
      }
      else
      {
        v25 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1;
        v26 = *(_QWORD *)(v18 + 40);
        if ( v25 )
        {
          v32 = *(unsigned __int16 *)(v26 + 128);
          v33 = *((unsigned __int16 *)gpsi + 4339);
          v28 = EngMulDiv(a, v33, v32);
          v29 = v32;
          v30 = v33;
        }
        else
        {
          v27 = *(unsigned __int16 *)(v26 + 128);
          v28 = EngMulDiv(a, 96, v27);
          v29 = v27;
          v30 = 96;
        }
        v6 = v28;
        v7 = EngMulDiv(v43, v30, v29);
      }
      if ( (v46 & 1) != 0 || (v46 & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL);
        v20 = 0;
      }
      goto LABEL_27;
    }
    if ( v4 == 1 )
    {
      if ( !v44 || (v46 & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v44, 96, 100);
        v7 = EngMulDiv(v45, 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v34 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 40) + 128LL);
        v35 = *((unsigned __int16 *)gpsi + 4339);
        v36 = EngMulDiv(v6, v35, v34);
        v37 = v34;
        v38 = v35;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_27;
        v39 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 40) + 128LL);
        v36 = EngMulDiv(v6, 96, v39);
        v37 = v39;
        v38 = 96;
      }
      v6 = v36;
      v7 = EngMulDiv(v7, v38, v37);
    }
LABEL_27:
    if ( v46 < 0 )
    {
      v40 = v7;
      v7 = v6;
      v6 = v40;
    }
    goto LABEL_13;
  }
  v20 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 40) + 128LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v6 = *((unsigned __int16 *)gpsi + 4339);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_13:
  v21 = a3;
  if ( a3 >= W32UserProbeAddress )
    v21 = W32UserProbeAddress;
  *(_DWORD *)v21 = *(_DWORD *)v21;
  v22 = a4;
  if ( a4 >= W32UserProbeAddress )
    v22 = W32UserProbeAddress;
  *(_DWORD *)v22 = *(_DWORD *)v22;
  *(_DWORD *)a3 = v6;
  *(_DWORD *)a4 = v7;
LABEL_18:
  UserSessionSwitchLeaveCrit();
  return v20;
}
