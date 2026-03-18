/*
 * XREFs of KeInitAmd64SpecificState @ 0x1408B7B30
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1408B556C (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KiFilterFiberContext @ 0x14087CBB0 (KiFilterFiberContext.c)
 */

__int64 KeInitAmd64SpecificState()
{
  __int64 result; // rax

  if ( !InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
