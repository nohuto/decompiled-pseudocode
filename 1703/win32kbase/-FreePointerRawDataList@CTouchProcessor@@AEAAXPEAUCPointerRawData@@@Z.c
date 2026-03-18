/*
 * XREFs of ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C011EBE4
 * Callers:
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C011C9AC (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011E74C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::FreePointerRawDataList(CTouchProcessor *this, struct CPointerRawData *a2)
{
  struct CPointerRawData *v2; // rdi
  __int64 v3; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (__int64)v2;
      v2 = (struct CPointerRawData *)*((_QWORD *)v2 + 3);
      Win32FreePool(*(_QWORD *)(v3 + 16));
      Win32FreePool(v3);
    }
    while ( v2 );
  }
}
