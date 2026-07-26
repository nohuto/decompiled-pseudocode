/*
 * XREFs of ?ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00C9680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(struct _NM_REQUEST_REGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_q(0x8Cu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_qD(0x8Du, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1, 0);
  }
  return 0LL;
}
