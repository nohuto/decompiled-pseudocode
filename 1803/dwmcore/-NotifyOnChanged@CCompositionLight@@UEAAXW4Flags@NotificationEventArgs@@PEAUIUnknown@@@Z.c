/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A680
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x18004E374 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180050210 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x18002A7F0 (-IsBlackLight@CCompositionSpotLight@@UEBA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionLight::NotifyOnChanged(
        CCompositionSpotLight *a1,
        unsigned int a2,
        CCompositionSpotLight *a3)
{
  CCompositionSpotLight *v3; // rbp
  bool (__fastcall *v6)(CCompositionSpotLight *__hidden); // rax
  bool IsBlackLight; // al
  bool v8; // si

  v3 = a3;
  if ( a3
    && a3 == (CCompositionSpotLight *)(*(__int64 (__fastcall **)(CCompositionSpotLight *))(*(_QWORD *)a1 + 168LL))(a1) )
  {
    if ( a2 == 1 )
      return;
    a2 = 11;
    v3 = a1;
  }
  if ( a2 == 11 || a2 == 1 )
  {
    v6 = *(bool (__fastcall **)(CCompositionSpotLight *__hidden))(*(_QWORD *)a1 + 200LL);
    if ( v6 == CCompositionSpotLight::IsBlackLight )
      IsBlackLight = CCompositionSpotLight::IsBlackLight(a1);
    else
      IsBlackLight = v6(a1);
    v8 = IsBlackLight;
    if ( !IsBlackLight || !*((_BYTE *)a1 + 152) )
      CResource::NotifyOnChanged(a1, a2, v3);
    *((_BYTE *)a1 + 152) = v8;
  }
}
