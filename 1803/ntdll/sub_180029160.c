/*
 * XREFs of sub_180029160 @ 0x180029160
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     sub_18000262C @ 0x18000262C (sub_18000262C.c)
 *     sub_1800027B4 @ 0x1800027B4 (sub_1800027B4.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029428 @ 0x180029428 (sub_180029428.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009BC70 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x18009DF70 (ZwSetTimer2.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __fastcall sub_180029160(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  __int64 v4; // r13
  _RTL_SRWLOCK *ApcContext; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // r12
  __int64 v12; // r11
  _QWORD *v13; // r14
  __int64 v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rdi
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  bool v26; // [rsp+40h] [rbp-49h]
  _QWORD *v27; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h]
  LARGE_INTEGER DueTime; // [rsp+60h] [rbp-29h] BYREF
  _BYTE Fields[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v32; // [rsp+6Eh] [rbp-1Bh]
  __int64 v33; // [rsp+88h] [rbp-1h]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+90h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  Parameters.Version = 0;
  ApcContext = a3;
  Parameters.NoWakeTolerance = 0LL;
  v26 = v4 != 0;
  if ( v4 )
  {
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (_RTL_SRWLOCK *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v29 = v7;
  v8 = (__int64)&ApcContext[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    sub_1801086C8(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v28 = &v27;
  v27 = &v27;
  v9 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = v29;
    v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
    sub_1800027B4(v8);
  RtlAcquireSRWLockExclusive(ApcContext);
  v11 = (_QWORD *)(v8 + 8);
  while ( *v11 && *(_QWORD *)(*v11 + 40LL) <= v7 )
  {
    sub_180029428(v8 + 8, *v11);
    v13 = (_QWORD *)(v12 - 40);
    sub_180029428(v8 + 16, v12 - 40);
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
    v17 = *(_QWORD *)(*v11 + 32LL);
    v18 = *(_QWORD *)(v16 + 32) - v17;
    *(_QWORD *)v8 = v17;
    v19 = v18 / 10000;
    *(_DWORD *)(v8 + 112) = v18 / 10000;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)(v18 / 10000);
    if ( !v4 )
      v17 = v7 - v17;
    DueTime.QuadPart = v17;
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v20 = 2147353478LL;
    if ( *(_BYTE *)v20 )
      sub_18000262C(v8, v17, v19);
    ZwSetTimer2(*(HANDLE *)(v8 + 24), &DueTime, 0LL, &Parameters);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(ApcContext);
  v22 = v27;
  while ( v22 != &v27 )
  {
    v23 = v22 - 31;
    LOBYTE(v21) = v26;
    v22 = (_QWORD *)*v22;
    sub_180029F94(v23, ApcContext, v21);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v24 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v24 = 2147353478LL;
  if ( *(_BYTE *)v24 )
  {
    v33 = v8;
    v32 = 7215;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, 8u, Fields);
  }
  return ZwAssociateWaitCompletionPacket(
           *(HANDLE *)(v8 + 32),
           ApcContext[-6].Ptr,
           *(HANDLE *)(v8 + 24),
           (PVOID)(v8 + 40),
           ApcContext,
           0,
           v26,
           0LL);
}
