/*
 * XREFs of ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C012748C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C011EEA8 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 * Callees:
 *     ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01225C4 (-NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z.c)
 */

__int64 __fastcall CTouchProcessor::ShouldGenerateMessagesForNode(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  unsigned int v3; // r10d
  CTouchProcessor *v4; // rcx

  v3 = 0;
  if ( *((_QWORD *)a3 + 2) )
  {
    v4 = (CTouchProcessor *)*(unsigned int *)(240LL * *((unsigned int *)a3 + 2) + *((_QWORD *)a2 + 13) + 220);
    if ( ((unsigned __int8)v4 & 4) == 0 )
      return (unsigned int)CTouchProcessor::NodeMatchesMTGeneration(v4, a3) != 0;
  }
  return v3;
}
