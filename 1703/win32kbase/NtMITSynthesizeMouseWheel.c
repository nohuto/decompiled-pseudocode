/*
 * XREFs of NtMITSynthesizeMouseWheel @ 0x1C00E0170
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C013C944 (ApiSetEditionSynthesizeMouseWheel.c)
 */

__int64 __fastcall NtMITSynthesizeMouseWheel(CTouchProcessor *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  CTouchProcessor *v4; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  int v6; // ebx
  struct tagTHREADINFO *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LONGLONG v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // rsi
  char v17; // al
  __int128 v18; // xmm1
  __int64 v20; // [rsp+20h] [rbp-A8h]
  int v21; // [rsp+20h] [rbp-A8h]
  _OWORD v22[2]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v23; // [rsp+70h] [rbp-58h]
  __int128 v24; // [rsp+80h] [rbp-48h]
  __m128i v25; // [rsp+90h] [rbp-38h]
  __int128 v26; // [rsp+A0h] [rbp-28h]

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v6 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v14 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    v11 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v17 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v17 = 0;
      }
      if ( v17 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        v21 = 0;
        LOBYTE(v15.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(v15.QuadPart, &AcquiredExclusiveUserCritEvent, v12, v16.QuadPart, v21, gullUserCritAcquireToken);
      }
    }
    if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v11 = 1000 * v16.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v20) = 1000 * v16.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          (__int64)gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0LL,
          v20,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( (CTouchProcessor *)((char *)v4 + 32) < v4 || (CTouchProcessor *)((char *)v4 + 32) > W32UserProbeAddress )
    v4 = W32UserProbeAddress;
  v23 = *(__m128i *)v4;
  v18 = *((_OWORD *)v4 + 1);
  v24 = v18;
  v25 = v23;
  v26 = v18;
  if ( (_mm_srli_si128(v23, 8).m128i_i32[1] & 0x1800) != 0 )
  {
    v22[0] = v23;
    v22[1] = v18;
    v6 = ApiSetEditionSynthesizeMouseWheel(v22, v3);
  }
  else
  {
    UserSetLastError(87LL, v11, v12, v13);
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
