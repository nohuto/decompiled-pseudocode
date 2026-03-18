/*
 * XREFs of ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180016FD8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800BB064 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetDcompRenderTargetGroup(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  struct CResource *v9; // rcx
  struct CVisualTree *v10; // rdx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[49]);
  this[49] = 0LL;
  v7 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v7, 40LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x5E5u);
    }
  }
  return v6;
}
