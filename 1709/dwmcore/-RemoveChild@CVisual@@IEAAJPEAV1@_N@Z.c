/*
 * XREFs of ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800514F0 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180051668 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180129880 (-RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18004F1F0 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800513D4 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B23D8 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180176DBC (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::RemoveChild(CComposition **this, struct CVisual *a2, char a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
  char v9; // al
  int v10; // edx
  int v11; // r8d
  unsigned int (__fastcall *v12)(CVisual *__hidden); // rax
  struct CManipulationManager *v14[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( CPtrArrayBase::Remove((CPtrArrayBase *)(this + 9), (unsigned __int64)a2) )
  {
    v7 = 17;
    if ( ((_BYTE)this[11] & 4) == 0 )
    {
      if ( !*((_DWORD *)a2 + 25) || *((float *)a2 + 40) == 0.0 && *((float *)a2 + 39) == 0.0 )
      {
        *(_OWORD *)v14 = *(_OWORD *)((char *)a2 + 140);
        v8 = CVisual::AddAdditionalDirtyRects((CVisual *)this, (const struct MilRectF *)v14);
        v6 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2F2u);
          return v6;
        }
      }
      else
      {
        v7 = 21;
      }
    }
    if ( qword_18026EEA8 && CDisplaySet::NeedsDesktopMoves(qword_18026EEA8) )
      CVisual::ClearAllMoveTransformsInSubtree(a2);
    if ( !a3 && (*((_BYTE *)a2 + 93) & 4) != 0 )
    {
      v14[0] = 0LL;
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(v14);
      if ( (int)CComposition::GetManipulationManager(this[2], v14) >= 0 )
        CManipulationManager::QueueMidManipulationUpdate(v14[0], 3LL, a2);
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(v14);
    }
    *((_QWORD *)a2 + 10) = 0LL;
    v9 = *((_BYTE *)a2 + 256);
    v10 = *((_DWORD *)a2 + 62);
    v11 = *((_DWORD *)a2 + 63);
    if ( (v9 & 1) != 0 )
      ++v10;
    if ( (v9 & 2) != 0 )
      ++v11;
    CVisual::PropagateBackdropUpdates((CVisual *)this, -v10, -v11);
    v12 = *(unsigned int (__fastcall **)(CVisual *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v12 == CVisual::Release )
      CVisual::Release(a2);
    else
      v12(a2);
    CVisual::PropagateFlags(this, v7, 0LL);
  }
  return v6;
}
