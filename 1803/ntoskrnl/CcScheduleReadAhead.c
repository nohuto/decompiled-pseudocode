/*
 * XREFs of CcScheduleReadAhead @ 0x1402203D0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
}
