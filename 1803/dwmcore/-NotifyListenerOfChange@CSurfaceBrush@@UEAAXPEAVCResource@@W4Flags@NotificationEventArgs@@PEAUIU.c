/*
 * XREFs of ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009A100
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098B50 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D920 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::NotifyListenerOfChange(
        CCompositionSurfaceBitmap *a1,
        CVisual *a2,
        unsigned int a3,
        CCompositionSurfaceBitmap *a4)
{
  CCompositionSurfaceBitmap *v5; // rsi
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

  v5 = a1;
  if ( a3 != 1 )
    v5 = a4;
  v6 = a3;
  if ( a3 == 14 && !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 14LL) )
  {
    v6 = 0;
LABEL_35:
    v5 = a1;
    goto LABEL_13;
  }
  v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( v8 == CMaskBrush::IsOfType )
  {
    v9 = CMaskBrush::IsOfType((__int64)a2, 49);
  }
  else if ( (char *)v8 == (char *)CSpriteVisual::IsOfType )
  {
    v9 = CSpriteVisual::IsOfType(a2, 49LL);
  }
  else
  {
    v9 = v8((__int64)a2, 49);
  }
  if ( v9 )
    goto LABEL_35;
  v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( v10 == CMaskBrush::IsOfType )
    v11 = CMaskBrush::IsOfType((__int64)a2, 109);
  else
    v11 = (char *)v10 == (char *)CSpriteVisual::IsOfType ? CSpriteVisual::IsOfType(a2, 109LL) : v10((__int64)a2, 109);
  if ( v11 )
    goto LABEL_35;
  v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( v12 == CMaskBrush::IsOfType )
    v13 = CMaskBrush::IsOfType((__int64)a2, 110);
  else
    v13 = (char *)v12 == (char *)CSpriteVisual::IsOfType ? CSpriteVisual::IsOfType(a2, 110LL) : v12((__int64)a2, 110);
  if ( v13 )
    goto LABEL_35;
LABEL_13:
  v14 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( v14 == CMaskBrush::IsOfType )
  {
    v15 = CMaskBrush::IsOfType((__int64)a2, 151);
  }
  else if ( (char *)v14 == (char *)CSpriteVisual::IsOfType )
  {
    v15 = CSpriteVisual::IsOfType(a2, 151LL);
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
      v18(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))5, 0LL);
  }
  v16 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
  if ( v16 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v6, v5);
  else
    return v16(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v6, v5);
}
