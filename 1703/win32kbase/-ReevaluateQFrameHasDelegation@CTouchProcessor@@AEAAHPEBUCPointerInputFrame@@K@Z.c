/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01258A8
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0127518 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C0122890 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebx
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  v7 = *((_QWORD *)a2 + 13) + 240LL * a3;
  v8 = 0;
  do
  {
    if ( v8 >= v3 )
      break;
    v9 = 608LL * v8;
    v10 = *((_QWORD *)a2 + 12);
    if ( *(_DWORD *)(v10 + v9 + 8) == a3
      && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated((CPointerInfoNode *)(v10 + v9)) )
    {
      v4 = 1;
    }
    ++v8;
  }
  while ( !v4 );
  result = v4;
  *(_DWORD *)(v7 + 220) ^= (*(_DWORD *)(v7 + 220) ^ (8 * v4)) & 8;
  return result;
}
