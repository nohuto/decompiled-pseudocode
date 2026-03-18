/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x140522F88
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x140521514 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140522B4C (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x140551F84 (_CmRaisePropertyChangeEvent.c)
 *     PiDmGetCmObjectListFromCache @ 0x140590270 (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseCreateEvent @ 0x1405D79EC (_CmRaiseCreateEvent.c)
 *     _CmRaiseDeleteEvent @ 0x140782CF0 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x1407859D0 (_PnpCmMatchCallbackRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapCmObjectTypeToPnpObjectType(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  if ( v5 == 1 )
    return 5LL;
  return 0LL;
}
