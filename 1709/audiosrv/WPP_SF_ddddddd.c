/*
 * XREFs of WPP_SF_ddddddd @ 0x1800B8F88
 * Callers:
 *     AudioWriteLogHeader @ 0x1800B8C0C (AudioWriteLogHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddddddd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+C8h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, 13LL, &v5);
}
