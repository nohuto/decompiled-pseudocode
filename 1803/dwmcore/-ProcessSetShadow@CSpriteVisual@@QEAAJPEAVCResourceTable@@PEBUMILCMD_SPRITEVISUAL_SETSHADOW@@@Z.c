/*
 * XREFs of ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1801A545C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004E754 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800DA9A8 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x18018A93C (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x1801A55E8 (-SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetShadow(
        CSpriteVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVISUAL_SETSHADOW *a3)
{
  unsigned int v5; // esi
  struct CDropShadow *Resource; // rax
  struct CResource *v7; // rbp
  CDropShadow *DropShadow; // rax
  int v9; // eax
  struct CResource *v10; // rax

  v5 = 0;
  Resource = (struct CDropShadow *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x31u);
  v7 = Resource;
  if ( !*((_DWORD *)a3 + 2) || Resource )
  {
    if ( Resource != CSpriteVisual::GetDropShadow(this) )
    {
      CVisual::ClearContentTreeDataCaches(this);
      if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) != 0 )
      {
        DropShadow = CSpriteVisual::GetDropShadow(this);
        CDropShadow::RemoveVisualFromCache(DropShadow, this);
      }
      v9 = CResource::RegisterNotifier(this, v7);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x52u);
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) != 0 )
        {
          v10 = CSpriteVisual::GetDropShadow(this);
          CResource::UnRegisterNotifierInternal(this, v10);
        }
        CSpriteVisual::SetDropShadow(this, v7);
        CVisual::PropagateFlags((__int64)this, 5u, 0);
      }
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x42u);
  }
  return v5;
}
