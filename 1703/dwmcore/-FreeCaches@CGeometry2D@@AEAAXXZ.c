/*
 * XREFs of ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801790FC
 * Callers:
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18012F19C (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x180153574 (--1CGeometry2D@@MEAA@XZ.c)
 *     ?OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180165560 (-OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801790E0 (-OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180179130 (-OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CGeometry2D::FreeCaches(void **this)
{
  void *v2; // rcx

  WPF::ProcessHeapImpl::Free(this[7]);
  v2 = this[8];
  this[7] = 0LL;
  WPF::ProcessHeapImpl::Free(v2);
  this[8] = 0LL;
}
