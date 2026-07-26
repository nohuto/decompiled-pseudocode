/*
 * XREFs of NdisMIdleNotificationComplete @ 0x1C006FB60
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIdleNotificationCompleteEx @ 0x1C006FB80 (NdisMIdleNotificationCompleteEx.c)
 */

__int64 __fastcall NdisMIdleNotificationComplete(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return NdisMIdleNotificationCompleteEx(a1);
}
