/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x180024C04
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$1 @ 0x18005B7AD (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x18005B988 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$2 @ 0x18005B9B0 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$2.c)
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x180098BA0 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800244B0 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180024AB0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 */

void __fastcall ATL::CDacl::~CDacl(ATL::CDacl *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &ATL::CDacl::`vftable';
  ATL::CDacl::RemoveAllAces(this);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v2,
      *((_QWORD *)this + 4));
    free(*((void **)this + 3));
  }
  v3 = (void *)*((_QWORD *)this + 1);
  *(_QWORD *)this = &ATL::CAcl::`vftable';
  free(v3);
}
