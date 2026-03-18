/*
 * XREFs of ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180176128
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180050644 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800C2790 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180160FD4 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x1801762A8 (-SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z.c)
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
  signed int v9; // eax
  struct CResource *v10; // rax

  v5 = 0;
  Resource = (struct CDropShadow *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x2Cu);
  v7 = Resource;
  if ( !*((_DWORD *)a3 + 2) || Resource )
  {
    if ( Resource != CSpriteVisual::GetDropShadow(this) )
    {
      CVisual::ClearContentTreeDataCaches(this);
      if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) != 0 )
      {
        DropShadow = CSpriteVisual::GetDropShadow(this);
        CDropShadow::RemoveVisualFromCache(DropShadow, this);
      }
      v9 = CResource::RegisterNotifier(this, v7);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x52u);
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) != 0 )
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x42u);
  }
  return v5;
}
