/*
 * XREFs of ?Restore@CCursorVisual@@QEAAXXZ @ 0x18014A948
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18005B5EC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 */

void __fastcall CCursorVisual::Restore(CCursorVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
  if ( v2 && *((_DWORD *)this + 7) )
    *(_BYTE *)(v2 + 90) ^= (*(_BYTE *)(v2 + 90) ^ (32 * *((_BYTE *)this + 24))) & 0x20;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 72) = 0LL;
    CResource::NotifyOnChanged((_DWORD *)v3, 0LL, 0LL);
    ReleaseInterface<CCompositionSurfaceInfo>((CMILCOMBase **)this + 2);
  }
  *((_DWORD *)this + 7) = 0;
}
