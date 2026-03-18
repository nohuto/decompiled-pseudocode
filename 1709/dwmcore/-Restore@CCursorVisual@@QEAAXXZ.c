/*
 * XREFs of ?Restore@CCursorVisual@@QEAAXXZ @ 0x18013BD68
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800AA880 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 */

void __fastcall CCursorVisual::Restore(CCursorVisual *this)
{
  __int64 v2; // rcx
  CGradientBrush *v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
  if ( v2 && *((_DWORD *)this + 7) )
    *(_BYTE *)(v2 + 93) ^= (*(_BYTE *)(v2 + 93) ^ (32 * *((_BYTE *)this + 24))) & 0x20;
  v3 = (CGradientBrush *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)v3 + 9) = 0LL;
    CResource::NotifyOnChanged(v3, 0, 0LL);
    ReleaseInterface<CCompositionSurfaceInfo>((CMILCOMBase **)this + 2);
  }
  *((_DWORD *)this + 7) = 0;
}
