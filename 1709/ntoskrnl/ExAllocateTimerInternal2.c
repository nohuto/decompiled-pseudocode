/*
 * XREFs of ExAllocateTimerInternal2 @ 0x140133FB0
 * Callers:
 *     ExAllocateTimer @ 0x140133F80 (ExAllocateTimer.c)
 *     ExAllocateTimerInternal @ 0x1402863F0 (ExAllocateTimerInternal.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400B274C (KiInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall ExAllocateTimerInternal2(__int64 a1, __int64 a2, __int16 *a3, unsigned int a4)
{
  _WORD *PoolWithTag; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int16 v12; // [rsp+68h] [rbp+20h] BYREF
  __int16 v13; // [rsp+6Ah] [rbp+22h]

  if ( (a4 & 0x8000000E) != a4 || (a4 & 6) != 0 && (a4 & 8) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a4, 0LL);
  if ( ((a4 & 2) != 0) != (a3 != 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a4, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6D547845u);
  v9 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (a4 & 2) != 0 )
    {
      v12 = *a3;
      v13 = a3[1];
      KeInitializeIRTimer((__int64)PoolWithTag, a1, a2, (unsigned __int8 *)&v12, a4);
    }
    else
    {
      PoolWithTag[1] = 0;
      KiInitializeTimer2((__int64)PoolWithTag, a1, a2, a4);
    }
    *(_QWORD *)(v9 + 136) = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    *(_BYTE *)(v9 + 152) = ExpTimerFreedCookie;
    *(_QWORD *)(v9 + 144) = v10;
  }
  return v9;
}
