/*
 * XREFs of ?GetEndpoint@DWMNullInputTarget@@UEBA_KXZ @ 0x18000B160
 * Callers:
 *     ?DeliverInput@DWMLegacyInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x1800229A0 (-DeliverInput@DWMLegacyInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMLegacyInputTarget@@WBA@EAAJPEAUInputInfo@@@Z @ 0x180022BB0 (-DeliverInput@DWMLegacyInputTarget@@WBA@EAAJPEAUInputInfo@@@Z.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800CA370 (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DWMNullInputTarget::GetEndpoint(DWMNullInputTarget *this)
{
  return 0LL;
}
