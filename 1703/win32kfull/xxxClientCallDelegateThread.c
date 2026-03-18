/*
 * XREFs of xxxClientCallDelegateThread @ 0x1C0133D58
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  _QWORD v12[11]; // [rsp+40h] [rbp-58h] BYREF
  int v13; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+18h]

  memset(v12, 0, 0x40uLL);
  v12[0] = a1;
  v12[1] = a3;
  v12[2] = *(_QWORD *)a2;
  LODWORD(v12[3]) = *(_DWORD *)(a2 + 8);
  v12[4] = *(_QWORD *)(a2 + 16);
  v12[5] = *(_QWORD *)(a2 + 24);
  LODWORD(v12[6]) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)((char *)&v12[6] + 4) = *(_QWORD *)(a2 + 36);
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
  EtwTraceBeginCallback(50LL);
  v9 = KeUserModeCallback(50LL, v12, 64LL, &v14, &v13);
  EtwTraceEndCallback(50LL);
  EnterCrit(0LL, 1LL);
  if ( v9 < 0 || v13 != 24 )
    return 0LL;
  v10 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > W32UserProbeAddress )
    v10 = (__int64 *)W32UserProbeAddress;
  result = *v10;
  v15 = *v10;
  return result;
}
