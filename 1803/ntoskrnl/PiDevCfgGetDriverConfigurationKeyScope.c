/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x14023BCF8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405DA154 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  const wchar_t **i; // rsi

  v1 = 0;
  v2 = 0;
  for ( i = (const wchar_t **)&off_1407FA350; wcsicmp(*i, Str2); i += 2 )
  {
    if ( ++v2 >= 6 )
      return v1;
  }
  return *((unsigned int *)&off_1407FA350 + 4 * v2 + 2);
}
