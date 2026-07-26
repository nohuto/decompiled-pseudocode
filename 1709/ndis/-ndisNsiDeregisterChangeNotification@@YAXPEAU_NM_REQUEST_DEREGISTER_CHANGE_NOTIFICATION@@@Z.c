/*
 * XREFs of ?ndisNsiDeregisterChangeNotification@@YAXPEAU_NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00DB460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisNsiDeregisterChangeNotification(struct _NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_q(0x8Eu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_q(0x8Fu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1);
  }
}
