/*
 * XREFs of DereferencePointerInputFrame @ 0x1C01A6600
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall DereferencePointerInputFrame(struct tagPOINTERINPUTFRAME *a1)
{
  return UnreferenceFrameInt(a1);
}
