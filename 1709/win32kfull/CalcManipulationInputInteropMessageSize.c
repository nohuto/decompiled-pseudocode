/*
 * XREFs of CalcManipulationInputInteropMessageSize @ 0x1C01CDDE0
 * Callers:
 *     EditionBuildManipulationInputInteropInfoMessage @ 0x1C01CE010 (EditionBuildManipulationInputInteropInfoMessage.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020D430 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcManipulationInputInteropMessageSize(int a1)
{
  unsigned __int64 v1; // rax

  if ( a1 && (v1 = 208LL * (unsigned int)(a1 - 1), v1 <= 0xFFFFFFFF) && (unsigned int)(v1 + 232) >= 0xE8 )
    return (unsigned int)(v1 + 232);
  else
    return 0;
}
