/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x1801807CC
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x180146AA0 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x18017BE90 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  CCombinedGeometry **v2; // rdx
  CCombinedGeometry **v3; // rax

  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 13) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers((struct CResource **)this);
  *((_QWORD *)this + 13) = &CCyclicResourceListEntry::`vftable';
  v2 = (CCombinedGeometry **)*((_QWORD *)this + 14);
  if ( v2[1] != (CCombinedGeometry *)((char *)this + 112)
    || (v3 = (CCombinedGeometry **)*((_QWORD *)this + 15), *v3 != (CCombinedGeometry *)((char *)this + 112)) )
  {
    __fastfail(3u);
  }
  *v3 = (CCombinedGeometry *)v2;
  v2[1] = (CCombinedGeometry *)v3;
  CGeometry::~CGeometry((struct CResource **)this);
}
