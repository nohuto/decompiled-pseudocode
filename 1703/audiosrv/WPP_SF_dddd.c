/*
 * XREFs of WPP_SF_dddd @ 0x1800A3BF0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, 61LL, &v5);
}
