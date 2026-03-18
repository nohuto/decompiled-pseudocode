/*
 * XREFs of ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011EB94
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011C7A4 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011E74C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::FreePointerQFrameList(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        unsigned int a3)
{
  CInputDest *v4; // rbx
  __int64 v5; // rsi

  if ( a3 )
  {
    v4 = (struct CPointerQFrame *)((char *)a2 + 16);
    v5 = a3;
    do
    {
      CInputDest::SetEmpty(v4);
      v4 = (CInputDest *)((char *)v4 + 240);
      --v5;
    }
    while ( v5 );
  }
  Win32FreePool((__int64)a2);
}
