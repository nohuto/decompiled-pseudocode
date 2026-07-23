/*
 * XREFs of sub_18000A268 @ 0x18000A268
 * Callers:
 *     InitFn @ 0x180008C50 (InitFn.c)
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
  NTSTATUS v6; // eax
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r14
  _QWORD *v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 UserModeGlobalLogger; // rcx
  unsigned __int8 v18; // al
  int v19; // r15d
  _DWORD *v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // rcx
  BOOLEAN v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-49h]
  __int64 (__fastcall *v27)(void *, unsigned int, _DWORD *); // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+40h] [rbp-39h]
  __int64 (__fastcall *v29)(PVOID); // [rsp+48h] [rbp-31h]
  __int64 (__fastcall *v30)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-29h]
  __int64 (__fastcall *v31)(PVOID); // [rsp+58h] [rbp-21h]
  char SystemInformation[56]; // [rsp+60h] [rbp-19h] BYREF
  char v33; // [rsp+98h] [rbp+1Fh]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v6 = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v7 = v33;
  if ( v6 < 0 )
    v7 = 1;
  v33 = v7;
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
  v31 = 0LL;
  v27 = sub_180009F70;
  v30 = sub_180020B20;
  v28 = sub_18001E750;
  v29 = sub_180020D20;
  sub_18000A680(v9 + 176, v9, &v27);
  v27 = (__int64 (__fastcall *)(void *, unsigned int, _DWORD *))&sub_18001E760;
  v30 = sub_180020B20;
  v28 = sub_18001E750;
  v29 = sub_180020D20;
  v31 = sub_18000C8C0;
  sub_18000A534(v9 + 288, v9, (unsigned int)v33, &v27);
  v26 = (unsigned __int8)((a2 + 0xFFFFF) >> 20);
  v12 = (unsigned __int8)((unsigned __int64)(a3 + 4095) >> 12);
  if ( v26 )
  {
LABEL_16:
    if ( v12 > 0xFE )
    {
      v18 = -2;
      v12 -= 254LL;
    }
    else
    {
      v18 = v12;
      v12 = 0LL;
    }
    v19 = v18;
    v20 = sub_18000A020((volatile signed __int64 *)v9, v18);
    v21 = (unsigned __int64)v20;
    if ( !v20 )
    {
      v13 = 0LL;
      goto LABEL_43;
    }
    --v26;
    v20[16] = -857879331;
    sub_18000A1D0((__int64)v20, v19);
    v23 = 0;
    v24 = *v10;
    if ( !*v10 )
      goto LABEL_20;
    while ( 1 )
    {
      if ( *(_WORD *)(v22 + 90) < *(_WORD *)(v24 + 26) )
      {
        v25 = *(_QWORD *)v24;
        if ( (*(_BYTE *)(v9 + 128) & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_35;
          v25 ^= v24;
        }
        if ( !v25 )
        {
LABEL_35:
          v23 = 0;
LABEL_20:
          RtlRbInsertNodeEx((PRTL_RB_TREE)(v9 + 120), (PRTL_BALANCED_NODE)v24, v23, (PRTL_BALANCED_NODE)(v21 + 64));
          *(_QWORD *)(v9 + 24) += (unsigned __int8)~*(_BYTE *)(v21 + 90);
          sub_18000A220(v9, v21);
          if ( !v26 )
            break;
          goto LABEL_16;
        }
      }
      else
      {
        v25 = *(_QWORD *)(v24 + 8);
        if ( (*(_BYTE *)(v9 + 128) & 1) != 0 )
        {
          if ( !v25 )
          {
LABEL_25:
            v23 = 1;
            goto LABEL_20;
          }
          v25 ^= v24;
        }
        if ( !v25 )
          goto LABEL_25;
      }
      v24 = v25;
    }
  }
  *(_QWORD *)(v9 + 136) = 0LL;
  v13 = v9;
  v9 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    sub_1800FDDC0(v13, *(_QWORD *)(v13 + 168) - v13, a1);
  v15 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1800FF98C(v13, a1, *(_QWORD *)(v13 + 168) - v13, *(_DWORD *)(v13 + 160) - v13, *(unsigned __int8 *)v15);
LABEL_43:
    if ( v9 )
      sub_1800080CC((_DWORD *)v9);
  }
  return v13;
}
