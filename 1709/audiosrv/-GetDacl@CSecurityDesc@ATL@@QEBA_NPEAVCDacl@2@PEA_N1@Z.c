/*
 * XREFs of ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18008426C
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18008323C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180080BA0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 */

char __fastcall ATL::CSecurityDesc::GetDacl(ATL::CSecurityDesc *this, struct ATL::CDacl *a2, bool *a3, bool *a4)
{
  void *v4; // rcx
  struct _ACL *v6; // rdi
  struct _ACL *v8; // [rsp+30h] [rbp+8h] BYREF
  bool *v9; // [rsp+40h] [rbp+18h] BYREF
  bool *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v4 = (void *)*((_QWORD *)this + 1);
  if ( !v4 || !GetSecurityDescriptorDacl(v4, (LPBOOL)&v10, &v8, (LPBOOL)&v9) )
    return 0;
  if ( a2 )
  {
    if ( (_DWORD)v10 )
    {
      v6 = v8;
      (*(void (__fastcall **)(struct ATL::CDacl *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( v6 )
        ATL::CDacl::Copy(a2, v6);
      else
        *((_BYTE *)a2 + 16) = 1;
    }
    else
    {
      (*(void (__fastcall **)(struct ATL::CDacl *))(*(_QWORD *)a2 + 16LL))(a2);
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  return 1;
}
