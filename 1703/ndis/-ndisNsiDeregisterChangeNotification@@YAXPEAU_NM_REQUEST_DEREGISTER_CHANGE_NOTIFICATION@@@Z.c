/*
 * XREFs of ?ndisNsiDeregisterChangeNotification@@YAXPEAU_NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00D0BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisNsiDeregisterChangeNotification(struct _NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_q(0x8Eu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_q(0x8Fu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  }
}
