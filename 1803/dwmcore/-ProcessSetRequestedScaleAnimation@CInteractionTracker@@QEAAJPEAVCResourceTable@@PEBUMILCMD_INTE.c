/*
 * XREFs of ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x180195348
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003B470 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180194A5C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180195F9C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScaleAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // edx
  CBaseExpression *Resource; // rbp
  int v9; // eax

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (CBaseExpression *)CResourceTable::GetResource((__int64)a2, v5, 0xAu)) != 0LL )
  {
    *((_BYTE *)this + 676) = *((_BYTE *)this + 676) & 0xBF | (*((_DWORD *)a3 + 3) == 0 ? 0x40 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, Resource, 1LL) )
    {
      v9 = *((_DWORD *)this + 40);
      if ( v9 <= *((_DWORD *)a3 + 7) )
        v9 = *((_DWORD *)a3 + 7);
      *((_DWORD *)this + 40) = v9;
    }
    else if ( Resource )
    {
      CBaseExpression::NotifyAnimationCompleted(Resource);
      CResource::UnRegisterNotifierInternal(this, Resource);
      if ( *((_DWORD *)a3 + 3) )
        CInteractionTracker::NotifyRequestIgnored(this);
    }
    *((_DWORD *)this + 31) = *((_DWORD *)a3 + 4) ^ _xmm;
    *((_DWORD *)this + 32) = *((_DWORD *)a3 + 5) ^ _xmm;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1F1u);
  }
  *((_BYTE *)this + 676) &= ~0x40u;
  return v3;
}
