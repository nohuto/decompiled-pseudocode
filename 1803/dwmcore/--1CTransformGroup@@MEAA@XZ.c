/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x180019630
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x1800194A0 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800195A0 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18002A324 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  CTransformGroup **v2; // rdx
  CTransformGroup **v3; // rax

  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransform'};
  *((_QWORD *)this + 19) = &CTransformGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransformGroup::UnRegisterNotifiers(this);
  SAFE_DELETE<CMILMatrix>((char *)this + 192);
  *((_QWORD *)this + 19) = &CCyclicResourceListEntry::`vftable';
  v2 = (CTransformGroup **)*((_QWORD *)this + 20);
  if ( v2[1] != (CTransformGroup *)((char *)this + 160)
    || (v3 = (CTransformGroup **)*((_QWORD *)this + 21), *v3 != (CTransformGroup *)((char *)this + 160)) )
  {
    __fastfail(3u);
  }
  *v3 = (CTransformGroup *)v2;
  v2[1] = (CTransformGroup *)v3;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
