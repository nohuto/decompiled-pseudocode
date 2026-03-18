/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C01FF8B8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 result; // rax
  _QWORD v8[8]; // [rsp+38h] [rbp-40h] BYREF
  int v9; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp+10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h]

  memset(v8, 0, 0x30uLL);
  v8[0] = *(_QWORD *)a1;
  LODWORD(v8[1]) = *(_DWORD *)(a1 + 8);
  v8[2] = *(_QWORD *)(a1 + 16);
  v8[3] = *(_QWORD *)(a1 + 24);
  LODWORD(v8[4]) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)((char *)&v8[4] + 4) = *(_QWORD *)(a1 + 36);
  if ( gdwInAtomicOperation )
  {
    v2 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v2, gdwInAtomicOperation, v3, v4);
  EtwTraceBeginCallback(116LL);
  v5 = KeUserModeCallback(116LL, v8, 48LL, &v10, &v9);
  EtwTraceEndCallback(116LL);
  EnterCrit(0LL, 1LL);
  if ( v5 < 0 || v9 != 24 )
    return 0LL;
  v6 = (__int64 *)v10;
  if ( v10 + 8 < v10 || v10 + 8 > W32UserProbeAddress )
    v6 = (__int64 *)W32UserProbeAddress;
  result = *v6;
  v11 = *v6;
  return result;
}
