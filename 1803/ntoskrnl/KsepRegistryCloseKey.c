/*
 * XREFs of KsepRegistryCloseKey @ 0x140623728
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x1408A5780 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1408A59C0 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(&dword_1403AD33C);
  }
  return result;
}
