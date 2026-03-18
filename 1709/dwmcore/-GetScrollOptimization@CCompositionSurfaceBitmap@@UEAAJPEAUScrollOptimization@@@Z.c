/*
 * XREFs of ?GetScrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z @ 0x1800288D0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetScrollOptimization(
        CCompositionSurfaceBitmap *this,
        struct ScrollOptimization *a2)
{
  *(_OWORD *)a2 = *((_OWORD *)this + 2);
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 14);
  return 0LL;
}
