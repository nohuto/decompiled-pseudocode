/*
 * XREFs of ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18012E8A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z @ 0x180171D9C (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETMASK *a3)
{
  int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  int v8; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x51u)) != 0LL )
  {
    if ( Resource != this[17] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x124u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
        this[17] = Resource;
        CDropShadow::InvalidateShadowIntermediate((CDropShadow *)this, 1);
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xD3u);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xCDu);
  }
  return (unsigned int)v4;
}
