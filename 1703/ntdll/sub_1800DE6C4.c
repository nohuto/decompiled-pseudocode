/*
 * XREFs of sub_1800DE6C4 @ 0x1800DE6C4
 * Callers:
 *     ShipAssert @ 0x1800DE830 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 *     sub_1800DE7C0 @ 0x1800DE7C0 (sub_1800DE7C0.c)
 */

__int64 sub_1800DE6C4()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_18015C6E8, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_18015C6E8;
        if ( qword_18015C6E8 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_18015C6E8, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)sub_1800DE7C0(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_18015C6E8, 0LL);
    return 0LL;
  }
  return v1;
}
