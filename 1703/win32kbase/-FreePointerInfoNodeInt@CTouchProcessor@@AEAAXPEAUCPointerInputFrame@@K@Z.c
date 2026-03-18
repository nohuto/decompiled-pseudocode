/*
 * XREFs of ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011EB44
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C006DF90 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011E828 (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011EAAC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0128010 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01282EC (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoNodeInt(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rbx

  v4 = *((_QWORD *)a2 + 12) + 608LL * a3;
  CInputDest::SetEmpty((CInputDest *)(v4 + 408));
  CInputDest::SetEmpty((CInputDest *)(v4 + 24));
  *(_DWORD *)v4 |= 0x2000u;
  *(_QWORD *)(v4 + 16) = 0LL;
  ++*((_DWORD *)a2 + 13);
}
