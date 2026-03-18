/*
 * XREFs of ?NotifyListenerOfChange@CSpriteVisualContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009D6A0
 * Callers:
 *     ?NotifyListenerOfChange@CGradientBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180012220 (-NotifyListenerOfChange@CGradientBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUI.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180095780 (-NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098B50 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D920 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BE290 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::NotifyListenerOfChange(
        CCompositionSurfaceBitmap *a1,
        CVisual *a2,
        unsigned int a3,
        CCompositionSurfaceBitmap *a4)
{
  unsigned int v6; // edi
  bool (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  bool (__fastcall *v10)(__int64, int); // rax
  char v11; // al
  bool (__fastcall *v12)(__int64, int); // rax
  char v13; // al
  bool (__fastcall *v14)(__int64, int); // rax
  char v15; // al
  __int64 (__fastcall *v16)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax
  __int64 (__fastcall *v18)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax
  unsigned __int8 (__fastcall *v19)(CVisual *); // rax

  v6 = a3;
  if ( a3 == 14 )
  {
    v19 = *(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)a2 + 48LL);
    if ( !((char *)v19 == (char *)CSpriteVisual::IsOfType ? CSpriteVisual::IsOfType(a2, 14LL) : v19(a2)) )
    {
      v6 = 0;
LABEL_23:
      a4 = a1;
      goto LABEL_11;
    }
  }
  v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v8 == (char *)CSpriteVisual::IsOfType )
  {
    v9 = CSpriteVisual::IsOfType(a2, 49LL);
  }
  else if ( (char *)v8 == (char *)CLayerVisual::IsOfType )
  {
    v9 = CLayerVisual::IsOfType(a2, 49LL);
  }
  else if ( v8 == CMaskBrush::IsOfType )
  {
    v9 = CMaskBrush::IsOfType((__int64)a2, 49);
  }
  else
  {
    v9 = v8((__int64)a2, 49);
  }
  if ( v9 )
    goto LABEL_23;
  v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v10 == (char *)CSpriteVisual::IsOfType )
  {
    v11 = CSpriteVisual::IsOfType(a2, 109LL);
  }
  else if ( (char *)v10 == (char *)CLayerVisual::IsOfType )
  {
    v11 = CLayerVisual::IsOfType(a2, 109LL);
  }
  else
  {
    v11 = v10 == CMaskBrush::IsOfType ? CMaskBrush::IsOfType((__int64)a2, 109) : v10((__int64)a2, 109);
  }
  if ( v11 )
    goto LABEL_23;
  v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v12 == (char *)CSpriteVisual::IsOfType )
  {
    v13 = CSpriteVisual::IsOfType(a2, 110LL);
  }
  else if ( (char *)v12 == (char *)CLayerVisual::IsOfType )
  {
    v13 = CLayerVisual::IsOfType(a2, 110LL);
  }
  else
  {
    v13 = v12 == CMaskBrush::IsOfType ? CMaskBrush::IsOfType((__int64)a2, 110) : v12((__int64)a2, 110);
  }
  if ( v13 )
    goto LABEL_23;
LABEL_11:
  v14 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v14 == (char *)CSpriteVisual::IsOfType )
  {
    v15 = CSpriteVisual::IsOfType(a2, 151LL);
  }
  else if ( (char *)v14 == (char *)CLayerVisual::IsOfType )
  {
    v15 = CLayerVisual::IsOfType(a2, 151LL);
  }
  else if ( v14 == CMaskBrush::IsOfType )
  {
    v15 = CMaskBrush::IsOfType((__int64)a2, 151);
  }
  else
  {
    v15 = v14((__int64)a2, 151);
  }
  if ( v15 && !v6 )
  {
    v18 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
    if ( v18 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))5, 0LL);
    else
      ((void (__fastcall *)(CVisual *, __int64))v18)(a2, 5LL);
  }
  v16 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
  if ( v16 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v6, a4);
  else
    return v16(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v6, a4);
}
