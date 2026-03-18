/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x1C003A350
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003A124 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C0152850 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x1C003A290 (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003A5C4 (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CCompositionBuffer::~CCompositionBuffer(CRegion **this)
{
  CRegion *v2; // rcx

  *this = (CRegion *)&CCompositionBuffer::`vftable';
  CCompositionBuffer::RemoveAllRealizations((CCompositionBuffer *)this);
  v2 = this[31];
  if ( v2 )
    CRegion::Release(v2);
}
