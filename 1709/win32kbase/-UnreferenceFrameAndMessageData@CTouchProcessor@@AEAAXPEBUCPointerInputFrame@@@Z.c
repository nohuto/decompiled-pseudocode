/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0127B38
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C011C530 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011D950 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011D9E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0121690 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127CB4 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  const struct CPointerInputFrame *v4; // rdi
  CTouchProcessor *i; // rbp
  PVOID CurrentProcess; // rax
  int v7; // r14d
  __int64 *PrevMsgId; // rax

  v2 = *((_QWORD *)a2 + 12);
  v3 = 0;
  v4 = a2;
  for ( i = this; v3 < *((_DWORD *)v4 + 12); v2 += 608LL )
  {
    if ( (*((_DWORD *)v4 + 20) & 1) != 0 )
    {
      if ( (*(_DWORD *)v2 & 0x2000) == 0 )
        CTouchProcessor::FreePointerInfoNodeInt(this, v4, v3);
    }
    else
    {
      CurrentProcess = (PVOID)PsGetCurrentProcess(this, a2);
      if ( !CurrentProcess
        || CurrentProcess != g_pepDwm
        || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v2) && (*(_DWORD *)(v2 + 4) & 0x200) == 0 )
      {
        a2 = *(const struct CPointerInputFrame **)(v2 + 16);
        if ( !a2
          || (this = (CTouchProcessor *)*(unsigned int *)(240LL * *(unsigned int *)(v2 + 8) + *((_QWORD *)v4 + 13) + 220),
              ((unsigned __int8)this & 4) != 0) )
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v2) )
            CTouchProcessor::FreePointerInfoNode(i, (__int64)a2, *((_DWORD *)v4 + 10), v3);
        }
        else
        {
          v7 = *(_DWORD *)(v2 + 260) & 2;
          if ( (*(_DWORD *)(v2 + 260) & 1) == 0 )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(this, (__int64 *)a2);
            if ( PrevMsgId )
            {
              this = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
              if ( ((unsigned __int8)this & 0x20) != 0 )
                CTouchProcessor::UnreferenceMsgData(i, PrevMsgId, 1LL);
            }
          }
          if ( !v7 )
            CTouchProcessor::UnreferenceMsgData(i, *(_QWORD *)(v2 + 16), 1LL);
        }
      }
    }
    ++v3;
  }
  CTouchProcessor::UnreferenceFrameInt(i, v4);
}
