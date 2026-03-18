/*
 * XREFs of ??1CGeometryGroup@@MEAA@XZ @ 0x18017B16C
 * Callers:
 *     ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x180153EA0 (--_ECGeometryGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180174ED0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

void __fastcall CGeometryGroup::~CGeometryGroup(CGeometryGroup *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  CGeometryGroup **v3; // rdx
  CGeometryGroup **v4; // rax

  *(_QWORD *)this = &CGeometryGroup::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 13) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CGeometryGroup::UnRegisterNotifiers(this);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 18);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 13) = &CCyclicResourceListEntry::`vftable';
  v3 = (CGeometryGroup **)*((_QWORD *)this + 14);
  v4 = (CGeometryGroup **)*((_QWORD *)this + 15);
  if ( v3[1] != (CGeometryGroup *)((char *)this + 112) || *v4 != (CGeometryGroup *)((char *)this + 112) )
    __fastfail(3u);
  *v4 = (CGeometryGroup *)v3;
  v3[1] = (CGeometryGroup *)v4;
  CGeometry::~CGeometry((struct CResource **)this);
}
