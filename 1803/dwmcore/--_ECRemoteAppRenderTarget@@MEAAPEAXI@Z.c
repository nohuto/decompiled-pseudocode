/*
 * XREFs of ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x18015C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180042294 (--1CRenderTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::`vector deleting destructor'(
        CRemoteAppRenderTarget *this,
        char a2)
{
  CMILCOMBase *v4; // rcx

  *(_QWORD *)this = &CRemoteAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 22));
  v4 = (CMILCOMBase *)*((_QWORD *)this + 21);
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
