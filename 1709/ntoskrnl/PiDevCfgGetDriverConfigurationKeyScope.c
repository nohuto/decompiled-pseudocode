/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x1401FF2C8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_14078DD50; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 6 )
      return v1;
  }
  return *((unsigned int *)&off_14078DD50 + 4 * v2 + 2);
}
