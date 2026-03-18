/*
 * XREFs of KeEnterKernelDebugger @ 0x1401FFCA0
 * Callers:
 *     <none>
 * Callees:
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
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
    v0 = (unsigned int)_InterlockedExchange(&dword_14038C35C, 1);
    if ( !(_DWORD)v0 )
      KdInitSystem(v0, 0LL);
  }
  return KiBugCheckDebugBreak(5u);
}
