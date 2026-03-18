/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00
 * Callers:
 *     ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180085C04 (-ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x18008C9F0 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180161370 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18004F708 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008663C (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180086C60 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x18008C7A0 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BBD9C (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(CVisual *this, struct CContent *a2)
{
  unsigned int v2; // esi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v6; // rsi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  char (__fastcall *v10)(CVisual *); // rax
  char HasSingleD2DBitmapOrPrimitiveGroupInternal; // al
  __int64 (__fastcall *v13)(CResource *); // rax
  struct _LIST_ENTRY *i; // rdi

  v2 = 0;
  if ( a2 != *((struct CContent **)this + 30) )
  {
    CDrawListCacheSet::Invalidate((CVisual *)((char *)this + 392));
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    v6 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != v6; i = i->Flink )
        CDrawListCacheSet::Invalidate((CDrawListCacheSet *)&i[-6]);
    }
    v7 = CResource::RegisterNotifier(this, a2);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x293u);
    }
    else
    {
      v8 = *((_QWORD *)this + 30);
      if ( v8 && CPtrArrayBase::Remove((CPtrArrayBase *)(v8 + 24), (unsigned __int64)this) )
      {
        v13 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v8 + 16LL);
        if ( v13 == CResource::Release )
          CResource::Release((CResource *)v8);
        else
          v13((CResource *)v8);
      }
      v9 = *(_QWORD *)this;
      *((_QWORD *)this + 30) = a2;
      v10 = *(char (__fastcall **)(CVisual *))(v9 + 288);
      if ( (char *)v10 == (char *)CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
      {
        HasSingleD2DBitmapOrPrimitiveGroupInternal = CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(this);
      }
      else if ( v10 == CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
      {
        HasSingleD2DBitmapOrPrimitiveGroupInternal = CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(this);
      }
      else
      {
        HasSingleD2DBitmapOrPrimitiveGroupInternal = v10(this);
      }
      *((_BYTE *)this + 89) &= ~1u;
      *((_BYTE *)this + 89) |= HasSingleD2DBitmapOrPrimitiveGroupInternal & 1;
      CVisual::UpdateBackdropBlurFlag(this);
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
    }
  }
  return v2;
}
