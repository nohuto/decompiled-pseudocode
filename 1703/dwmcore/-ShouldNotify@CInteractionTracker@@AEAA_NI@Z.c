/*
 * XREFs of ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18016E874
 * Callers:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016D30C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D67C (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M@Z @ 0x18016DAA4 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

unsigned __int8 __fastcall CInteractionTracker::ShouldNotify(CInteractionTracker *this)
{
  char ShouldNotify; // al
  __int64 v2; // rcx
  unsigned int v3; // r9d
  char v4; // r8
  int v5; // eax

  ShouldNotify = CNotificationResource::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_DWORD *)(v2 + 144);
    return _bittest(&v5, v3);
  }
  return v4;
}
