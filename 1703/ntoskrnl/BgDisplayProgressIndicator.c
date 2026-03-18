/*
 * XREFs of BgDisplayProgressIndicator @ 0x14075777C
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14040749C (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140758A14 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140341A30 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayProgressIndicator(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
