/*
 * XREFs of xxxClientGetDDEFlags @ 0x1C02009F4
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5440 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientGetDDEFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 result; // rax
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h]

  v7[0] = a1;
  v7[1] = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(70LL);
  v4 = KeUserModeCallback(70LL, v7, 16LL, &v8, &v9);
  EtwTraceEndCallback(70LL);
  EnterCrit(0LL, 1LL);
  if ( v4 < 0 || v9 != 24 )
    return 0LL;
  v5 = (__int64 *)v8;
  if ( v8 + 8 < v8 || v8 + 8 > W32UserProbeAddress )
    v5 = (__int64 *)W32UserProbeAddress;
  result = *v5;
  v10 = *v5;
  return result;
}
