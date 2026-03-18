/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x140484DF8
 * Callers:
 *     PiDmGetCmObjectListFromCache @ 0x14044F10C (PiDmGetCmObjectListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1404846C8 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140484D1C (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaiseCreateEvent @ 0x140596434 (_CmRaiseCreateEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x1405C220C (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseDeleteEvent @ 0x14073E840 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x140741A60 (_PnpCmMatchCallbackRoutine.c)
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
