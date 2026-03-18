/*
 * XREFs of MmLoadSystemImage @ 0x1406E22A0
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x1401F6720 (IoLoadCrashDumpDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(__int64 a1, const UNICODE_STRING *a2, __int64 a3, int a4, _QWORD *a5, char **a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, a4, a5, a6);
}
