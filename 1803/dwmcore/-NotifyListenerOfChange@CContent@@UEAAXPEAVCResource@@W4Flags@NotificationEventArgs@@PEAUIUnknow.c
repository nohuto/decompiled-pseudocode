/*
 * XREFs of ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009AEA0
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180188350 (-NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs.c)
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004BFC0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CContent::NotifyListenerOfChange(
        __int64 a1,
        CVisual *a2,
        unsigned int a3,
        CCompositionSurfaceBitmap *a4)
{
  bool (__fastcall *v7)(__int64, int); // rax
  bool v8; // al
  __int64 (__fastcall *v9)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax
  __int64 (__fastcall *v11)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  v7 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( v7 == CSurfaceBrush::IsOfType )
  {
    v8 = CSurfaceBrush::IsOfType((__int64)a2, 151);
  }
  else if ( v7 == CVisual::IsOfType )
  {
    v8 = CVisual::IsOfType((__int64)a2, 151);
  }
  else
  {
    v8 = v7((__int64)a2, 151);
  }
  if ( v8 && !a3 )
  {
    v11 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
    if ( v11 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))5, 0LL);
    else
      v11(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))5, 0LL);
  }
  v9 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
  if ( v9 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))a3, a4);
  else
    return v9(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))a3, a4);
}
