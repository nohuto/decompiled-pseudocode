/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420
 * Callers:
 *     ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800506C4 (-ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x18009DE10 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801A3914 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONID@@@Z @ 0x1801A40F0 (-ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONI.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1801A5570 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004D1A8 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x18004E5A0 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180051660 (-Release@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x18009DB10 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9558 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800C1DCC (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CContent *a2)
{
  unsigned int v2; // esi
  __int64 i; // rdi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v7; // r14
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  bool (__fastcall *v11)(CVisual *__hidden); // rax
  bool HasSingleD2DBitmapOrPrimitiveGroupInternal; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int (__fastcall *v17)(CResource *__hidden); // rax
  struct _LIST_ENTRY *j; // rsi
  struct _LIST_ENTRY *k; // rdi

  v2 = 0;
  if ( a2 != *((struct CContent **)this + 31) )
  {
    for ( i = *((_QWORD *)this + 52); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_QWORD *)(i + 16) )
        CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)i);
    }
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    v7 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != v7; j = j->Flink )
      {
        for ( k = j[-6].Flink; k; k = k[5].Blink )
        {
          if ( k[1].Flink )
            CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)k);
        }
      }
    }
    v8 = CResource::RegisterNotifier(this, a2);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x28Fu);
    }
    else
    {
      v9 = *((_QWORD *)this + 31);
      if ( v9 && CPtrArrayBase::Remove((CPtrArrayBase *)(v9 + 24), (unsigned __int64)this) )
      {
        v17 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v9 + 16LL);
        if ( v17 == CResource::Release )
          CResource::Release((CResource *)v9);
        else
          v17((CResource *)v9);
      }
      v10 = *(_QWORD *)this;
      *((_QWORD *)this + 31) = a2;
      v11 = *(bool (__fastcall **)(CVisual *__hidden))(v10 + 336);
      if ( v11 == CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
      {
        HasSingleD2DBitmapOrPrimitiveGroupInternal = CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(this);
      }
      else if ( v11 == CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
      {
        HasSingleD2DBitmapOrPrimitiveGroupInternal = CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(this);
      }
      else
      {
        HasSingleD2DBitmapOrPrimitiveGroupInternal = v11(this);
      }
      *((_BYTE *)this + 92) &= ~1u;
      *((_BYTE *)this + 92) |= HasSingleD2DBitmapOrPrimitiveGroupInternal;
      CVisual::UpdateBackdropBlurFlag(this, v13, v14, v15);
      CVisual::PropagateFlags(this, 5LL);
    }
  }
  return v2;
}
