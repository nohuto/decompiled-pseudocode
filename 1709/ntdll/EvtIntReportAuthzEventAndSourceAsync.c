/*
 * XREFs of EvtIntReportAuthzEventAndSourceAsync @ 0x18010A4A0
 * Callers:
 *     <none>
 * Callees:
 *     EvtIntReportEventWorker @ 0x180016898 (EvtIntReportEventWorker.c)
 */

_BOOL8 __fastcall EvtIntReportAuthzEventAndSourceAsync(
        __int64 a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned __int8 *a6,
        unsigned __int16 a7,
        int a8,
        __int64 a9,
        unsigned __int64 a10)
{
  return EvtIntReportEventWorker(a1, 1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
