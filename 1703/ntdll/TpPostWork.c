/*
 * XREFs of TpPostWork @ 0x180016B90
 * Callers:
 *     sub_1800141D4 @ 0x1800141D4 (sub_1800141D4.c)
 * Callees:
 *     <none>
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  PTP_WORK v1; // rdx
  int v2; // eax

  v1 = Work;
  if ( !Work
    || (v2 = *((_DWORD *)Work + 42), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *((__int64 (__fastcall ***)(PVOID))Work + 1) != &off_1801101D0
    || (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72)) )
  {
    sub_1801058B8(Work, v1);
  }
  else
  {
    sub_180016BD8(v1);
  }
}
