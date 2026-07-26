/*
 * XREFs of ?ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00CAEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(struct _NM_REQUEST_REGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    WPP_SF_q(0x8Cu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C009961D >= 4u )
      WPP_SF_qD(0x8Du, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1, 0);
  }
  return 0LL;
}
