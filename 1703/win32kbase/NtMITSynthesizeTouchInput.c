/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C00E03A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0048F80 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     SynthesizeMitTouchInput @ 0x1C01309D8 (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(CTouchProcessor *a1, __int64 a2, __int64 a3)
{
  CTouchProcessor *v3; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  int v5; // ebx
  struct tagTHREADINFO *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  CInputThread *v10; // rcx
  __int64 v11; // r14
  LARGE_INTEGER v12; // rsi
  LARGE_INTEGER v13; // r8
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-BA8h]
  int v26; // [rsp+20h] [rbp-BA8h]
  _BYTE v27[1464]; // [rsp+48h] [rbp-B80h] BYREF
  _BYTE v28[1456]; // [rsp+600h] [rbp-5C8h] BYREF

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v5 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v11 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v10) = byte_1C0186D98 - 1;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v14 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v14 = 0;
      }
      if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        v26 = 0;
        Template_xqx(
          (__int64)v10,
          &AcquiredExclusiveUserCritEvent,
          v13.QuadPart,
          v12.QuadPart,
          v26,
          gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v25) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v13.QuadPart,
        0LL,
        v25,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( CInputThread::IsInputThread(v10) )
  {
    if ( (CTouchProcessor *)((char *)v3 + 1456) < v3 || (CTouchProcessor *)((char *)v3 + 1456) > W32UserProbeAddress )
      v3 = W32UserProbeAddress;
    v19 = v27;
    v20 = 11LL;
    v21 = 11LL;
    do
    {
      *v19 = *(_OWORD *)v3;
      v19[1] = *((_OWORD *)v3 + 1);
      v19[2] = *((_OWORD *)v3 + 2);
      v19[3] = *((_OWORD *)v3 + 3);
      v19[4] = *((_OWORD *)v3 + 4);
      v19[5] = *((_OWORD *)v3 + 5);
      v19[6] = *((_OWORD *)v3 + 6);
      v19 += 8;
      *(v19 - 1) = *((_OWORD *)v3 + 7);
      v3 = (CTouchProcessor *)((char *)v3 + 128);
      --v21;
    }
    while ( v21 );
    *v19 = *(_OWORD *)v3;
    v19[1] = *((_OWORD *)v3 + 1);
    v19[2] = *((_OWORD *)v3 + 2);
    v22 = v28;
    v23 = v27;
    do
    {
      *v22 = *v23;
      v22[1] = v23[1];
      v22[2] = v23[2];
      v22[3] = v23[3];
      v22[4] = v23[4];
      v22[5] = v23[5];
      v22[6] = v23[6];
      v22 += 8;
      *(v22 - 1) = v23[7];
      v23 += 8;
      --v20;
    }
    while ( v20 );
    *v22 = *v23;
    v22[1] = v23[1];
    v22[2] = v23[2];
    if ( (unsigned __int8)SynthesizeMitTouchInput(v28, 0LL, 128LL) )
    {
      v5 = 1;
      goto LABEL_29;
    }
    v18 = 5023LL;
  }
  else
  {
    v18 = 5LL;
  }
  UserSetLastError(v18, v15, v16, v17);
LABEL_29:
  UserSessionSwitchLeaveCrit();
  return v5;
}
