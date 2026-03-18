/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C0017DDC
 * Callers:
 *     xxxConsoleControl @ 0x1C001B784 (xxxConsoleControl.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(128LL);
  KeUserModeCallback(128LL, &v6, 8LL, &v7, &v5);
  EtwTraceEndCallback(128LL);
  return EnterCrit(0LL, 1LL);
}
