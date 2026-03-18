/*
 * XREFs of ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004F9E8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FBA0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18005057C (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180050630 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z @ 0x18014B510 (-RemoveChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180050210 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9558 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800D9FD4 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801CFE6C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::RemoveChild(CComposition **this, struct CVisual *a2, char a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // r8d
  char v13; // cl
  int v14; // r8d
  int v15; // r8d
  int v16; // r9d
  int v17; // r9d
  unsigned int (__fastcall *v18)(CVisual *__hidden); // rax
  CComposition **v20; // rcx
  CComposition **v21; // rax
  struct CManipulationManager *v22[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( CPtrArrayBase::Remove((CPtrArrayBase *)(this + 9), (unsigned __int64)a2) )
  {
    v7 = 17;
    if ( ((_BYTE)this[11] & 4) == 0 )
    {
      if ( !*((_DWORD *)a2 + 25) || *((float *)a2 + 40) == 0.0 && *((float *)a2 + 39) == 0.0 )
      {
        *(_OWORD *)v22 = *(_OWORD *)((char *)a2 + 140);
        v8 = CVisual::AddAdditionalDirtyRects((CVisual *)this, (const struct MilRectF *)v22);
        v6 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x30Eu);
          return v6;
        }
      }
      else
      {
        v7 = 21;
      }
    }
    if ( qword_1802D6428 )
    {
      v9 = 0LL;
      if ( *((_DWORD *)qword_1802D6428 + 18) )
      {
        v10 = *((_QWORD *)qword_1802D6428 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v10 + 8 * v9)) )
        {
          v9 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v9 >= v12 )
            goto LABEL_12;
        }
        CVisual::ClearAllMoveTransformsInSubtree(a2);
      }
    }
LABEL_12:
    if ( !a3 && (*((_BYTE *)a2 + 93) & 0x40) != 0 )
    {
      v22[0] = 0LL;
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(v22);
      if ( (int)CComposition::GetManipulationManager(this[2], v22) >= 0 )
        CManipulationManager::QueueMidManipulationUpdate(v22[0], 3LL, a2);
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(v22);
    }
    *((_QWORD *)a2 + 10) = 0LL;
    v13 = *((_BYTE *)a2 + 264);
    v14 = *((_DWORD *)a2 + 65) + 1;
    if ( (v13 & 2) == 0 )
      v14 = *((_DWORD *)a2 + 65);
    v15 = -v14;
    v16 = *((_DWORD *)a2 + 64) + 1;
    if ( (v13 & 1) == 0 )
      v16 = *((_DWORD *)a2 + 64);
    v17 = -v16;
    if ( v17 || v15 )
    {
      v20 = this;
      v21 = this;
      do
      {
        *((_DWORD *)v20 + 64) += v17;
        *((_DWORD *)v20 + 65) += v15;
        v20 = (CComposition **)v20[10];
        if ( v21 )
        {
          v21 = (CComposition **)v21[10];
          if ( v21 )
            v21 = (CComposition **)v21[10];
        }
      }
      while ( v20 != v21 );
    }
    v18 = *(unsigned int (__fastcall **)(CVisual *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v18 == CVisual::Release )
      CVisual::Release(a2);
    else
      v18(a2);
    CVisual::PropagateFlags(this, v7);
  }
  return v6;
}
