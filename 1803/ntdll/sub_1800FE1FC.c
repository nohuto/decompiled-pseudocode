/*
 * XREFs of sub_1800FE1FC @ 0x1800FE1FC
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     sub_180060CFC @ 0x180060CFC (sub_180060CFC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 __fastcall sub_1800FE1FC(__int64 a1)
{
  sub_180060CFC(a1);
  return ZwTraceEvent();
}
