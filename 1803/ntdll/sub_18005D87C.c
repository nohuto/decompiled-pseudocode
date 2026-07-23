/*
 * XREFs of sub_18005D87C @ 0x18005D87C
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_1800833C0 @ 0x1800833C0 (sub_1800833C0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005D72C @ 0x18005D72C (sub_18005D72C.c)
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_18005DD10 @ 0x18005DD10 (sub_18005DD10.c)
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005E008 @ 0x18005E008 (sub_18005E008.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FC34C @ 0x1800FC34C (sub_1800FC34C.c)
 *     sub_1800FC3FC @ 0x1800FC3FC (sub_1800FC3FC.c)
 *     sub_1800FE1FC @ 0x1800FE1FC (sub_1800FE1FC.c)
 */

__int64 __fastcall sub_18005D87C(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  NTSTATUS v7; // eax
  char v8; // dl
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdi
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 UserModeGlobalLogger; // rcx
  int v20; // [rsp+20h] [rbp-A9h]
  void *(__fastcall *v21)(__int64, unsigned int, __int64, char); // [rsp+40h] [rbp-89h] BYREF
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-81h]
  __int64 (__fastcall *v23)(__int64, __int64, unsigned int); // [rsp+50h] [rbp-79h]
  __int64 (__fastcall *v24)(__int64, int, unsigned int); // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v25)(); // [rsp+60h] [rbp-69h]
  __int64 v26; // [rsp+68h] [rbp-61h]
  __int128 v27; // [rsp+70h] [rbp-59h] BYREF
  __int128 v28; // [rsp+80h] [rbp-49h] BYREF
  __int128 v29; // [rsp+90h] [rbp-39h] BYREF
  char SystemInformation[56]; // [rsp+A0h] [rbp-29h] BYREF
  char v31; // [rsp+D8h] [rbp+Fh]

  v26 = a3;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)sub_18005E008(a4, 1LL) < 0 )
    return 0LL;
  v7 = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v8 = v31;
  v9 = *a4;
  if ( v7 < 0 )
    v8 = 1;
  v31 = v8;
  v27 = v9;
  v10 = sub_18005DDCC(a1, (unsigned int)v8, &v27);
  v11 = v10;
  if ( !v10 )
  {
    v15 = 0LL;
    sub_18005E008(a4, 0LL);
    return v15;
  }
  v12 = *a4;
  *(_DWORD *)(v10 + 16) = -571548178;
  v13 = v10 + 24;
  *(_OWORD *)v10 = v12;
  *(_DWORD *)(v10 + 20) = a1;
  v28 = *a4;
  sub_18005DB48(v10 + 112, 0x100000, v10, v10 + 512, v10 + 392, v10 + 24, (__int64)&v28);
  v29 = *a4;
  sub_18005DB48(v11 + 232, 0x1000000, v11, 0, 0LL, v13, (__int64)&v29);
  *(_QWORD *)(v11 + 72) = 0LL;
  *(_QWORD *)(v11 + 80) = 0LL;
  *(_QWORD *)(v11 + 88) = 0LL;
  *(_QWORD *)(v11 + 360) = 0LL;
  if ( (*(_DWORD *)(v11 + 20) & 0x20000000) != 0 )
    *(_DWORD *)(v11 + 56) = (unsigned __int16)sub_1800FC34C(sub_1800FF100);
  v25 = 0LL;
  v21 = (void *(__fastcall *)(__int64, unsigned int, __int64, char))sub_180074390;
  v22 = sub_1800606E0;
  v23 = sub_180012010;
  v24 = sub_180011560;
  sub_18005DD10(v11 + 392, v11 + 112, (unsigned int)&v21, *(_DWORD *)a4 & 1, v20, (__int64)&xmmword_1801608F0 + 12);
  v21 = sub_180023320;
  v22 = sub_1800606E0;
  v23 = sub_180012010;
  v24 = sub_180011560;
  v25 = sub_18005F640;
  sub_18005D72C(v11 + 512, v11 + 112, v31, *(_DWORD *)a4 & 1, (__int64)&v21, v13, (__int64)&xmmword_1801608F0);
  v14 = v26;
  *(_QWORD *)(v11 + 352) = 0LL;
  if ( (int)sub_18005DC24(v11 + 112, a2, v14) < 0 )
  {
    v15 = 0LL;
LABEL_26:
    if ( v11 )
      sub_18005F8D0(v11);
    return v15;
  }
  v15 = v11;
  v11 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v16 = 2147353480LL;
  if ( *(_BYTE *)v16 )
    sub_1800FC3FC(v15, *(_QWORD *)(v15 + 384) - v15, a1);
  v17 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1800FE1FC(v15, a1, *(_QWORD *)(v15 + 384) - v15, *(_DWORD *)(v15 + 376) - v15, *(unsigned __int8 *)v17);
    goto LABEL_26;
  }
  return v15;
}
