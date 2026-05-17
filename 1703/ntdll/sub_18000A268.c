/*
 * XREFs of sub_18000A268 @ 0x18000A268
 * Callers:
 *     sub_180008C50 @ 0x180008C50 (sub_180008C50.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 * Callees:
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 *     sub_18000A020 @ 0x18000A020 (sub_18000A020.c)
 *     sub_18000A1D0 @ 0x18000A1D0 (sub_18000A1D0.c)
 *     sub_18000A220 @ 0x18000A220 (sub_18000A220.c)
 *     sub_18000A534 @ 0x18000A534 (sub_18000A534.c)
 *     sub_18000A680 @ 0x18000A680 (sub_18000A680.c)
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FDD7C @ 0x1800FDD7C (sub_1800FDD7C.c)
 *     sub_1800FDDC0 @ 0x1800FDDC0 (sub_1800FDDC0.c)
 *     sub_1800FF98C @ 0x1800FF98C (sub_1800FF98C.c)
 */

__int64 __fastcall sub_18000A268(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  int SystemInformation; // eax
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rcx
  unsigned __int8 v28; // al
  int v29; // r15d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // [rsp+30h] [rbp-49h]
  __int64 (__fastcall *v37)(); // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+40h] [rbp-39h]
  __int64 (__fastcall *v39)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-31h]
  __int64 (__fastcall *v40)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-29h]
  __int64 (__fastcall *v41)(); // [rsp+58h] [rbp-21h]
  char v42[56]; // [rsp+60h] [rbp-19h] BYREF
  char v43; // [rsp+98h] [rbp+1Fh]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  SystemInformation = ZwQuerySystemInformation(0LL, v42, 64LL, 0LL);
  v7 = v43;
  if ( SystemInformation < 0 )
    v7 = 1;
  v43 = v7;
  v8 = sub_18000A73C(a1, (unsigned int)v7);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  *(_DWORD *)(v8 + 16) = -571548178;
  v10 = (__int64 *)(v8 + 120);
  v11 = (_QWORD *)(v8 + 96);
  v11[1] = v11;
  *v11 = v11;
  *(_DWORD *)(v9 + 20) = a1;
  *(_QWORD *)(v9 + 120) = 0LL;
  *(_QWORD *)(v9 + 128) = 0LL;
  *(_QWORD *)(v9 + 88) = 0LL;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_QWORD *)(v9 + 64) = 0LL;
  *(_QWORD *)(v9 + 144) = 0LL;
  if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
    *(_DWORD *)(v9 + 32) = (unsigned __int16)sub_1800FDD7C(sub_1801005E0);
  v41 = 0LL;
  v37 = (__int64 (__fastcall *)())sub_180009F70;
  v40 = sub_180020B20;
  v38 = sub_18001E750;
  v39 = sub_180020D20;
  sub_18000A680(v9 + 176, v9, &v37);
  v37 = sub_18001E760;
  v40 = sub_180020B20;
  v38 = sub_18001E750;
  v39 = sub_180020D20;
  v41 = sub_18000C8C0;
  sub_18000A534(v9 + 288, v9, (unsigned int)v43, &v37);
  v15 = (unsigned __int8)((a2 + 0xFFFFF) >> 20);
  v36 = v15;
  v16 = (unsigned __int8)((unsigned __int64)(a3 + 4095) >> 12);
  if ( v15 )
  {
LABEL_16:
    if ( v16 > 0xFE )
    {
      v28 = -2;
      v16 -= 254LL;
    }
    else
    {
      v28 = v16;
      v16 = 0LL;
    }
    v29 = v28;
    v30 = sub_18000A020((volatile signed __int64 *)v9, v28);
    v31 = v30;
    if ( !v30 )
    {
      v17 = 0LL;
      goto LABEL_43;
    }
    --v36;
    *(_DWORD *)(v30 + 64) = -857879331;
    sub_18000A1D0(v30, v29);
    LOBYTE(v33) = 0;
    v34 = *v10;
    if ( !*v10 )
      goto LABEL_20;
    while ( 1 )
    {
      if ( *(_WORD *)(v32 + 90) < *(_WORD *)(v34 + 26) )
      {
        v35 = *(_QWORD *)v34;
        if ( (*(_BYTE *)(v9 + 128) & 1) != 0 )
        {
          if ( !v35 )
            goto LABEL_35;
          v35 ^= v34;
        }
        if ( !v35 )
        {
LABEL_35:
          LOBYTE(v33) = 0;
LABEL_20:
          RtlRbInsertNodeEx(v9 + 120, v34, v33, v31 + 64);
          *(_QWORD *)(v9 + 24) += (unsigned __int8)~*(_BYTE *)(v31 + 90);
          sub_18000A220(v9, v31);
          if ( !v36 )
            break;
          goto LABEL_16;
        }
      }
      else
      {
        v35 = *(_QWORD *)(v34 + 8);
        if ( (*(_BYTE *)(v9 + 128) & 1) != 0 )
        {
          if ( !v35 )
          {
LABEL_25:
            LOBYTE(v33) = 1;
            goto LABEL_20;
          }
          v35 ^= v34;
        }
        if ( !v35 )
          goto LABEL_25;
      }
      v34 = v35;
    }
  }
  *(_QWORD *)(v9 + 136) = 0LL;
  v17 = v9;
  v9 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v12, v13, v14) )
    v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v21 = 2147353480LL;
  if ( *(_BYTE *)v21 )
    sub_1800FDDC0(v17, *(_QWORD *)(v17 + 168) - v17, a1);
  v25 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v18, v19, v20) )
    v26 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v26 = 2147353472LL;
  if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v26, v22, v23, v24) )
      v25 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    sub_1800FF98C(v17, a1, *(_QWORD *)(v17 + 168) - v17, *(_DWORD *)(v17 + 160) - v17, *(unsigned __int8 *)v25);
LABEL_43:
    if ( v9 )
      sub_1800080CC(v9);
  }
  return v17;
}
