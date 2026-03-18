/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800225FC (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800516FC (-ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180176230 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x180022380 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004F228 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180054A00 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B23D8 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800B2BA4 (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  bool (__fastcall *v11)(CSpriteVisual *); // rax
  bool HasSingleD2DBitmapOrPrimitiveGroupInternal; // al
  unsigned int (__fastcall *v14)(CResource *__hidden); // rax
  struct _LIST_ENTRY *j; // rsi
  struct _LIST_ENTRY *k; // rdi

  v2 = 0;
  if ( a2 != *((struct CContent **)this + 30) )
  {
    for ( i = *((_QWORD *)this + 51); i; i = *(_QWORD *)(i + 88) )
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x273u);
    }
    else
    {
      v9 = *((_QWORD *)this + 30);
      if ( v9 && CPtrArrayBase::Remove((CPtrArrayBase *)(v9 + 24), (unsigned __int64)this) )
      {
        v14 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v9 + 16LL);
        if ( v14 == CResource::Release )
          CResource::Release((CResource *)v9);
        else
          v14((CResource *)v9);
      }
      v10 = *(_QWORD *)this;
      *((_QWORD *)this + 30) = a2;
      v11 = *(bool (__fastcall **)(CSpriteVisual *))(v10 + 328);
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
      CVisual::UpdateBackdropBlurFlag(this);
      CVisual::PropagateFlags((__int64)this, 5u, 0);
    }
  }
  return v2;
}
