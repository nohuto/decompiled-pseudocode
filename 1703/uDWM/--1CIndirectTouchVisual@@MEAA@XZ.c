/*
 * XREFs of ??1CIndirectTouchVisual@@MEAA@XZ @ 0x180095478
 * Callers:
 *     ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x180095500 (--_GCIndirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x180095750 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::~CIndirectTouchVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CIndirectTouchVisual::`vftable';
  CIndirectTouchVisual::Stop((CIndirectTouchVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 102); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[48] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[47];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 48));
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}
