/*
 * XREFs of ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x18015E0D4
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034830 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60 (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 */

void __fastcall CCursorVisualReference::Restore(CCursorVisualReference *this)
{
  __int64 v2; // rcx
  CVisual *v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
  if ( v2 && *((_DWORD *)this + 7) )
    *(_BYTE *)(v2 + 94) ^= (*(_BYTE *)(v2 + 94) ^ (2 * *((_BYTE *)this + 24))) & 2;
  v3 = (CVisual *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)v3 + 9) = 0LL;
    CResource::NotifyOnChanged(v3, 0LL, 0LL);
    ReleaseInterface<CCompositionSurfaceInfo>((CMILCOMBase **)this + 2);
  }
  *((_DWORD *)this + 7) = 0;
}
