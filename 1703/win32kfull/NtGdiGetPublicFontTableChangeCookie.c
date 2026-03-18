/*
 * XREFs of NtGdiGetPublicFontTableChangeCookie @ 0x1C0101910
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 NtGdiGetPublicFontTableChangeCookie()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !ghsemPublicPFT || !gpPFTPublic )
    return 0LL;
  v2 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v0 = *((_DWORD *)gpPFTPublic + 8);
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
  return v0;
}
