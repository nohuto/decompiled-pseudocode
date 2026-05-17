/*
 * XREFs of sub_18004AE34 @ 0x18004AE34
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     RtlpUnWaitCriticalSection @ 0x18004A860 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 */

signed __int64 __fastcall sub_18004AE34(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = -1LL;
  v6 = -1LL;
  if ( byte_18015AC09 )
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
