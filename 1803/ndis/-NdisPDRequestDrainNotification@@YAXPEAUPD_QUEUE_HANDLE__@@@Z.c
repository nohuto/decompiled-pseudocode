/*
 * XREFs of ?NdisPDRequestDrainNotification@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C0076A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisPDRequestDrainNotification(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( (unsigned __int8)byte_1C0099624 >= 5u )
    WPP_SF_q(0x66u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 32, 1);
}
