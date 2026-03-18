/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004F95C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004FA64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004FB00 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180050F6C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180051044 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18005111C (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800513D4 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800517CC (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800518A4 (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800518E4 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x18005199C (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180051D88 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180052890 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180054CD0 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180083320 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18009B68C (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18009C838 (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18009CA54 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18009CAB4 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x18009CB14 (-ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDW.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18009CB44 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETM.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x18009CBA4 (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18009CBC4 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x18009CD2C (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSO.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18011A31C (-SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011A7EC (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18011A87C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x180129360 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180129890 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x18016FFAC (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180176128 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801778D4 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18017790C (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180177938 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x180177A28 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x180177AAC (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONM.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1801789D4 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180179058 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x180179548 (-ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTEN.c)
 *     ?ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z @ 0x18017964C (-ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180179680 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180179B54 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18018B6E0 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1801D0370 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x18009C490 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800A9B30 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B1630 (-NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180135D38 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18014E320 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x180177EB0 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  BOOL v7; // r12d
  __int64 v8; // rax
  struct CProcessAttribution *(__fastcall *v9)(CWindowNode *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v11; // rbp
  __int64 result; // rax
  _QWORD *i; // rbx
  struct CProcessAttribution *(__fastcall *v14)(CWindowNode *__hidden); // rax
  struct CProcessAttribution *v15; // rdi
  __int64 v16; // rax
  struct CProcessAttribution *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rax
  int v23; // edx
  int *v24; // rcx
  _QWORD *v25; // r14
  int v26; // eax
  _QWORD *v27; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2 | 0x10;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v7 = !(a2 & 1);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v20 = 0LL;
    v21 = (unsigned int)v3;
    do
    {
      v22 = CPtrArrayBase::operator[](a1 + 24, v20);
      if ( v22 != *(_QWORD *)(a1 + 80) )
        (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v22 + 64LL))(v22, v7, a1);
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  if ( (v4 & 7) != 0 && (a3 & 1) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 208);
    if ( (*(_DWORD *)(v8 + 4) & 0x40000) != 0 )
    {
      v23 = *(_DWORD *)(v8 + 12);
      v24 = (int *)(v8 + 12);
      if ( (v23 & 0x7F000000) != 0xE000000 )
      {
        do
        {
          v24 = (int *)((char *)v24 + (v23 & 0xFFFFFF) + 4);
          v23 = *v24;
        }
        while ( (*v24 & 0x7F000000) != 0xE000000 );
      }
      v27 = *(_QWORD **)(v24 + 1);
      if ( v27 )
      {
        v25 = (_QWORD *)*v27;
        if ( (_QWORD *)*v27 != v27 )
        {
          while ( 1 )
          {
            v26 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(v25 - 11));
            if ( v26 < 0 )
              break;
            CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(v25 - 11));
            v25 = (_QWORD *)*v25;
            if ( v25 == v27 )
              goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xFDEu);
        }
      }
    }
LABEL_9:
    if ( (a3 & 2) != 0 )
      CVisual::ResetVisibleRegionForAllInSubtree((CVisual *)a1);
  }
  v9 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)a1 + 120LL);
  if ( v9 == CResource::GetProcessAttributionNoRef )
  {
    ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef((CResource *)a1);
  }
  else if ( v9 == CWindowNode::GetProcessAttributionNoRef )
  {
    ProcessAttributionNoRef = CWindowNode::GetProcessAttributionNoRef((CWindowNode *)a1);
  }
  else
  {
    ProcessAttributionNoRef = v9((CWindowNode *)a1);
  }
  v11 = ProcessAttributionNoRef;
  result = v4 & 0x7F;
  *(_DWORD *)(a1 + 88) |= result;
  if ( (v4 & 0xC) != 0 )
  {
    v4 = v4 & 0xFFFFFFB3 | 0x40;
    if ( v11 )
      ++*((_DWORD *)v11 + 7);
  }
  if ( (v4 & 2) != 0 )
    v4 = v4 & 0xFFFFFFDD | 0x20;
  for ( i = *(_QWORD **)(a1 + 80); i; v11 = v15 )
  {
    result = v4 & ((int)(*((_DWORD *)i + 22) << 25) >> 25);
    if ( (_DWORD)result == v4 )
      break;
    *((_DWORD *)i + 22) |= v4 & 0x7F;
    v14 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(*i + 120LL);
    if ( v14 == CResource::GetProcessAttributionNoRef )
    {
      v15 = (struct CProcessAttribution *)i[6];
      if ( v15 )
        v15 = (struct CProcessAttribution *)*((_QWORD *)v15 + 5);
    }
    else
    {
      v17 = v14 == CWindowNode::GetProcessAttributionNoRef
          ? CWindowNode::GetProcessAttributionNoRef((CWindowNode *)i)
          : v14((CWindowNode *)i);
      v15 = v17;
    }
    if ( v15 )
    {
      if ( (v4 & 0x40) != 0 && v15 != v11 )
        ++*((_DWORD *)v15 + 6);
    }
    else
    {
      v15 = v11;
    }
    v16 = i[3];
    if ( (v16 & 2) != 0 )
      result = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      result = i[3] & 1LL;
    if ( (_DWORD)result )
    {
      v18 = 0LL;
      v19 = (unsigned int)result;
      do
      {
        result = CPtrArrayBase::operator[](i + 3, v18);
        if ( result != i[10] )
        {
          if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)result + 64LL) == CCompositionLight::NotifyOnChanged )
            result = CCompositionLight::NotifyOnChanged(result, v7, i);
          else
            result = (*(__int64 (__fastcall **)(__int64, BOOL, _QWORD *))(*(_QWORD *)result + 64LL))(result, v7, i);
        }
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    i = (_QWORD *)i[10];
  }
  return result;
}
