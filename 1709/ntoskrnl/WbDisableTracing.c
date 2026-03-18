/*
 * XREFs of WbDisableTracing @ 0x14050264C
 * Callers:
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 * Callees:
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall WbDisableTracing(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // rax
  __int16 v5; // ax
  __int16 ProcessMachine; // ax

  v1 = 0;
  v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v3 && ((v5 = *(_WORD *)(v3 + 8), v5 == 332) || v5 == 452) )
  {
    ProcessMachine = PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( ProcessMachine == 332 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x100u;
    }
    else if ( ProcessMachine != 452 )
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) &= ~0x100u;
  }
  return v1;
}
