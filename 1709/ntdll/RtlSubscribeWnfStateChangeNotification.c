/*
 * XREFs of RtlSubscribeWnfStateChangeNotification @ 0x18006DB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006DBB4 (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 */

__int64 __fastcall RtlSubscribeWnfStateChangeNotification(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  return RtlpSubscribeWnfStateChangeNotificationInternal(a1, a2, a3, a4, a5, a6, a7, 4, 17);
}
