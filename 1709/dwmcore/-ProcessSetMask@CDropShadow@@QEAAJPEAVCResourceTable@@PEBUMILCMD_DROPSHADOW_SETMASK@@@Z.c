/*
 * XREFs of ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x180160EC4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z @ 0x180160D38 (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z.c)
 */

__int64 __fastcall CDropShadow::ProcessSetMask(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETMASK *a3)
{
  signed int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rdi
  struct CResource **v8; // rsi
  signed int v9; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xEu)) != 0LL )
  {
    v8 = (struct CResource **)((char *)this + 200);
    if ( Resource != *((struct CResource **)this + 25) )
    {
      v9 = CResource::RegisterNotifier(this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x142u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, *v8);
        *v8 = Resource;
        CDropShadow::InvalidateShadowIntermediate(this, 1, (CDropShadow *)((char *)this + 200));
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xE3u);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xDDu);
  }
  return (unsigned int)v4;
}
