/*
 * XREFs of FreePointerRawDataList @ 0x1C019ABBC
 * Callers:
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0198F30 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     FreeTPFrame @ 0x1C01992F8 (FreeTPFrame.c)
 *     AbandonHoldingFrame @ 0x1C019A6A4 (AbandonHoldingFrame.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01AA710 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreePointerRawDataList(__int64 a1)
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
      v1 = *(_QWORD *)(v1 + 24);
      Win32FreePool(*(_QWORD *)(v2 + 16));
      result = Win32FreePool(v2);
    }
    while ( v1 );
  }
  return result;
}
