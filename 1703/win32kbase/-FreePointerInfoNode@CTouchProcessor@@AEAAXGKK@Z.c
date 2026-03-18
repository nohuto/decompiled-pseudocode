/*
 * XREFs of ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011EAAC
 * Callers:
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01282EC (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0128610 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011E828 (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011EB44 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoNode(CTouchProcessor *this, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbp
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v7; // rbx
  _DWORD *v8; // rdi
  CTouchProcessor *v9; // rcx

  v4 = a4;
  FrameById = CTouchProcessor::FindFrameById(this, a3);
  v7 = FrameById;
  if ( FrameById )
  {
    _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
    v8 = (_DWORD *)(*((_QWORD *)FrameById + 12) + 608 * v4);
    if ( v8[79] > 1u )
      CTouchProcessor::FreeHistory(
        this,
        FrameById,
        (const struct CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 608 * v4));
    CInputDest::SetEmpty((CInputDest *)(v8 + 6));
    CInputDest::SetEmpty((CInputDest *)(v8 + 102));
    CTouchProcessor::FreePointerInfoNodeInt(v9, v7, v4);
    CTouchProcessor::UnreferenceFrameInt(this, v7);
  }
}
