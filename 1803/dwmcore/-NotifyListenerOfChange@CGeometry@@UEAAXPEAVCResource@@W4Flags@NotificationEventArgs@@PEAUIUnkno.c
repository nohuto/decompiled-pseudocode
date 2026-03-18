/*
 * XREFs of ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006FD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::NotifyListenerOfChange(
        __int64 a1,
        CVisual *a2,
        __int64 a3,
        CCompositionSurfaceBitmap *a4)
{
  __int64 (__fastcall *v4)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  v4 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
  if ( v4 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))4, a4);
  else
    return v4(a2, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))4, a4);
}
