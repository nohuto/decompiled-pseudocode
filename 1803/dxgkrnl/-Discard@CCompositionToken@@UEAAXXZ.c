/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C000E440
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C000E0E8 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C000E18C (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this)
{
  if ( *((int *)this + 6) < 3 )
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  CCompositionToken::ReleaseAllUpdates((CCompositionToken *)((char *)this - 8));
  *((_DWORD *)this + 6) = 6;
}
