/*
 * XREFs of ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037568
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180037760 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180007384 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180007524 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001307C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036CBC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008FD54 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate2DVisual(struct tagPOINT ***this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  LONG v9; // eax
  float v10; // xmm0_4
  LONG v11; // eax
  struct tagPOINT **v12; // rcx
  int v13; // eax
  int v14; // eax
  int updated; // eax
  struct tagPOINT v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( ((_DWORD)this[11] & 0x1000) != 0 || ((_DWORD)this[11] & 0x2000) != 0 || ((_BYTE)this[11] & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 986) )
    {
      v14 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)(this + 1));
      v1 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x40Du);
        return v1;
      }
      updated = CAnimatedTransitionVisual::UpdateGeometry2DWithClip((CAnimatedTransitionVisual *)this);
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x40Eu);
        return v1;
      }
    }
    else if ( *((_BYTE *)this + 987) )
    {
      v5 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)(this + 1));
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x412u);
        return v1;
      }
      v6 = CAnimatedTransitionVisual::UpdateBackgroundWithClip((CAnimatedTransitionVisual *)this);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x413u);
        return v1;
      }
      v7 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)this);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x414u);
        return v1;
      }
    }
    else if ( *((_BYTE *)this + 975) )
    {
      v9 = RoundToNearestInt((float)*((int *)this + 214) + *((float *)this + 188));
      v10 = (float)*((int *)this + 215);
      v16.x = v9;
      v11 = RoundToNearestInt(v10 + *((float *)this + 189));
      v12 = this[7];
      v16.y = v11;
      CVisual::SetOffset(*v12, &v16);
      v13 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)this);
      v1 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x419u);
        return v1;
      }
    }
    else
    {
      v3 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)(this + 1));
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x41Du);
        return v1;
      }
      v4 = CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity((CAnimatedTransitionVisual *)this);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x41Eu);
        return v1;
      }
    }
    *((_DWORD *)this + 22) &= 0xFFFFCFDF;
  }
  return v1;
}
