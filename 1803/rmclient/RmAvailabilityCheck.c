/*
 * XREFs of RmAvailabilityCheck @ 0x18000C5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180003CA8 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmAvailabilityCheck@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK@Z @ 0x18000C4E4 (-RmAvailabilityCheck@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmAvailabilityCheck(int a1, struct RmResourceInfo *a2, int a3, unsigned int a4)
{
  CLIENT_CALL_RETURN result; // rax
  ResourceManagerProxy *v9; // [rsp+30h] [rbp-18h] BYREF

  result.Simple = GetResourceManagerProxy(&v9);
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = ResourceManagerProxy::RmAvailabilityCheck(v9, a1, a2, a3, a4).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
