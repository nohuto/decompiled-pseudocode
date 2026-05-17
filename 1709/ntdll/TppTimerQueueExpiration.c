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

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // r12
  __int64 v12; // r11
  _QWORD *v13; // rbx
  __int64 v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rbx
  bool v27; // si
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  bool v32; // [rsp+40h] [rbp-49h]
  _QWORD *v33; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v34; // [rsp+50h] [rbp-39h]
  __int64 v35; // [rsp+58h] [rbp-31h] BYREF
  __int64 v36; // [rsp+60h] [rbp-29h]
  _BYTE v37[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v38; // [rsp+6Eh] [rbp-1Bh]
  __int64 v39; // [rsp+88h] [rbp-1h]
  int v40; // [rsp+90h] [rbp+7h] BYREF
  __int64 v41; // [rsp+98h] [rbp+Fh]

  v4 = *(_QWORD *)(a4 + 8);
  v40 = 0;
  v5 = a3;
  v41 = 0LL;
  v32 = v4 != 0;
  if ( v4 )
  {
    v6 = 8LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = MEMORY[0x7FFE03B0];
    v6 = 128LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v36 = v7;
  v8 = v6 + v5;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v34 = &v33;
  v33 = &v33;
  v9 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
  {
    v7 = v36;
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive(v5);
  v11 = (_QWORD *)(v8 + 8);
  while ( *v11 && *(_QWORD *)(*v11 + 40LL) <= v7 )
  {
    TppPHDelete(v8 + 8, *v11);
    v13 = (_QWORD *)(v12 - 40);
    TppPHDelete(v8 + 16, v12 - 40);
    *(_BYTE *)(v14 + 64) = 0;
    v15 = v34;
    if ( *v34 != &v33 )
      __fastfail(3u);
    v13[1] = v34;
    *v13 = &v33;
    *v15 = v13;
    v34 = (_QWORD **)v13;
  }
  v16 = *(_QWORD *)(v8 + 16);
  if ( v16 )
  {
    v17 = *(_QWORD *)(*v11 + 32LL);
    v18 = *(_QWORD *)(v16 + 32) - v17;
    *(_QWORD *)v8 = v17;
    v19 = (unsigned __int128)(v18 * (__int128)0x346DC5D63886594BLL) >> 64;
    v20 = v18 / 10000;
    v21 = 10000LL * (unsigned int)(v18 / 10000);
    *(_DWORD *)(v8 + 112) = v20;
    v41 = v21;
    if ( !v4 )
      v17 = v7 - v17;
    v35 = v17;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v19) )
    {
      v17 = v35;
      v22 = (__int64)NtCurrentPeb()->SharedData + 556;
    }
    else
    {
      v22 = 2147353478LL;
    }
    if ( *(_BYTE *)v22 )
      TppETWTimerSetNtTimer(v8, v17, v20);
    ZwSetTimer2(*(_QWORD *)(v8 + 24), &v35, 0LL, &v40);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v5);
  v26 = v33;
  v27 = v32;
  while ( v26 != &v33 )
  {
    v28 = v26 - 31;
    LOBYTE(v25) = v32;
    v26 = (_QWORD *)*v26;
    TppSingleTimerExpiration(v28, v5, v25);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v23) )
    v30 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v30 = 2147353478LL;
  if ( *(_BYTE *)v30 )
  {
    v39 = v8;
    v38 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v29) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v9, 1026LL, 8LL, v37);
  }
  return ZwAssociateWaitCompletionPacket(
           *(_QWORD *)(v8 + 32),
           *(_QWORD *)(v5 - 48),
           *(_QWORD *)(v8 + 24),
           v8 + 40,
           v5,
           0,
           v27,
           0LL);
}
