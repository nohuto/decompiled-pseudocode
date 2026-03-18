/*
 * XREFs of KsepRegistryCloseKey @ 0x1405C53B0
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x14083F264 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x14083F4A4 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_14036A25C);
  }
  return result;
}
