/*
 * XREFs of WPP_SF_qg @ 0x1800879D0
 * Callers:
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180085844 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, 51LL, (__int64 *)va);
}
