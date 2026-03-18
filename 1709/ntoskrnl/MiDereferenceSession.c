/*
 * XREFs of MiDereferenceSession @ 0x14058B274
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 * Callees:
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 */

__int64 MiDereferenceSession()
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)Process[1].ActiveProcessors.Bitmap[2],
                           0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = MiDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
  return result;
}
