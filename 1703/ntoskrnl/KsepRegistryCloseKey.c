/*
 * XREFs of KsepRegistryCloseKey @ 0x14059CF08
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x1407F7CD4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1407FA3CC (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_14034F7FC);
  }
  return result;
}
