/*
 * XREFs of ?Show@CCursorVisual@@QEAAXXZ @ 0x18014A9A8
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18005B624 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorVisual::Show(CCursorVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  struct CEffect *EffectInternal; // rax
  CBitmapOfDeviceBitmaps *v5; // rbx
  __int64 v6; // rcx
  bool v7; // al

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v1 + 8);
  if ( v3 )
  {
    EffectInternal = CVisual::GetEffectInternal(*(CVisual **)(v1 + 8));
    v5 = EffectInternal;
    if ( EffectInternal
      && (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           7LL) )
    {
      *((_QWORD *)this + 2) = v5;
      CBitmapOfDeviceBitmaps::AddRef(v5);
      v6 = *((_QWORD *)this + 2);
      if ( *(double *)(v6 + 72) == 0.0 )
      {
        *(_QWORD *)(v6 + 72) = 0x3FF0000000000000LL;
        CResource::NotifyOnChanged((_DWORD *)v6, 0LL, 0LL);
      }
      else
      {
        ReleaseInterface<CCompositionSurfaceInfo>((CMILCOMBase **)this + 2);
      }
    }
    v7 = (*(_BYTE *)(v3 + 90) & 0x20) != 0;
    *(_BYTE *)(v3 + 90) &= ~0x20u;
    *((_BYTE *)this + 24) = v7;
    *((_DWORD *)this + 7) = 1;
  }
}
