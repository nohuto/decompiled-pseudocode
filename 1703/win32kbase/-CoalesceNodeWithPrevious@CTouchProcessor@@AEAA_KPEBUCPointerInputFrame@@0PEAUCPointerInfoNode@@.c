/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C011BD68
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011BE70 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0128010 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     EtwTracePointerCoalesce @ 0x1C00DA1C0 (EtwTracePointerCoalesce.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E704 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125BB8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        int a6)
{
  struct CPointerInfoNode *ValidNodeInFrame; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a3, *((_WORD *)a4 + 126), &v16);
  v10 = *((_QWORD *)a4 + 2);
  v11 = *((_QWORD *)ValidNodeInFrame + 2);
  *(_DWORD *)(v11 + 28) = *((_DWORD *)a2 + 10);
  *(_DWORD *)(v11 + 32) = a5;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 36) & 0x20) != 0 )
    {
      CTouchProcessor::ReferenceMsgData(this, v11, 1LL);
      CTouchProcessor::UnreferenceMsgData(this, v10, 1LL);
    }
    *(_DWORD *)(v10 + 36) |= 0x10u;
  }
  v12 = a6;
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  *((_DWORD *)a4 + 79) = *((_DWORD *)ValidNodeInFrame + 79) + 1;
  *((_DWORD *)a4 + 100) = v16;
  if ( !v12 )
  {
    *(_DWORD *)a4 |= 0x80000u;
    v13 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *(_DWORD *)ValidNodeInFrame) & 0x100000;
    *(_DWORD *)a4 = v13;
    v14 = v13 ^ (v13 ^ *(_DWORD *)ValidNodeInFrame) & 0x200000;
    *(_DWORD *)a4 = v14;
    *(_DWORD *)a4 = v14 ^ (v14 ^ *(_DWORD *)ValidNodeInFrame) & 0x400000;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 120), *((_WORD *)a4 + 126), v12);
  return *((_QWORD *)a4 + 2);
}
