/*
 * XREFs of ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x18006942C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800C9130 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetDcompRenderTargetGroup(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  struct CResource *v9; // rcx
  struct CVisualTree *v10; // rdx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[49]);
  this[49] = 0LL;
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v7, 0x2Au);
    if ( Resource )
    {
      this[49] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v9 = this[2];
      v10 = this[10];
      *((_BYTE *)this + 312) = 1;
      CMonitorTreeAssociation::RemoveTree(*((CMonitorTreeAssociation **)v9 + 3), v10);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x56Du);
    }
  }
  return v6;
}
