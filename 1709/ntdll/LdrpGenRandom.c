/*
 * XREFs of LdrpGenRandom @ 0x180022BB8
 * Callers:
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800D2800 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 LdrpGenRandom()
{
  int v0; // ecx

  if ( !MEMORY[0x7FFE0290] )
    return 0LL;
  v0 = 0;
  while ( 1 )
  {
    __asm { rdrand  r8 }
    if ( _CF )
      break;
    if ( (unsigned int)++v0 >= 0xA )
      return 0LL;
  }
  return _R8;
}
