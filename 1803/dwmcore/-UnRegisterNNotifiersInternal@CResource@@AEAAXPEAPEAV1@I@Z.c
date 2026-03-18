/*
 * XREFs of ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84
 * Callers:
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800195A0 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001977C (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800B3BE0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800C8260 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1801882D4 (--1CContainerVectorShape@@MEAA@XZ.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801883E0 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801AA790 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801AA988 (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801AC1D0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801AC210 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1801AC350 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned int a3)
{
  __int64 v4; // rdi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      CResource::UnRegisterNotifierInternal(this, *a2);
      *a2++ = 0LL;
      --v4;
    }
    while ( v4 );
  }
}
