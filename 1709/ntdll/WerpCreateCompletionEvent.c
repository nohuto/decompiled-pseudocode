/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DD5B0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A09C0 (ZwCreateEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  _QWORD v3[5]; // [rsp+38h] [rbp-30h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  v3[0] = 0LL;
  v3[1] = 0LL;
  LODWORD(v3[2]) = 2;
  *(_OWORD *)&v3[3] = 0LL;
  return ZwCreateEvent();
}
