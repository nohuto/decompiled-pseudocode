/*
 * XREFs of ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180085CD4 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180085DA0 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180140400 (-RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800853C0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BBD9C (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800CF668 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18018AF70 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::RemoveChild(CComposition **this, struct CVisual *a2, char a3)
{
  unsigned int v3; // edi
  char v4; // r14
  int v8; // eax
  CMILRefCountBase *v9; // rcx
  unsigned int (__fastcall *v10)(CVisual *__hidden); // rax
  struct CManipulationManager *v12[2]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  if ( ((_BYTE)this[11] & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 24) || *((float *)a2 + 39) == 0.0 && *((float *)a2 + 38) == 0.0 )
    {
      *(_OWORD *)v12 = *(_OWORD *)((char *)a2 + 136);
      v8 = CVisual::AddAdditionalDirtyRects((CVisual *)this, (const struct MilRectF *)v12);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x32Bu);
        return v3;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  if ( CPtrArrayBase::Remove((CPtrArrayBase *)(this + 9), (unsigned __int64)a2) )
  {
    if ( qword_18023E528 && CDisplaySet::NeedsDesktopMoves(qword_18023E528) )
      CVisual::ClearAllMoveTransformsInSubtree(a2);
    if ( !a3 && (*((_BYTE *)a2 + 90) & 4) != 0 )
    {
      v12[0] = 0LL;
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(v12);
      if ( (int)CComposition::GetManipulationManager(this[2], v12) >= 0 )
        CManipulationManager::QueueMidManipulationUpdate(v12[0], 3LL, a2);
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(v12);
    }
    *((_QWORD *)a2 + 10) = 0LL;
    v9 = (CMILRefCountBase *)*((_QWORD *)a2 + 31);
    if ( v9 )
    {
      CMILRefCountBase::Release(v9);
      *((_QWORD *)a2 + 31) = 0LL;
    }
    v10 = *(unsigned int (__fastcall **)(CVisual *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v10 == CVisual::Release )
      CVisual::Release(a2);
    else
      v10(a2);
  }
  CVisual::PropagateFlags((struct CVisual *)this, 1, v4, 0, 0, 0, 0, 0);
  return v3;
}
