/*
 * XREFs of ?ndisNsiDeregisterChangeNotification@@YAXPEAU_NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00DD010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisNsiDeregisterChangeNotification(struct _NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    WPP_SF_q(0x8Eu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C009961D >= 4u )
      WPP_SF_q(0x8Fu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1);
  }
}
