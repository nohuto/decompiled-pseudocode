/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800244B0
 * Callers:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180024AB0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x180024C04 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??1?$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x18007C7E0 (--1-$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x18009D44C (-RemoveAt@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 * Callees:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180024730 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 i; // rbx
  ATL::CDacl::CAccessAce *v5; // rcx
  void *(__fastcall *v6)(ATL::CDacl::CAccessAce *__hidden, unsigned int); // rax

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      v5 = *(ATL::CDacl::CAccessAce **)(a1 + 8 * i);
      if ( v5 )
      {
        v6 = **(void *(__fastcall ***)(ATL::CDacl::CAccessAce *__hidden, unsigned int))v5;
        if ( v6 == ATL::CDacl::CAccessAce::`vector deleting destructor' )
          ATL::CDacl::CAccessAce::`vector deleting destructor'(v5, 1u);
        else
          v6(v5, 1u);
      }
      *(_QWORD *)(a1 + 8 * i) = 0LL;
    }
  }
}
