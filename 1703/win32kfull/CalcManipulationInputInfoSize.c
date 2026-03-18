/*
 * XREFs of CalcManipulationInputInfoSize @ 0x1C01C9A8C
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     EditionBuildManipulationInputInfo @ 0x1C01C9CA0 (EditionBuildManipulationInputInfo.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020A28C (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcManipulationInputInfoSize(int a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // eax

  if ( a1 && (v1 = 144LL * (unsigned int)(a1 - 1), v1 <= 0xFFFFFFFF) && (v2 = v1 + 160, v2 >= 0xA0) )
    return v2;
  else
    return 0;
}
