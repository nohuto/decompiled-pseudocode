/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x1C00127D0
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C00125A8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C0151430 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x1C0012710 (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C0012A44 (-Release@CRegion@@QEBAJXZ.c)
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
