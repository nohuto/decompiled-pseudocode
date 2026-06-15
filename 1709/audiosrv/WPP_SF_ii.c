/*
 * XREFs of WPP_SF_ii @ 0x180090908
 * Callers:
 *     ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x18008B8C0 (-GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, 48LL, (__int64 *)va);
}
