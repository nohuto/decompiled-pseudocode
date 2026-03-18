/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FBA0
 * Callers:
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18005057C (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18014B010 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18004D170 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004D638 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004D6CC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004D6FC (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004F9E8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CComposition **this, CComposition ***a2, unsigned int a3, char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  CComposition **v9; // rcx
  char v10; // cl
  int v11; // r8d
  int v12; // edx
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( a2[10] == this )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2B6u);
  }
  else
  {
    v7 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(this + 9), (unsigned __int64)a2, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v14 = 697;
      goto LABEL_15;
    }
    ((void (__fastcall *)(CComposition ***))(*a2)[1])(a2);
    v9 = a2[10];
    if ( v9 )
    {
      v7 = CVisual::RemoveChild(v9, (struct CVisual *)a2, 0);
      v8 = v7;
      if ( v7 < 0 )
      {
        v14 = 705;
LABEL_15:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v14);
        return v8;
      }
    }
    a2[10] = this;
    CVisual::OnOuterTransformChanged((CVisual *)a2);
    CVisual::OnClipChanged((CVisual *)a2);
    CVisual::PropagateFlags(this, 1LL);
    CVisual::PropagateFlags(a2, 4LL);
    v10 = *((_BYTE *)a2 + 264);
    v11 = *((_DWORD *)a2 + 65) + 1;
    if ( (v10 & 2) == 0 )
      v11 = *((_DWORD *)a2 + 65);
    v12 = *((_DWORD *)a2 + 64) + 1;
    if ( (v10 & 1) == 0 )
      v12 = *((_DWORD *)a2 + 64);
    CVisual::PropagateBackdropUpdates((CVisual *)this, v12, v11);
    if ( !a4 )
      CVisual::NotifyMidManipulationUpdate((__int64)this, 2u, (__int64)a2);
  }
  return v8;
}
