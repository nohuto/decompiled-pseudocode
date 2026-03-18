/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x1401E0570
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140125F3C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcNotifyWriteBehindHelper(struct _KEVENT *a1, char a2)
{
  CcNotifyWriteBehindInternal(a1, a2);
  return 1;
}
