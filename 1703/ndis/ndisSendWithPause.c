/*
 * XREFs of ndisSendWithPause @ 0x1C00588F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisSendPacketsWithPause @ 0x1C00585D0 (ndisSendPacketsWithPause.c)
 */

__int64 __fastcall ndisSendWithPause(__int64 a1, struct _NDIS_PACKET *a2)
{
  struct _NDIS_PACKET *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(0x32u, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2);
  ndisSendPacketsWithPause(a1, &v4, 1u);
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(0x33u, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, v4);
  return 259LL;
}
