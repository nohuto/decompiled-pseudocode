/*
 * XREFs of KiInitializeTimer2 @ 0x14012A6A0
 * Callers:
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 *     KeInitializeTimer2 @ 0x14012A690 (KeInitializeTimer2.c)
 *     ExAllocateTimerInternal2 @ 0x140147D90 (ExAllocateTimerInternal2.c)
 *     MiStoreEvictThread @ 0x1401687C0 (MiStoreEvictThread.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     ExInitializeTimeRefresh @ 0x140808838 (ExInitializeTimeRefresh.c)
 *     ExpWorkerInitialization @ 0x14081E950 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

char __fastcall KiInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r11
  char v5; // r9
  _BYTE *i; // rax
  char result; // al

  v4 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) | 0x18;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a2 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a3 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v5 = a4 & 0xE;
  *(_BYTE *)(a1 + 129) = v5;
  for ( i = KiTimer2Combinations; *i != v5; i += 3 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 5 )
      __fastfail(5u);
  }
  *(_BYTE *)(a1 + 130) = KiTimer2Combinations[3 * v4 + 1];
  result = KiTimer2Combinations[3 * v4 + 2];
  *(_BYTE *)(a1 + 131) = result;
  return result;
}
