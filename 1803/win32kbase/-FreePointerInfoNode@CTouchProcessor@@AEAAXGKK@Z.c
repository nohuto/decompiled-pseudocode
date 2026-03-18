/*
 * XREFs of ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01121B4
 * Callers:
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DFA0 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C011E3A0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011155C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0111D24 (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C0112298 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoNode(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rbp
  struct CPointerInputFrame *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct CPointerInputFrame *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v6 = a4;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v7 = CTouchProcessor::FindAndReferenceFrameById(this, a3);
  v10 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)v7 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    v11 = *((_QWORD *)v10 + 12) + 576 * v6;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    if ( (*(_DWORD *)v11 & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    if ( CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v11) > 1 )
      CTouchProcessor::FreeHistory(this, v10, (const struct CPointerInfoNode *)v11);
    CInputDest::SetEmpty((CInputDest *)(v11 + 24));
    CInputDest::SetEmpty((CInputDest *)(v11 + 392));
    CTouchProcessor::FreePointerInfoNodeInt((CTouchProcessor *)this, v10, v6);
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v10);
  }
}
