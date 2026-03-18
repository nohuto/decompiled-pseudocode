/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011A9EC
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C011CA0C (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01170F0 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  __int64 v8; // rsi
  CPointerInfoNode *v9; // rcx
  __int64 result; // rax

  v4 = 0;
  v6 = (_DWORD *)(*((_QWORD *)a2 + 13) + 224LL * a3);
  if ( *v6 != a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0LL;
  do
  {
    if ( (unsigned int)v8 >= v7 )
      break;
    v9 = (CPointerInfoNode *)(*((_QWORD *)a2 + 12) + 576 * v8);
    if ( *((_DWORD *)v9 + 2) == a3 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v9) )
      v4 = 1;
    v8 = (unsigned int)(v8 + 1);
  }
  while ( !v4 );
  result = v4;
  v6[51] ^= (v6[51] ^ (8 * v4)) & 8;
  return result;
}
