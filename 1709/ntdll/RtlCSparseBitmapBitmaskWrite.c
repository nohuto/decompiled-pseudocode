/*
 * XREFs of RtlCSparseBitmapBitmaskWrite @ 0x180003960
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpCSparseBitmapPageCommit @ 0x180003A08 (RtlpCSparseBitmapPageCommit.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlCSparseBitmapBitsClear @ 0x18006213C (RtlCSparseBitmapBitsClear.c)
 */

__int64 __fastcall RtlCSparseBitmapBitmaskWrite(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  volatile signed __int64 *v7; // r10
  unsigned __int64 v8; // r9
  char v9; // di
  __int64 v10; // rsi
  __int64 v11; // r11
  signed __int64 v12; // rdx
  signed __int64 v13; // rax
  bool i; // zf
  signed __int64 v16; // rcx

  if ( a4 )
  {
    v6 = RtlpCSparseBitmapPageCommit(a1, a2 >> 15);
    if ( v6 >= 0 )
    {
      v7 = (volatile signed __int64 *)BaseAddress;
      v8 = a2 >> 6;
      v9 = a2 & 0x3F;
      v10 = a4 << v9;
      v11 = ~(3LL << v9);
      v12 = *((_QWORD *)BaseAddress + v8);
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)BaseAddress + v8, v10 | v11 & v12, v12);
      for ( i = v12 == v13; !i; i = v16 == v13 )
      {
        v16 = v13;
        v13 = _InterlockedCompareExchange64(&v7[v8], v10 | v11 & v13, v13);
      }
      v6 = 0;
      RtlReleaseSRWLockShared(&SRWLock);
    }
    return (unsigned int)v6;
  }
  else
  {
    RtlCSparseBitmapBitsClear(a1, a2, 2LL);
    return 0LL;
  }
}
