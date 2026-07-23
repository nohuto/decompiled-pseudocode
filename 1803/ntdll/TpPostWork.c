/*
 * XREFs of TpPostWork @ 0x180025FD0
 * Callers:
 *     sub_1800709B0 @ 0x1800709B0 (sub_1800709B0.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     sub_18002601C @ 0x18002601C (sub_18002601C.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  PTP_WORK v3; // r9

  v3 = Work;
  if ( Work
    && (unsigned int)sub_18002601C(Work, 0LL, v2)
    && *((__int64 (__fastcall ***)(PVOID))v3 + 1) == &off_180110190
    && (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72) == (_BYTE)v1) )
  {
    sub_180026040(v3);
  }
  else
  {
    sub_1801086C8(Work, v1, v2, v3);
  }
}
