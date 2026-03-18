/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18004D7D0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800266D0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004FCD0 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  __int64 v1; // rdi
  struct CEffect *EffectInternal; // rbx
  __int64 (__fastcall *v4)(struct CEffect *, __int64); // rax
  char v5; // al
  __int64 (__fastcall *v6)(struct CEffect *, __int64); // rax
  char v7; // al

  v1 = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    v4 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
    if ( (char *)v4 == (char *)CEffectGroup::IsOfType )
      v5 = CEffectGroup::IsOfType(EffectInternal, 143LL);
    else
      v5 = v4(EffectInternal, 143LL);
    if ( v5 )
    {
      return EffectInternal;
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
      if ( (char *)v6 == (char *)CEffectGroup::IsOfType )
        v7 = CEffectGroup::IsOfType(EffectInternal, 52LL);
      else
        v7 = v6(EffectInternal, 52LL);
      if ( v7 )
        return (struct CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
  }
  return (struct CTransform3D *)v1;
}
