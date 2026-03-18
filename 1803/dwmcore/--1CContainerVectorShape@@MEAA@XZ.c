/*
 * XREFs of ??1CContainerVectorShape@@MEAA@XZ @ 0x1801882D4
 * Callers:
 *     ??_ECShapeTree@@UEAAPEAXI@Z @ 0x1801A38D0 (--_ECShapeTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall CContainerVectorShape::~CContainerVectorShape(CContainerVectorShape *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &CContainerVectorShape::`vftable';
  CResource::UnRegisterNNotifiersInternal(
    this,
    *((struct CResource ***)this + 11),
    (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3);
  v2 = (char *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*((_QWORD *)this + 13) - (_QWORD)v2) >> 3, 8uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
  CResource::~CResource(this);
}
