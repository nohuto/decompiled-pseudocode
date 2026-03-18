/*
 * XREFs of ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18012CA58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x18002F068 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016D30C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016DBC4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScaleAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // edx
  CBaseExpression *Resource; // rbp
  int v9; // ecx

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (CBaseExpression *)CResourceTable::GetResource((__int64)a2, v5, 0x6Eu)) != 0LL )
  {
    *((_BYTE *)this + 592) = *((_BYTE *)this + 592) & 0xEF | (*((_DWORD *)a3 + 3) == 0 ? 0x10 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, Resource, 1LL) )
    {
      v9 = *((_DWORD *)a3 + 7);
      if ( *((_DWORD *)this + 37) > v9 )
        v9 = *((_DWORD *)this + 37);
      *((_DWORD *)this + 37) = v9;
    }
    else if ( Resource )
    {
      CBaseExpression::NotifyAnimationCompleted(Resource);
      CResource::UnRegisterNotifierInternal(this, Resource);
      if ( *((_DWORD *)a3 + 3) )
        CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 7));
    }
    *((_DWORD *)this + 31) = *((_DWORD *)a3 + 4) ^ _xmm;
    *((_DWORD *)this + 32) = *((_DWORD *)a3 + 5) ^ _xmm;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x225u);
  }
  *((_BYTE *)this + 592) &= ~0x10u;
  return v3;
}
