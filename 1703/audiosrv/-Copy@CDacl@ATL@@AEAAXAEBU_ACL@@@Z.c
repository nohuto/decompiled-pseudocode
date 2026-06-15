/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002FC54
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x1800304E4 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180023600 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180023918 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180023974 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180023A88 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x1800254C4 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x18002F0CC (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0CSid@ATL@@QEAA@XZ @ 0x180032AA0 (--0CSid@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18007C718 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800986E8 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180098C8C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rdi
  DWORD i; // esi
  unsigned int v5; // r12d
  struct _SID *v6; // rbx
  HANDLE ProcessHeap; // rax
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rbx
  bool v9; // r14
  char v10; // r15
  const struct _GUID *v11; // r14
  const struct _GUID *v12; // rbx
  struct _SID *v13; // rdx
  ATL::CDacl::CAccessObjectAce *v14; // rax
  ATL::CDacl::CAccessObjectAce *v15; // [rsp+48h] [rbp-110h] BYREF
  int v16; // [rsp+50h] [rbp-108h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-100h] BYREF
  ATL::CDacl *v18; // [rsp+60h] [rbp-F8h]
  PACL pAcl; // [rsp+68h] [rbp-F0h]
  __int64 v20; // [rsp+70h] [rbp-E8h]
  ATL::CDacl::CAccessObjectAce *v21; // [rsp+78h] [rbp-E0h]
  __int64 (__fastcall ***v22)(_QWORD, __int64); // [rsp+80h] [rbp-D8h]
  DWORD pAclInformation[6]; // [rsp+88h] [rbp-D0h] BYREF
  _BYTE v24[8]; // [rsp+A0h] [rbp-B8h] BYREF
  char v25; // [rsp+A8h] [rbp-B0h] BYREF
  char v26; // [rsp+ECh] [rbp-6Ch]
  int v27; // [rsp+F0h] [rbp-68h]
  __int64 v28; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+100h] [rbp-58h] BYREF
  __int64 v30; // [rsp+108h] [rbp-50h] BYREF
  __int64 v31; // [rsp+110h] [rbp-48h] BYREF

  v20 = -2LL;
  v3 = this;
  v18 = this;
  pAcl = a2;
  if ( a2 )
  {
    ATL::CSid::CSid((ATL::CSid *)v24);
    v15 = 0LL;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    if ( !GetAclInformation(a2, &v16, 4u, AclRevisionInformation) )
      ATL::AtlThrowLastWin32();
    *((_DWORD *)v3 + 5) = v16;
    for ( i = 0; ; ++i )
    {
      if ( i >= pAclInformation[0] )
      {
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free((__int64 (__fastcall ****)(_QWORD, __int64))&v15);
        ATL::CSid::~CSid((ATL::CSid *)v24);
        return;
      }
      if ( !GetAce(pAcl, i, &pAce) )
        ATL::AtlThrowLastWin32();
      v5 = *((_DWORD *)pAce + 1);
      if ( *(_BYTE *)pAce <= 1u )
        break;
      if ( (unsigned __int8)(*(_BYTE *)pAce - 5) <= 1u )
      {
        v11 = 0LL;
        v12 = 0LL;
        v13 = (struct _SID *)((char *)pAce + 44);
        if ( (*((_BYTE *)pAce + 8) & 1) != 0 )
          v11 = (const struct _GUID *)((char *)pAce + 12);
        else
          v13 = (struct _SID *)((char *)pAce + 28);
        if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
          v12 = (const struct _GUID *)((char *)pAce + (v11 != 0LL ? 28LL : 12LL));
        else
          v13 = (struct _SID *)((char *)v13 - 16);
        ATL::CSid::operator=((ATL::CSid *)v24, v13);
        try
        {
          v14 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
          v21 = v14;
          if ( v14 )
            v14 = (ATL::CDacl::CAccessObjectAce *)ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                                                    v14,
                                                    (const struct ATL::CSid *)v24,
                                                    v5,
                                                    *((_BYTE *)pAce + 1),
                                                    *(_BYTE *)pAce == 5,
                                                    v11,
                                                    v12);
          v15 = v14;
        }
        catch ( ... )
        {
          v14 = v15;
          v3 = v18;
        }
        if ( !v14 )
          ATL::AtlThrowImpl(-2147024882);
        goto LABEL_15;
      }
LABEL_16:
      ;
    }
    v6 = (struct _SID *)((char *)pAce + 8);
    if ( !v26 || &v25 != (char *)v6 )
    {
      v27 = 7;
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v28);
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v29);
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v30);
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v31);
      v26 = 0;
      ATL::CSid::Copy((ATL::CSid *)v24, v6);
      v27 = 8;
    }
    try
    {
      ProcessHeap = GetProcessHeap();
      v8 = (__int64 (__fastcall ***)(_QWORD, __int64))HeapAlloc(ProcessHeap, 0, 0x98uLL);
      v22 = v8;
      if ( v8 )
      {
        v9 = *(_BYTE *)pAce == 0;
        v10 = *((_BYTE *)pAce + 1);
        *v8 = (__int64 (__fastcall **)(_QWORD, __int64))&ATL::CAcl::CAce::`vftable';
        ATL::CSid::CSid((ATL::CSid *)(v8 + 1), (const struct ATL::CSid *)v24);
        *((_DWORD *)v8 + 32) = v5;
        *((_BYTE *)v8 + 132) = v10;
        v8[17] = 0LL;
        *v8 = (__int64 (__fastcall **)(_QWORD, __int64))&ATL::CDacl::CAccessAce::`vftable';
        *((_BYTE *)v8 + 144) = v9;
      }
      else
      {
        v8 = 0LL;
      }
      v15 = (ATL::CDacl::CAccessObjectAce *)v8;
    }
    catch ( ... )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, __int64))v15;
      v3 = v18;
    }
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
LABEL_15:
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
      (_QWORD *)v3 + 3,
      (__int64 *)&v15);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)v3 + 16) = 1;
}
