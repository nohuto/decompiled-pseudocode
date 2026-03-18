/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C00DFEF0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0048F80 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     SynthesizeMouseInputData @ 0x1C012EE98 (SynthesizeMouseInputData.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(CTouchProcessor *a1, __int64 a2, CTouchProcessor *a3)
{
  CTouchProcessor *v3; // rsi
  unsigned int v4; // r13d
  CTouchProcessor *v5; // r14
  __int64 v6; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  unsigned int v8; // edi
  struct tagTHREADINFO *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  CInputThread *v13; // rcx
  __int64 v14; // r15
  LARGE_INTEGER v15; // rbx
  LARGE_INTEGER v16; // r8
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-A8h]
  int v23; // [rsp+20h] [rbp-A8h]
  _OWORD v24[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v25; // [rsp+68h] [rbp-60h]
  __int128 v26; // [rsp+70h] [rbp-58h]
  __int128 v27; // [rsp+80h] [rbp-48h]
  __int64 v28; // [rsp+90h] [rbp-38h]
  __int64 v29; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  LODWORD(v6) = 0;
  v29 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v8 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v14 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v13) = byte_1C0186D98 - 1;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v17 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v17 = 0;
      }
      if ( v17 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        v23 = 0;
        Template_xqx(
          (__int64)v13,
          &AcquiredExclusiveUserCritEvent,
          v16.QuadPart,
          v15.QuadPart,
          v23,
          gullUserCritAcquireToken);
      }
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v22) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v16.QuadPart,
        0LL,
        v22,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    LODWORD(v6) = v29;
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( CInputThread::IsInputThread(v13) )
  {
    if ( (CTouchProcessor *)((char *)v5 + 40) < v5 || (CTouchProcessor *)((char *)v5 + 40) > W32UserProbeAddress )
      v5 = W32UserProbeAddress;
    v26 = *(_OWORD *)v5;
    v27 = *((_OWORD *)v5 + 1);
    v28 = *((_QWORD *)v5 + 4);
    v24[0] = v26;
    v24[1] = v27;
    v25 = v28;
    if ( v3 )
    {
      if ( (CTouchProcessor *)((char *)v3 + 8) < v3 || (CTouchProcessor *)((char *)v3 + 8) > W32UserProbeAddress )
        v3 = W32UserProbeAddress;
      v6 = *(_QWORD *)v3;
      v29 = *(_QWORD *)v3;
    }
    v8 = SynthesizeMouseInputData(v24, v4, (unsigned __int64)&v29 & -(__int64)((_DWORD)v6 != 0));
  }
  else
  {
    UserSetLastError(5LL, v18, v19, v20);
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
