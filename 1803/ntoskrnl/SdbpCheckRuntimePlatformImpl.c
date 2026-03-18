/*
 * XREFs of SdbpCheckRuntimePlatformImpl @ 0x1407D68E8
 * Callers:
 *     SdbpCheckRuntimePlatform @ 0x1407D6890 (SdbpCheckRuntimePlatform.c)
 * Callees:
 *     SdbpCheckRuntimePlatformV2Impl @ 0x1407D6920 (SdbpCheckRuntimePlatformV2Impl.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatformImpl(_DWORD *a1, char a2, unsigned int a3, unsigned int a4)
{
  if ( (a2 & 2) != 0 )
    return SdbpCheckRuntimePlatformV2Impl(a1, a3, a4);
  *a1 = (a3 & a4) != 0;
  return 1LL;
}
