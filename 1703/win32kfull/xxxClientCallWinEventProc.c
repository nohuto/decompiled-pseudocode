/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C005C214
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 result; // rax
  _QWORD v13[10]; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+10h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h]

  memset(v13, 0, 0x30uLL);
  v13[0] = a1;
  if ( a2 )
    v9 = *a2;
  else
    v9 = 0LL;
  v13[1] = v9;
  v13[3] = *(_QWORD *)(a3 + 24);
  LODWORD(v13[2]) = *(_DWORD *)(a3 + 16);
  v13[4] = *(_QWORD *)(a3 + 32);
  v13[5] = *(_QWORD *)(a3 + 40);
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
  EtwTraceBeginCallback(88LL);
  v10 = KeUserModeCallback(88LL, v13, 48LL, &v15, &v14);
  EtwTraceEndCallback(88LL);
  EnterCrit(0LL, 1LL);
  if ( v10 < 0 || v14 != 24 )
    return 0LL;
  v11 = (__int64 *)v15;
  if ( v15 + 8 < v15 || v15 + 8 > W32UserProbeAddress )
    v11 = (__int64 *)W32UserProbeAddress;
  result = *v11;
  v16 = *v11;
  return result;
}
