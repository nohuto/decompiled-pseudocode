/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01282EC
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C011D6E0 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011EAAC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011EB44 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01220C0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  CPointerInfoNode *v4; // rdi
  unsigned int v5; // ebp
  const struct CPointerInputFrame *v6; // rbx
  CTouchProcessor *v7; // r14
  _DWORD *v8; // rsi
  PVOID CurrentProcess; // rax
  int v10; // r15d
  __int64 *PrevMsgId; // rax

  v4 = (CPointerInfoNode *)*((_QWORD *)a2 + 12);
  v5 = 0;
  v6 = a2;
  v7 = this;
  if ( *((_DWORD *)a2 + 12) )
  {
    v8 = (_DWORD *)((char *)v4 + 260);
    do
    {
      if ( (*((_DWORD *)v6 + 20) & 1) != 0 )
      {
        if ( (*(_DWORD *)v4 & 0x2000) == 0 )
          CTouchProcessor::FreePointerInfoNodeInt(this, v6, v5);
      }
      else
      {
        CurrentProcess = (PVOID)PsGetCurrentProcess(this, a2, a3, a4);
        if ( !CurrentProcess
          || CurrentProcess != g_pepDwm
          || !CPointerInfoNode::IsForManipulationThread(v4) && (*(v8 - 64) & 0x200) == 0 )
        {
          a2 = *(const struct CPointerInputFrame **)(v8 - 61);
          if ( !a2
            || (this = (CTouchProcessor *)*(unsigned int *)(240LL * (unsigned int)*(v8 - 63) + *((_QWORD *)v6 + 13) + 220),
                ((unsigned __int8)this & 4) != 0) )
          {
            if ( (unsigned int)CPointerInfoNode::IsValid(v4) )
              CTouchProcessor::FreePointerInfoNode(v7, (__int64)a2, *((_DWORD *)v6 + 10), v5);
          }
          else
          {
            v10 = *v8 & 2;
            if ( (*v8 & 1) == 0 )
            {
              PrevMsgId = CTouchProcessor::GetPrevMsgId(this, (__int64 *)a2);
              if ( PrevMsgId )
              {
                this = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
                if ( ((unsigned __int8)this & 0x20) != 0 )
                  CTouchProcessor::UnreferenceMsgData(v7, PrevMsgId, 1LL);
              }
            }
            if ( !v10 )
              CTouchProcessor::UnreferenceMsgData(v7, *(_QWORD *)(v8 - 61), 1LL);
          }
        }
      }
      ++v5;
      v4 = (CPointerInfoNode *)((char *)v4 + 608);
      v8 += 152;
    }
    while ( v5 < *((_DWORD *)v6 + 12) );
  }
  CTouchProcessor::UnreferenceFrameInt(v7, v6);
}
