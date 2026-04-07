/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x180086DC8
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x180086E90 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800877A0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = this[48];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[48] = 0LL;
  }
  v3 = this[53];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[53] = 0LL;
  }
  v4 = this[54];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[54] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 44));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 40));
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}
