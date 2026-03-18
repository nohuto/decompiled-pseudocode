/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9E20
 * Callers:
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1800289A0 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::NotifyListenerOfChange(
        __int64 a1,
        CGradientBrush *a2,
        unsigned int a3,
        struct CProcessAttribution *(__fastcall *a4)(CWindowNode *__hidden this))
{
  __int64 (__fastcall *v4)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)); // rax

  v4 = *(__int64 (__fastcall **)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)))(*(_QWORD *)a2 + 64LL);
  if ( v4 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, a3, a4);
  else
    return v4(a2, a3, a4);
}
