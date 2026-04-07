/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDesktopThumbnailBase@@MEAA_NPEAVCWindowData@@@Z @ 0x18009C970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopThumbnailBase::v_ShouldIncludeInSnapshot(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  return (*((_BYTE *)a2 + 596) & 1) == 0;
}
