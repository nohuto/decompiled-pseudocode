/*
 * XREFs of TppTimerQueueExpiration @ 0x180010040
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x180001D10 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerExpirationBegin @ 0x180001F04 (TppETWTimerExpirationBegin.c)
 *     TppPHDelete @ 0x18001030C (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x180010418 (TppSingleTimerExpiration.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A1250 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A3530 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rcx
  LARGE_INTEGER **v11; // r12
  __int64 v12; // r11
  _QWORD *v13; // rbx
  __int64 v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // rcx
  LARGE_INTEGER v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rbx
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  bool v26; // [rsp+40h] [rbp-49h]
  _QWORD *v27; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v28; // [rsp+50h] [rbp-39h]
  LARGE_INTEGER DueTime; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h]
  _BYTE Fields[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v32; // [rsp+6Eh] [rbp-1Bh]
  __int64 v33; // [rsp+88h] [rbp-1h]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+90h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  Parameters.Version = 0;
  Parameters.NoWakeTolerance = 0LL;
  v26 = v4 != 0;
  if ( v4 )
  {
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    a2 = RtlpFreezeTimeBias;
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v30 = v7;
  v8 = (__int64)&a3[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v28 = &v27;
  v27 = &v27;
  v9 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = v30;
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive(a3);
  v11 = (LARGE_INTEGER **)(v8 + 8);
  while ( *v11 && (*v11)[5].QuadPart <= v7 )
  {
    TppPHDelete(v8 + 8, *v11);
    v13 = (_QWORD *)(v12 - 40);
    TppPHDelete(v8 + 16, v12 - 40);
    *(_BYTE *)(v14 + 64) = 0;
    v15 = v28;
    if ( *v28 != &v27 )
      __fastfail(3u);
    v13[1] = v28;
    *v13 = &v27;
    *v15 = v13;
    v28 = (_QWORD **)v13;
  }
  v16 = *(_QWORD *)(v8 + 16);
  if ( v16 )
  {
    v17 = (*v11)[4];
    v18 = *(_QWORD *)(v16 + 32) - v17.QuadPart;
    *(LARGE_INTEGER *)v8 = v17;
    v19 = v18 / 10000;
    *(_DWORD *)(v8 + 112) = v18 / 10000;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)(v18 / 10000);
    if ( !v4 )
      v17.QuadPart = v7 - v17.QuadPart;
    DueTime = v17;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v17 = DueTime;
      v20 = (__int64)NtCurrentPeb()->SharedData + 556;
    }
    else
    {
      v20 = 2147353478LL;
    }
    if ( *(_BYTE *)v20 )
      TppETWTimerSetNtTimer(v8, v17.QuadPart, v19);
    ZwSetTimer2(*(HANDLE *)(v8 + 24), &DueTime, 0LL, &Parameters);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(a3);
  v22 = v27;
  while ( v22 != &v27 )
  {
    v23 = v22 - 31;
    LOBYTE(v21) = v26;
    v22 = (_QWORD *)*v22;
    TppSingleTimerExpiration(v23, a3, v21);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v24 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v24 = 2147353478LL;
  if ( *(_BYTE *)v24 )
  {
    v33 = v8;
    v32 = 7215;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, 8u, Fields);
  }
  return ZwAssociateWaitCompletionPacket(
           *(HANDLE *)(v8 + 32),
           a3[-6].Ptr,
           *(HANDLE *)(v8 + 24),
           (PVOID)(v8 + 40),
           a3,
           0,
           v26,
           0LL);
}
