/*
 * XREFs of WPP_SF_qd_guid_ @ 0x180067CBC
 * Callers:
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x180067770 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd_guid_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, 12LL, (__int64 *)va);
}
