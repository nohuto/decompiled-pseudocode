/*
 * XREFs of THREAD_CODEPAGE @ 0x1C0200CC8
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C0121148 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C01FABA0 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C023AA3C (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 456)
                             + 152LL);
}
