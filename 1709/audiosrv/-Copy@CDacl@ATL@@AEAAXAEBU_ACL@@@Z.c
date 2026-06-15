/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180080BA0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18008323C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18008426C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800136D8 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x1800137E8 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x18002E8DC (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x18002E93C (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x18007F298 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ??0CSid@ATL@@QEAA@XZ @ 0x18007F400 (--0CSid@ATL@@QEAA@XZ.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18007F7EC (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18007FC20 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rdi
  DWORD i; // esi
  int v5; // r12d
  const struct _GUID *v6; // r14
  const struct _GUID *v7; // rbx
  struct _SID *v8; // rcx
  ATL::CDacl::CAccessObjectAce *v9; // rax
  void **v10; // rbx
  bool v11; // r14
  char v12; // r15
  void **v13; // [rsp+48h] [rbp-110h] BYREF
  int v14; // [rsp+50h] [rbp-108h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-100h] BYREF
  ATL::CDacl *v16; // [rsp+60h] [rbp-F8h]
  PACL pAcl; // [rsp+68h] [rbp-F0h]
  __int64 v18; // [rsp+70h] [rbp-E8h]
  ATL::CDacl::CAccessObjectAce *v19; // [rsp+78h] [rbp-E0h]
  void **v20; // [rsp+80h] [rbp-D8h]
  DWORD pAclInformation[6]; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v22[128]; // [rsp+A0h] [rbp-B8h] BYREF

  v18 = -2LL;
  v3 = this;
  v16 = this;
  pAcl = a2;
  if ( !a2 )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)v3 + 16) = 1;
    return;
  }
  ATL::CSid::CSid((ATL::CSid *)v22);
  v13 = 0LL;
  free(*((void **)v3 + 1));
  *((_QWORD *)v3 + 1) = 0LL;
  if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation) )
    ATL::AtlThrowLastWin32();
  if ( !GetAclInformation(a2, &v14, 4u, AclRevisionInformation) )
    ATL::AtlThrowLastWin32();
  *((_DWORD *)v3 + 5) = v14;
  for ( i = 0; i < pAclInformation[0]; ++i )
  {
    if ( !GetAce(pAcl, i, &pAce) )
      ATL::AtlThrowLastWin32();
    v5 = *((_DWORD *)pAce + 1);
    if ( *(_BYTE *)pAce <= 1u )
    {
      ATL::CSid::operator=((ATL::CSid *)v22, (struct _SID *)((char *)pAce + 8));
      try
      {
        v10 = (void **)operator new(0x98uLL);
        v20 = v10;
        if ( v10 )
        {
          v11 = *(_BYTE *)pAce == 0;
          v12 = *((_BYTE *)pAce + 1);
          *v10 = &ATL::CAcl::CAce::`vftable';
          ATL::CSid::CSid((ATL::CSid *)(v10 + 1), (const struct ATL::CSid *)v22);
          *((_DWORD *)v10 + 32) = v5;
          *((_BYTE *)v10 + 132) = v12;
          v10[17] = 0LL;
          *v10 = &ATL::CDacl::CAccessAce::`vftable';
          *((_BYTE *)v10 + 144) = v11;
        }
        else
        {
          v10 = 0LL;
        }
        v13 = v10;
      }
      catch ( ... )
      {
        v10 = v13;
        v3 = v16;
      }
      if ( !v10 )
        ATL::AtlThrowImpl(-2147024882);
    }
    else
    {
      if ( (unsigned __int8)(*(_BYTE *)pAce - 5) > 1u )
        continue;
      v6 = 0LL;
      v7 = 0LL;
      v8 = (struct _SID *)((char *)pAce + 44);
      if ( (*((_BYTE *)pAce + 8) & 1) != 0 )
        v6 = (const struct _GUID *)((char *)pAce + 12);
      else
        v8 = (struct _SID *)((char *)pAce + 28);
      if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
        v7 = (const struct _GUID *)((char *)pAce + (v6 != 0LL ? 28LL : 12LL));
      else
        v8 = (struct _SID *)((char *)v8 - 16);
      ATL::CSid::operator=((ATL::CSid *)v22, v8);
      try
      {
        v9 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
        v19 = v9;
        if ( v9 )
          v9 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                 v9,
                 (const struct ATL::CSid *)v22,
                 v5,
                 *((_BYTE *)pAce + 1),
                 *(_BYTE *)pAce == 5,
                 v6,
                 v7);
        v13 = (void **)v9;
      }
      catch ( ... )
      {
        v9 = (ATL::CDacl::CAccessObjectAce *)v13;
        v3 = v16;
      }
      if ( !v9 )
        ATL::AtlThrowImpl(-2147024882);
    }
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
      (_QWORD *)v3 + 3,
      (__int64 *)&v13);
  }
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v13);
  ATL::CSid::~CSid((ATL::CSid *)v22);
}
