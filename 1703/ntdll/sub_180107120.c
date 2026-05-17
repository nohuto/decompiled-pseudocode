/*
 * XREFs of sub_180107120 @ 0x180107120
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_180107120(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 0x40 )
    return 3221225507LL;
  *a2 = 64LL;
  return ZwQueryInformationProcess();
}
