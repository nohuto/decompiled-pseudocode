/*
 * XREFs of ClientNoMemoryPopup @ 0x1C01F8890
 * Callers:
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientNoMemoryPopup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF

  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(86LL);
  KeUserModeCallback(86LL, 0LL, 0LL, &v6, &v5);
  EtwTraceEndCallback(86LL);
  return EnterCrit(0LL, 1LL);
}
