/*
 * XREFs of RmGetNotification @ 0x18000C670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180003CA8 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z @ 0x18000C558 (-RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmGetNotification(__int64 a1, struct RmExternalResourceNotification *a2)
{
  CLIENT_CALL_RETURN result; // rax
  ResourceManagerProxy *v5; // rcx
  struct ResourceManagerProxy *v6; // [rsp+40h] [rbp+18h] BYREF

  result.Simple = GetResourceManagerProxy(&v6);
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = ResourceManagerProxy::RmGetNotification(v5, a1, a2).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
