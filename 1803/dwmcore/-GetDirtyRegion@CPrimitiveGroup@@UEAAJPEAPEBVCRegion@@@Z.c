/*
 * XREFs of ?GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z @ 0x180097280
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::GetDirtyRegion(CPrimitiveGroup *this, const struct CRegion **a2)
{
  *a2 = (const struct CRegion *)(((unsigned __int64)this + 520) & -(__int64)(**((_DWORD **)this + 65) != 0));
  return 0LL;
}
