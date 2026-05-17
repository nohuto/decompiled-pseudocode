/*
 * XREFs of sub_18000C1F4 @ 0x18000C1F4
 * Callers:
 *     RtlpUnWaitCriticalSection @ 0x18000A930 (RtlpUnWaitCriticalSection.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 */

signed __int64 __fastcall sub_18000C1F4(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = -1LL;
  v6 = -1LL;
  if ( byte_180159BC9 )
  {
    v5 = ZwCreateEvent(&v6, 1048579LL, 0LL, 1LL, 0);
    v2 = v6;
    if ( v5 < 0 )
      v2 = -1LL;
    v6 = v2;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v2, 0LL);
  if ( !v3 )
    return v6;
  if ( v6 != -1 )
    ZwClose(v6);
  return v3;
}
