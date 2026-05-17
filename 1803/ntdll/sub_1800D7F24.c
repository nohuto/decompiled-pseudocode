/*
 * XREFs of sub_1800D7F24 @ 0x1800D7F24
 * Callers:
 *     ShipAssert @ 0x1800D8090 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 *     sub_1800D8020 @ 0x1800D8020 (sub_1800D8020.c)
 */

__int64 sub_1800D7F24()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_18015D6E8, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_18015D6E8;
        if ( qword_18015D6E8 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_18015D6E8, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)sub_1800D8020(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_18015D6E8, 0LL);
    return 0LL;
  }
  return v1;
}
