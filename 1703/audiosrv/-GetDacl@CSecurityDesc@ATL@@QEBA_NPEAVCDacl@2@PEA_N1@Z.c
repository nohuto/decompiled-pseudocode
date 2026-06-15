/*
 * XREFs of ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x1800304E4
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180024AB0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002FC54 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ATL::CSecurityDesc::GetDacl(ATL::CSecurityDesc *this, struct ATL::CDacl *a2, bool *a3, bool *a4)
{
  void *v4; // rcx
  struct _ACL *v6; // rdi
  void (__fastcall *v7)(ATL::CDacl *); // rax
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
    if ( (_DWORD)v11 )
    {
      v6 = v9;
      v7 = *(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)a2 + 16LL);
      if ( v9 )
      {
        if ( v7 == ATL::CDacl::RemoveAllAces )
          ATL::CDacl::RemoveAllAces(a2);
        else
          v7(a2);
        ATL::CDacl::Copy(a2, v6);
      }
      else
      {
        v7(a2);
        *((_BYTE *)a2 + 16) = 1;
      }
    }
    else
    {
      (*(void (__fastcall **)(struct ATL::CDacl *))(*(_QWORD *)a2 + 16LL))(a2);
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  return 1;
}
