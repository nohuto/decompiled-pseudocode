/*
 * XREFs of WPP_SF_Pq @ 0x1800DDED0
 * Callers:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1800DD5E0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Pq(TRACEHANDLE a1, USHORT a2, __int64 a3, __int64 a4, ...)
{
  __int64 v5[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v5[0] = 192LL;
  return TraceMessage(a1, 0x2Bu, &WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids, a2, v5, 8LL, va, 8LL, 0LL);
}
