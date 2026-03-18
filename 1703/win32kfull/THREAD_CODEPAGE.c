/*
 * XREFs of THREAD_CODEPAGE @ 0x1C01FF2F0
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C011745C (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C01F9180 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C02393E4 (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE()
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 152LL);
}
