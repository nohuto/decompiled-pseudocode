/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051570
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::NotifyListenerOfChange(
        __int64 a1,
        CVisual *a2,
        unsigned int a3,
        CCompositionSurfaceBitmap *a4)
{
  __int64 (__fastcall *v4)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  v4 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
  if ( v4 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))a3, a4);
  else
    return v4(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))a3, a4);
}
