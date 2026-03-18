/*
 * XREFs of UserCoreMsgOpenConnectionHandle @ 0x1C012E3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UserCoreMsgOpenConnectionHandle(
        char a1,
        const struct tagMsgRoutingInfo *a2,
        void **a3,
        const GUID *a4)
{
  return CoreMsgOpenConnection(a1, a2, a3, a4);
}
