/*
 * XREFs of ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C0013170
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0013010 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall CHwndTargetProp::Delete(CHwndTargetProp *this)
{
  CHwndTargetProp::ClearSystemVisual(this, 1);
  CHwndTargetProp::ClearSystemVisual(this, 0);
  Win32FreePool(this);
}
