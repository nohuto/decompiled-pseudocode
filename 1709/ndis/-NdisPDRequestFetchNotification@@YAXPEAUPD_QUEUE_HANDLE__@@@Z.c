/*
 * XREFs of ?NdisPDRequestFetchNotification@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C0076310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall NdisPDRequestFetchNotification(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( (unsigned __int8)byte_1C0098764 >= 5u )
    WPP_SF_q(0x65u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 14, 1);
}
