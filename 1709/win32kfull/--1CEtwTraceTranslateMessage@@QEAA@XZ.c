/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C0052854
 * Callers:
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(CEtwTraceTranslateMessage *this)
{
  __int64 v2; // rcx

  LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1196);
  EtwTraceEndTranslateMessage(v2, *(unsigned int *)this);
}
