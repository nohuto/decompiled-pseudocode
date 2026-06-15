/*
 * XREFs of ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18000AAB0
 * Callers:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18000B238 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180040500 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 * Callees:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18000AD00 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(
        __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  ATL::CDacl::CAccessAce *v5; // rcx
  void *(__fastcall *v6)(ATL::CDacl::CAccessAce *__hidden, unsigned int); // rax
  char result; // al

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 0LL;
    if ( v3 )
    {
      do
      {
        v5 = (ATL::CDacl::CAccessAce *)v1[v4];
        if ( v5 )
        {
          v6 = **(void *(__fastcall ***)(ATL::CDacl::CAccessAce *__hidden, unsigned int))v5;
          if ( v6 == ATL::CDacl::CAccessAce::`vector deleting destructor' )
            ATL::CDacl::CAccessAce::`vector deleting destructor'(v5, 1u);
          else
            v6(v5, 1u);
        }
        v1[v4++] = 0LL;
      }
      while ( v4 < v3 );
      v1 = *(_QWORD **)a1;
    }
    free(v1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  result = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
