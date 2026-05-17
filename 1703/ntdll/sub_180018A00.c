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

__int64 __fastcall sub_180018A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r12
  __int64 v13; // r11
  _QWORD *v14; // rbx
  __int64 v15; // r11
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rbx
  bool v29; // si
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  bool v36; // [rsp+40h] [rbp-49h]
  _QWORD *v37; // [rsp+48h] [rbp-41h] BYREF
  _QWORD **v38; // [rsp+50h] [rbp-39h]
  __int64 v39; // [rsp+58h] [rbp-31h] BYREF
  __int64 v40; // [rsp+60h] [rbp-29h]
  _BYTE v41[6]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v42; // [rsp+6Eh] [rbp-1Bh]
  __int64 v43; // [rsp+88h] [rbp-1h]
  int v44; // [rsp+90h] [rbp+7h] BYREF
  __int64 v45; // [rsp+98h] [rbp+Fh]

  v4 = *(_QWORD *)(a4 + 8);
  v44 = 0;
  v5 = a3;
  v45 = 0LL;
  v36 = v4 != 0;
  if ( v4 )
  {
    v6 = a3 + 8;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v6 = a3 + 128;
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = MEMORY[0x7FFE03B0];
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v40 = v7;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    sub_1801058B8(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v38 = &v37;
  v37 = &v37;
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
  {
    v7 = v40;
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  }
  else
  {
    v9 = 2147353478LL;
  }
  if ( *(_BYTE *)v9 )
    sub_18000434C(v6);
  RtlAcquireSRWLockExclusive(v5);
  v12 = (_QWORD *)(v6 + 8);
  while ( *v12 && *(_QWORD *)(*v12 + 40LL) <= v7 )
  {
    sub_180018CC8(v6 + 8, *v12);
    v14 = (_QWORD *)(v13 - 40);
    sub_180018CC8(v6 + 16, v13 - 40);
    *(_BYTE *)(v15 + 64) = 0;
    v16 = v38;
    if ( *v38 != &v37 )
      __fastfail(3u);
    v14[1] = v38;
    *v14 = &v37;
    *v16 = v14;
    v38 = (_QWORD **)v14;
  }
  v17 = *(_QWORD *)(v6 + 16);
  if ( v17 )
  {
    v18 = *(_QWORD *)(*v12 + 32LL);
    v19 = *(_QWORD *)(v17 + 32) - v18;
    *(_QWORD *)v6 = v18;
    v20 = (unsigned __int128)(v19 * (__int128)0x346DC5D63886594BLL) >> 64;
    v21 = v19 / 10000;
    v22 = 10000LL * (unsigned int)(v19 / 10000);
    *(_DWORD *)(v6 + 112) = v21;
    v45 = v22;
    if ( !v4 )
      v18 = v7 - v18;
    v39 = v18;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v22, v20, v10, v11) )
    {
      v18 = v39;
      v23 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    }
    else
    {
      v23 = 2147353478LL;
    }
    if ( *(_BYTE *)v23 )
      sub_1800039E8(v6, v18, v21);
    ZwSetTimer2(*(_QWORD *)(v6 + 24), &v39, 0LL, &v44);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v5);
  v28 = v37;
  v29 = v36;
  while ( v28 != &v37 )
  {
    v30 = v28 - 31;
    LOBYTE(v26) = v36;
    v28 = (_QWORD *)*v28;
    sub_1800193C0(v30, v5, v26);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v24, v26, v27) )
    v34 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v34 = 2147353478LL;
  if ( *(_BYTE *)v34 )
  {
    v43 = v6;
    v42 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v34, v31, v32, v33) )
      v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    ZwTraceEvent(*(unsigned __int8 *)v8, 1026LL, 8LL, v41);
  }
  return ZwAssociateWaitCompletionPacket(
           *(_QWORD *)(v6 + 32),
           *(_QWORD *)(v5 - 48),
           *(_QWORD *)(v6 + 24),
           v6 + 40,
           v5,
           0,
           v29,
           0LL);
}
