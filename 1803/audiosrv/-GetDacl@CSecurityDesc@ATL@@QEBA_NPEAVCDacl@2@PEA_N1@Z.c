/*
 * XREFs of ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18004103C
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180040AC4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180040500 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180040530 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ATL::CSecurityDesc::GetDacl(ATL::CSecurityDesc *this, void **a2, bool *a3, bool *a4)
{
  void *v4; // rcx
  void (__fastcall *v6)(void **); // rax
  struct _ACL *v7; // rdi
  struct _ACL *v9; // [rsp+30h] [rbp+8h] BYREF
  bool *v10; // [rsp+40h] [rbp+18h] BYREF
  bool *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v4 = (void *)*((_QWORD *)this + 1);
  if ( !v4 || !GetSecurityDescriptorDacl(v4, (LPBOOL)&v11, &v9, (LPBOOL)&v10) )
    return 0;
  if ( a2 )
  {
    v6 = (void (__fastcall *)(void **))*((_QWORD *)*a2 + 2);
    if ( (_DWORD)v11 )
    {
      v7 = v9;
      if ( v9 )
      {
        if ( v6 == ATL::CDacl::RemoveAllAces )
          ATL::CDacl::RemoveAllAces(a2);
        else
          v6(a2);
        ATL::CDacl::Copy((ATL::CDacl *)a2, v7);
      }
      else
      {
        v6(a2);
        *((_BYTE *)a2 + 16) = 1;
      }
    }
    else
    {
      v6(a2);
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  return 1;
}
