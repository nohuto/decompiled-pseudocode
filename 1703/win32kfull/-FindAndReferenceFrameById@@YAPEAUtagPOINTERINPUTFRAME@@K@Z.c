/*
 * XREFs of ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019915C
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall FindAndReferenceFrameById(unsigned int a1)
{
  struct tagPOINTERINPUTFRAME *result; // rax

  result = FindFrameById(a1);
  if ( result )
    _InterlockedIncrement((volatile signed __int32 *)result + 9);
  return result;
}
