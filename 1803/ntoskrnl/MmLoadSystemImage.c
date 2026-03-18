/*
 * XREFs of MmLoadSystemImage @ 0x14074CEE0
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x140233A70 (IoLoadCrashDumpDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, char **a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, a4, a5, a6);
}
