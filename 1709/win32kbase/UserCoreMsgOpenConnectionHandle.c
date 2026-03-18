/*
 * XREFs of UserCoreMsgOpenConnectionHandle @ 0x1C012D940
 * Callers:
 *     <none>
 * Callees:
 *     CoreMsgOpenConnection @ 0x1C0087E20 (CoreMsgOpenConnection.c)
 */

__int64 __fastcall UserCoreMsgOpenConnectionHandle(
        char a1,
        const struct tagMsgRoutingInfo *a2,
        void **a3,
        const GUID *a4)
{
  return CoreMsgOpenConnection(a1, a2, a3, a4);
}
