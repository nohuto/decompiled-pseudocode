/*
 * XREFs of ?UnregisterSourceLocked@CHolographicViewerContent@@AEAAJXZ @ 0x1801A592C
 * Callers:
 *     ??1CHolographicViewerContent@@MEAA@XZ @ 0x1801A4E7C (--1CHolographicViewerContent@@MEAA@XZ.c)
 *     ?RegisterSource@CHolographicViewerContent@@UEAAJPEAX@Z @ 0x1801A57E0 (-RegisterSource@CHolographicViewerContent@@UEAAJPEAX@Z.c)
 *     ?UnregisterSource@CHolographicViewerContent@@UEAAJXZ @ 0x1801A58F0 (-UnregisterSource@CHolographicViewerContent@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicViewerContent::UnregisterSourceLocked(CHolographicViewerContent *this)
{
  __int64 result; // rax

  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 10);
  result = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  return result;
}
