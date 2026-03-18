/*
 * XREFs of MmDeterminePoolType @ 0x140260468
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140831580 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x140837DBC (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14000A140 (MiDeterminePoolType.c)
 */

__int64 __fastcall MmDeterminePoolType(__int64 a1)
{
  __int64 result; // rax

  result = MiDeterminePoolType(a1);
  if ( (_DWORD)result == 32 )
    return 0LL;
  return result;
}
