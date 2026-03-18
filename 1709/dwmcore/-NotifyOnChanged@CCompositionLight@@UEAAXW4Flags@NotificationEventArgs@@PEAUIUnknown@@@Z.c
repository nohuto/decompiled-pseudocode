/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B1630
 * Callers:
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800505A4 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x1800A0810 (-IsBlackLight@CCompositionSpotLight@@UEBA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionLight::NotifyOnChanged(
        struct CProcessAttribution *(__fastcall *a1)(CWindowNode *__hidden this),
        unsigned int a2,
        struct CProcessAttribution *(__fastcall *a3)(CWindowNode *__hidden this))
{
  struct CProcessAttribution *(__fastcall *v3)(CWindowNode *__hidden); // rbp
  bool (__fastcall *v6)(CCompositionSpotLight *); // rax
  bool IsBlackLight; // al
  bool v8; // si

  v3 = a3;
  if ( a3
    && a3 == (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 168LL))(a1) )
  {
    if ( a2 == 1 )
      return;
    a2 = 11;
    v3 = a1;
  }
  if ( a2 == 11 || a2 == 1 )
  {
    v6 = *(bool (__fastcall **)(CCompositionSpotLight *))(*(_QWORD *)a1 + 200LL);
    if ( v6 == CCompositionSpotLight::IsBlackLight )
      IsBlackLight = CCompositionSpotLight::IsBlackLight((CCompositionSpotLight *)a1);
    else
      IsBlackLight = v6((CCompositionSpotLight *)a1);
    v8 = IsBlackLight;
    if ( !IsBlackLight || !*((_BYTE *)a1 + 152) )
      CResource::NotifyOnChanged((CGradientBrush *)a1, a2, v3);
    *((_BYTE *)a1 + 152) = v8;
  }
}
