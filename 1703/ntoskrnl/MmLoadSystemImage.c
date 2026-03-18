/*
 * XREFs of MmLoadSystemImage @ 0x1406B5F20
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x1401F0E20 (IoLoadCrashDumpDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmLoadSystemImage(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, unsigned __int64 *a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, a4, a5, a6);
}
