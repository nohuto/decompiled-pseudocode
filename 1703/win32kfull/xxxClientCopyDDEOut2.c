/*
 * XREFs of xxxClientCopyDDEOut2 @ 0x1C020058C
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C0200268 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v10; // [rsp+50h] [rbp-68h] BYREF
  __int128 v11; // [rsp+60h] [rbp-58h]
  __int128 v12; // [rsp+70h] [rbp-48h]
  __int128 v13; // [rsp+80h] [rbp-38h]
  __int64 v14; // [rsp+90h] [rbp-28h]

  v4 = a1;
  v10 = *(_OWORD *)a1;
  v11 = *(_OWORD *)(a1 + 16);
  v12 = *(_OWORD *)(a1 + 32);
  v13 = *(_OWORD *)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(63LL);
  v5 = KeUserModeCallback(63LL, &v10, 72LL, v9, &v8);
  EtwTraceEndCallback(63LL);
  EnterCrit(0LL, 1LL);
  *(_QWORD *)(v4 + 24) = *((_QWORD *)&v11 + 1);
  if ( v5 < 0 || v8 != 24 )
    return 0LL;
  v6 = (__int64 *)v9[0];
  if ( (unsigned __int64)(v9[0] + 8LL) < v9[0] || (unsigned __int64)(v9[0] + 8LL) > W32UserProbeAddress )
    v6 = (__int64 *)W32UserProbeAddress;
  result = *v6;
  v9[1] = *v6;
  return result;
}
