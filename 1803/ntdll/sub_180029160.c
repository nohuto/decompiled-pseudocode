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

__int64 __fastcall sub_180029160(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  __int64 v4; // r13
  volatile signed __int64 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // r12
  __int64 v15; // r11
  _QWORD *v16; // r14
  __int64 v17; // r11
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rdi
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  bool v29; // [rsp+40h] [rbp-49h]
  _QWORD *v30; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v31; // [rsp+50h] [rbp-39h]
  __int64 v32; // [rsp+58h] [rbp-31h]
  __int64 v33; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v34[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v35; // [rsp+6Eh] [rbp-1Bh]
  __int64 v36; // [rsp+88h] [rbp-1h]
  int v37; // [rsp+90h] [rbp+7h] BYREF
  __int64 v38; // [rsp+98h] [rbp+Fh]

  v4 = *(_QWORD *)(a4 + 8);
  v37 = 0;
  v5 = a3;
  v38 = 0LL;
  v29 = v4 != 0;
  if ( v4 )
  {
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (volatile signed __int64 *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v32 = v7;
  v8 = (__int64)&v5[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    sub_1801086C8(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v31 = &v30;
  v30 = &v30;
  v12 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v7 = v32;
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  }
  else
  {
    v13 = 2147353478LL;
  }
  if ( *(_BYTE *)v13 )
    sub_1800027B4(v8);
  RtlAcquireSRWLockExclusive((unsigned __int64)v5, v9, v10, v11);
  v14 = (_QWORD *)(v8 + 8);
  while ( *v14 && *(_QWORD *)(*v14 + 40LL) <= v7 )
  {
    sub_180029428(v8 + 8, *v14);
    v16 = (_QWORD *)(v15 - 40);
    sub_180029428(v8 + 16, v15 - 40);
    *(_BYTE *)(v17 + 64) = 0;
    v18 = v31;
    if ( *v31 != &v30 )
      __fastfail(3u);
    v16[1] = v31;
    *v16 = &v30;
    *v18 = v16;
    v31 = (_QWORD **)v16;
  }
  v19 = *(_QWORD *)(v8 + 16);
  if ( v19 )
  {
    v20 = *(_QWORD *)(*v14 + 32LL);
    v21 = *(_QWORD *)(v19 + 32) - v20;
    *(_QWORD *)v8 = v20;
    v22 = v21 / 10000;
    *(_DWORD *)(v8 + 112) = v21 / 10000;
    v38 = 10000LL * (unsigned int)(v21 / 10000);
    if ( !v4 )
      v20 = v7 - v20;
    v33 = v20;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v23 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v23 = 2147353478LL;
    if ( *(_BYTE *)v23 )
      sub_18000262C(v8, v20, v22);
    ZwSetTimer2(*(_QWORD *)(v8 + 24), &v33, 0LL, &v37);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v5);
  v25 = v30;
  while ( v25 != &v30 )
  {
    v26 = v25 - 31;
    LOBYTE(v24) = v29;
    v25 = (_QWORD *)*v25;
    sub_180029F94(v26, v5, v24);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v27 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v27 = 2147353478LL;
  if ( *(_BYTE *)v27 )
  {
    v36 = v8;
    v35 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    ZwTraceEvent(*(unsigned __int8 *)v12, 1026LL, 8LL, v34);
  }
  return ZwAssociateWaitCompletionPacket(
           *(_QWORD *)(v8 + 32),
           *((_QWORD *)v5 - 6),
           *(_QWORD *)(v8 + 24),
           v8 + 40,
           v5,
           0,
           v29,
           0LL);
}
