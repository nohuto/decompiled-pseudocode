/*
 * XREFs of WPP_SF_dD @ 0x140042264
 * Callers:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140019DDC (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_c59da3fdbfb03c8b2196f1e98cb9dccc_Traceguids, 19LL, &v5);
}
