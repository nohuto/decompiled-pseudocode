/*
 * XREFs of ?Release@CResource@@UEAAKXZ @ 0x180051660
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18002D440 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800C1E40 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002AB80 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_GCPropertySet@@UEAAPEAXI@Z @ 0x1800386B0 (--_GCPropertySet@@UEAAPEAXI@Z.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180053570 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     ??_ECComponentTransform2D@@UEAAPEAXI@Z @ 0x180096EE0 (--_ECComponentTransform2D@@UEAAPEAXI@Z.c)
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x1800993D0 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::Release(CResource *this)
{
  unsigned __int32 v1; // ebx
  CPropertySet *(__fastcall *v3)(CPropertySet *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CPropertySet *(__fastcall **)(CPropertySet *, char))(*(_QWORD *)this + 24LL);
    if ( (char *)v3 == (char *)CExpression::`vector deleting destructor' )
    {
      CExpression::`vector deleting destructor'(this, 1u);
    }
    else if ( v3 == CRgnGeometry::`scalar deleting destructor' )
    {
      CRgnGeometry::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CPropertySet::`scalar deleting destructor' )
    {
      CPropertySet::`scalar deleting destructor'(this, 1);
    }
    else if ( (char *)v3 == (char *)CComponentTransform2D::`vector deleting destructor' )
    {
      CComponentTransform2D::`vector deleting destructor'(this, 1u);
    }
    else if ( (char *)v3 == (char *)CSurfaceBrush::`scalar deleting destructor' )
    {
      CSurfaceBrush::`scalar deleting destructor'(this, 1u);
    }
    else
    {
      v3(this, 1);
    }
  }
  return v1;
}
