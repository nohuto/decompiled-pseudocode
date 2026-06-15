/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x18002E7C4
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002DF90 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$1 @ 0x180039EAC (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$1.c)
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x18007F9E0 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18008323C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x1800835CA (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$2 @ 0x1800835F2 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$2.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x18002E670 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x18002EA60 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

void __fastcall ATL::CDacl::~CDacl(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  *this = &ATL::CDacl::`vftable';
  ATL::CDacl::RemoveAllAces((ATL::CDacl *)this);
  v2 = this[3];
  if ( v2 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v2,
      this[4]);
    free(this[3]);
  }
  v3 = this[1];
  *this = &ATL::CAcl::`vftable';
  free(v3);
}
