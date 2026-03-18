/*
 * XREFs of ?Show@CCursorVisual@@QEAAXXZ @ 0x18013BDC8
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800AA8B8 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorVisual::Show(CCursorVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  struct CEffect *EffectInternal; // rax
  CMILCOMBase *v5; // rbx
  CGradientBrush *v6; // rcx
  char v7; // al

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v1 + 8);
  if ( v3 )
  {
    EffectInternal = CVisual::GetEffectInternal(*(CVisual **)(v1 + 8));
    v5 = EffectInternal;
    if ( EffectInternal
      && (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           47LL) )
    {
      *((_QWORD *)this + 2) = v5;
      CMILCOMBase::InternalAddRef(v5);
      v6 = (CGradientBrush *)*((_QWORD *)this + 2);
      if ( *((double *)v6 + 9) == 0.0 )
      {
        *((_QWORD *)v6 + 9) = 0x3FF0000000000000LL;
        CResource::NotifyOnChanged(v6, 0, 0LL);
      }
      else
      {
        ReleaseInterface<CCompositionSurfaceInfo>((CMILCOMBase **)this + 2);
      }
    }
    v7 = *(_BYTE *)(v3 + 93);
    *(_BYTE *)(v3 + 93) = v7 & 0xDF;
    *((_BYTE *)this + 24) = (v7 & 0x20) != 0;
    *((_DWORD *)this + 7) = 1;
  }
}
