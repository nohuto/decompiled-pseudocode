/*
 * XREFs of RtlSetActiveConsoleId @ 0x140586320
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 */

unsigned __int64 __fastcall RtlSetActiveConsoleId(unsigned int a1)
{
  unsigned __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = (unsigned __int64)PsGetCurrentServerSiloGlobals();
    *(_DWORD *)(*(_QWORD *)(result + 1072) + 4LL) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF780000002D8] = a1;
  }
  return result;
}
