/*
 * XREFs of ?OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180172470
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18018122C (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::OnChanged(CGeometry2D *a1)
{
  *((_DWORD *)a1 + 18) |= 7u;
  CGeometry2D::FreeCaches(a1);
  return 1LL;
}
