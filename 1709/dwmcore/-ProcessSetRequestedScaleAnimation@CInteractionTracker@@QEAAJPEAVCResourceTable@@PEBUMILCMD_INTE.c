/*
 * XREFs of ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18016CF88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A1CD0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016C2A8 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016DD60 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
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
  if ( !v5 || (Resource = (CBaseExpression *)CResourceTable::GetResource((__int64)a2, v5, 0xAu)) != 0LL )
  {
    *((_BYTE *)this + 620) = *((_BYTE *)this + 620) & 0xBF | (*((_DWORD *)a3 + 3) == 0 ? 0x40 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, Resource, 1LL) )
    {
      v9 = *((_DWORD *)a3 + 7);
      if ( *((_DWORD *)this + 40) > v9 )
        v9 = *((_DWORD *)this + 40);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x22Du);
  }
  *((_BYTE *)this + 620) &= ~0x40u;
  return v3;
}
