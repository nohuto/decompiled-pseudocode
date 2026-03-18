/*
 * XREFs of MiDereferenceSession @ 0x140577AC4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 * Callees:
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
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
