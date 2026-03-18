/*
 * XREFs of ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C00A1650
 * Callers:
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage(CEtwTraceDispatchMessage *this)
{
  __int64 v2; // rcx

  LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1196);
  EtwTraceEndDispatchMessage(v2, *(unsigned int *)this);
}
