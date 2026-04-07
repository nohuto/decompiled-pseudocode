/*
 * XREFs of ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x180079C40
 * Callers:
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180078250 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CIconicBitmapRegistry::~CIconicBitmapRegistry(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CIconicBitmapRegistry::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v2 )
    CBaseObject::Release(v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 48);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
