/*
 * XREFs of ?Release@CResource@@UEAAKXZ @ 0x1800A9F20
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005B770 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18006FF14 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18009E8F8 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800AA4CC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B9950 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x180024F70 (--_GCSurfaceBrush@@UEAAPEAXI@Z.c)
 *     ??_GCScaleTransform3D@@MEAAPEAXI@Z @ 0x180095120 (--_GCScaleTransform3D@@MEAAPEAXI@Z.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x1800968E0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x1800A58D0 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x1800A75B0 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::Release(CResource *this)
{
  unsigned __int32 v1; // ebx
  CScaleTransform3D *(__fastcall *v3)(CScaleTransform3D *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CScaleTransform3D *(__fastcall **)(CScaleTransform3D *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CExpression::`vector deleting destructor' )
    {
      CExpression::`vector deleting destructor'(this, 1);
    }
    else if ( v3 == CRgnGeometry::`scalar deleting destructor' )
    {
      CRgnGeometry::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CPropertyBag::`scalar deleting destructor' )
    {
      CPropertyBag::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CSurfaceBrush::`scalar deleting destructor' )
    {
      CSurfaceBrush::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CScaleTransform3D::`scalar deleting destructor' )
    {
      CScaleTransform3D::`scalar deleting destructor'(this, 1);
    }
    else
    {
      v3(this, 1);
    }
  }
  return v1;
}
