/*
 * XREFs of sub_180082E7C @ 0x180082E7C
 * Callers:
 *     RtlRunOnceBeginInitialize @ 0x18001ECD0 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     ZwWaitForKeyedEvent @ 0x18009E3F0 (ZwWaitForKeyedEvent.c)
 */

signed __int64 __fastcall sub_180082E7C(signed __int64 a1, volatile signed __int64 *a2)
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
