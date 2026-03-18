/*
 * XREFs of ExDeleteTimer @ 0x14012F420
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140788EBC (CancelTimerCallbacksAndDeleteTimer.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1400E0F34 (ExpCheckForFreedEnhancedTimer.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExDeleteTimer(__int64 a1, char a2, char a3, unsigned int *a4)
{
  ULONG_PTR v9; // rax
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  ExpCheckForFreedEnhancedTimer(a1);
  if ( a4 )
  {
    v9 = *a4;
    if ( (_DWORD)v9 )
      KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, 0LL);
    *(_QWORD *)(a1 + 136) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 1)),
                                            KiWaitNever);
    *(_QWORD *)(a1 + 144) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 2)),
                                            KiWaitNever);
  }
  v10[1] = a1;
  v10[0] = (__int64)ExpFinalizeTimerDeletion;
  return KeDisableTimer2(a1, a2, a3, v10);
}
