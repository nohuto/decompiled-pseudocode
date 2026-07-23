/*
 * XREFs of sub_180018A00 @ 0x180018A00
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     sub_1800039E8 @ 0x1800039E8 (sub_1800039E8.c)
 *     sub_18000434C @ 0x18000434C (sub_18000434C.c)
 *     sub_180018CC8 @ 0x180018CC8 (sub_180018CC8.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A6490 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A8710 (ZwSetTimer2.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

NTSTATUS __fastcall sub_180018A00(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  LARGE_INTEGER **v10; // r12
  __int64 v11; // r11
  _QWORD *v12; // rbx
  __int64 v13; // r11
  _QWORD *v14; // rax
  __int64 v15; // rcx
  LARGE_INTEGER v16; // rbx
  LONGLONG v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  bool v25; // [rsp+40h] [rbp-49h]
  _QWORD *v26; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v27; // [rsp+50h] [rbp-39h]
  LARGE_INTEGER DueTime; // [rsp+58h] [rbp-31h] BYREF
  __int64 v29; // [rsp+60h] [rbp-29h]
  _BYTE Fields[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v31; // [rsp+6Eh] [rbp-1Bh]
  __int64 v32; // [rsp+88h] [rbp-1h]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+90h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  Parameters.Version = 0;
  Parameters.NoWakeTolerance = 0LL;
  v25 = v4 != 0;
  if ( v4 )
  {
    v6 = (__int64)&a3[1];
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v6 = (__int64)&a3[16];
    a2 = RtlpFreezeTimeBias;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v29 = v7;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    sub_1801058B8(a1, a2);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v27 = &v26;
  v26 = &v26;
  v8 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = v29;
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  }
  else
  {
    v9 = 2147353478LL;
  }
  if ( *(_BYTE *)v9 )
    sub_18000434C(v6);
  RtlAcquireSRWLockExclusive(a3);
  v10 = (LARGE_INTEGER **)(v6 + 8);
  while ( *v10 && (*v10)[5].QuadPart <= v7 )
  {
    sub_180018CC8(v6 + 8, *v10);
    v12 = (_QWORD *)(v11 - 40);
    sub_180018CC8(v6 + 16, v11 - 40);
    *(_BYTE *)(v13 + 64) = 0;
    v14 = v27;
    if ( *v27 != &v26 )
      __fastfail(3u);
    v12[1] = v27;
    *v12 = &v26;
    *v14 = v12;
    v27 = (_QWORD **)v12;
  }
  v15 = *(_QWORD *)(v6 + 16);
  if ( v15 )
  {
    v16 = (*v10)[4];
    v17 = *(_QWORD *)(v15 + 32) - v16.QuadPart;
    *(LARGE_INTEGER *)v6 = v16;
    v18 = v17 / 10000;
    *(_DWORD *)(v6 + 112) = v17 / 10000;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)(v17 / 10000);
    if ( !v4 )
      v16.QuadPart = v7 - v16.QuadPart;
    DueTime = v16;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v16 = DueTime;
      v19 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    }
    else
    {
      v19 = 2147353478LL;
    }
    if ( *(_BYTE *)v19 )
      sub_1800039E8(v6, v16.QuadPart, v18);
    ZwSetTimer2(*(HANDLE *)(v6 + 24), &DueTime, 0LL, &Parameters);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
  }
  RtlReleaseSRWLockExclusive(a3);
  v21 = v26;
  while ( v21 != &v26 )
  {
    v22 = v21 - 31;
    LOBYTE(v20) = v25;
    v21 = (_QWORD *)*v21;
    sub_1800193C0(v22, a3, v20);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v23 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v23 = 2147353478LL;
  if ( *(_BYTE *)v23 )
  {
    v32 = v6;
    v31 = 7215;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x402u, 8u, Fields);
  }
  return ZwAssociateWaitCompletionPacket(
           *(HANDLE *)(v6 + 32),
           a3[-6].Ptr,
           *(HANDLE *)(v6 + 24),
           (PVOID)(v6 + 40),
           a3,
           0,
           v25,
           0LL);
}
