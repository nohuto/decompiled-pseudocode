/*
 * XREFs of FreePointerRawDataList @ 0x1C01A6828
 * Callers:
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A4A90 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     AbandonHoldingFrame @ 0x1C01A62D0 (AbandonHoldingFrame.c)
 *     FreeTPFrame @ 0x1C01A686C (FreeTPFrame.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01ADA40 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreePointerRawDataList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 result; // rax

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 24);
      Win32FreePool(*(_QWORD *)(v4 + 16), a2, a3);
      result = Win32FreePool(v4, v5, v6);
    }
    while ( v3 );
  }
  return result;
}
