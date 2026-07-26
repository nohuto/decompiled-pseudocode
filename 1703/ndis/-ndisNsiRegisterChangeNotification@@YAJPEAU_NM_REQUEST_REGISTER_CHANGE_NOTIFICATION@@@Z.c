/*
 * XREFs of ?ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00BE4E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(struct _NM_REQUEST_REGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_q(0x8Cu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_qD(0x8Du, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, 0);
  }
  return 0LL;
}
