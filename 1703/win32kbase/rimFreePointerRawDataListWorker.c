/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C010EA78
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00885AC (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C010ECB8 (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall rimFreePointerRawDataListWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = *(_QWORD *)(v1 + 16);
      Win32FreePool(*(_QWORD *)(v2 + 8));
      result = Win32FreePool(v2);
    }
    while ( v1 );
  }
  return result;
}
