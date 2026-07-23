/*
 * XREFs of sub_180088C98 @ 0x180088C98
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x180028CF0 (RtlRunOnceBeginInitialize.c)
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 * Callees:
 *     ZwWaitForKeyedEvent @ 0x1800A8B70 (ZwWaitForKeyedEvent.c)
 */

signed __int64 __fastcall sub_180088C98(signed __int64 a1, volatile signed __int64 *a2)
{
  bool v3; // zf
  signed __int64 v4; // rax
  unsigned __int64 KeyValue; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    KeyValue = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v4 = _InterlockedCompareExchange64(a2, (signed __int64)&KeyValue + 1, a1);
    v3 = a1 == v4;
    a1 = v4;
    if ( v3 )
    {
      ZwWaitForKeyedEvent(0LL, &KeyValue, 0, 0LL);
      a1 = *a2;
    }
  }
  while ( (a1 & 3) == 1 );
  return a1;
}
