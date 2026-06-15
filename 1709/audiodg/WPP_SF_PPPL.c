/*
 * XREFs of WPP_SF_PPPL @ 0x140047574
 * Callers:
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x14001B6C0 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_PPPL(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v6; // [rsp+A0h] [rbp+28h] BYREF
  va_list va1; // [rsp+A0h] [rbp+28h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va2; // [rsp+A8h] [rbp+30h]
  va_list va3; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids,
           0x1Bu,
           va,
           8LL,
           va1,
           8LL,
           va2,
           8LL,
           va3,
           4LL,
           0LL);
}
