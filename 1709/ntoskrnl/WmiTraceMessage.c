/*
 * XREFs of WmiTraceMessage @ 0x1401300F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x140092350 (EtwpTraceMessageVa.c)
 */

__int64 WmiTraceMessage(__int64 a1, char a2, signed __int32 *a3, __int16 a4, ...)
{
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, a4);
  return EtwpTraceMessageVa(a1, a2, a3, a4, (__int64)va, 0);
}
