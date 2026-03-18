/*
 * XREFs of KeEnterKernelDebugger @ 0x140206120
 * Callers:
 *     <none>
 * Callees:
 *     KiBugCheckDebugBreak @ 0x140206350 (KiBugCheckDebugBreak.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 */

__int64 KeEnterKernelDebugger()
{
  __int64 v0; // rcx

  KiHardwareTrigger = 1;
  _disable();
  KeGetCurrentIrql();
  __writecr8((unsigned int)(KiHardwareTrigger + 14));
  if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
  {
    v0 = (unsigned int)_InterlockedExchange(&dword_1403A7F58, 1);
    if ( !(_DWORD)v0 )
      KdInitSystem(v0, 0LL);
  }
  return KiBugCheckDebugBreak(5u);
}
