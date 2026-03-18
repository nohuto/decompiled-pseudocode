/*
 * XREFs of PpmIdleUpdatePlatformDependencies @ 0x14070C698
 * Callers:
 *     PpmInstallPlatformIdleStates @ 0x1406F62E0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdatePlatformDependencies(__int64 a1)
{
  __int64 v1; // r9
  bool i; // dl
  __int64 v3; // r11
  __int64 result; // rax

  if ( (((unsigned int)HvlpFlags >> 1) & 1) != 0 && (HvlEnlightenments & 0x400) != 0
    || (((unsigned int)HvlpFlags >> 1) & 1) == 0 && HvlHypervisorConnected )
  {
    v1 = 0LL;
    for ( i = (HvlEnlightenments & 0x200) != 0; (unsigned int)v1 < *(_DWORD *)(a1 + 8); v1 = (unsigned int)(v1 + 1) )
    {
      v3 = 0LL;
      for ( *(_BYTE *)(a1 + 48 * v1 + 61) = i;
            (unsigned int)v3 < *(_DWORD *)(a1 + 48 * v1 + 72);
            v3 = (unsigned int)(v3 + 1) )
      {
        result = *(_QWORD *)(a1 + 48 * v1 + 96);
        *(_BYTE *)(result + 8 * v3 + 4) = i;
      }
    }
  }
  return result;
}
