/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x1406CA6F4
 * Callers:
 *     PipProcessStartPhase1 @ 0x140553C10 (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
