/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180040530
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180040AC4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18004103C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000A5DC (--1CSid@ATL@@UEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030B78 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800340D0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1800340E0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ??0CSid@ATL@@QEAA@XZ @ 0x180040410 (--0CSid@ATL@@QEAA@XZ.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180043F3C (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x1800991AC (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x1800992A0 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800B80E4 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800B8880 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800B889C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // r13
  DWORD v4; // r15d
  unsigned int v5; // esi
  char *v6; // rbx
  int *v7; // rcx
  __int64 v8; // rdi
  int *v9; // rcx
  __int64 v10; // rdi
  int *v11; // rcx
  __int64 v12; // rdi
  int *v13; // rcx
  __int64 v14; // rdi
  DWORD LengthSid; // eax
  HANDLE ProcessHeap; // rax
  _QWORD *v17; // rbx
  bool v18; // r12
  volatile signed __int32 *v19; // rdi
  ATL::CAtlStringMgr *v20; // rcx
  __int64 (*v21)(void); // rax
  struct ATL::IAtlStringMgr *v22; // rcx
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rdi
  ATL::CAtlStringMgr *v25; // rcx
  __int64 (*v26)(void); // rax
  struct ATL::IAtlStringMgr *v27; // rcx
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rdi
  ATL::CAtlStringMgr *v30; // rcx
  __int64 (*v31)(void); // rax
  struct ATL::IAtlStringMgr *v32; // rcx
  volatile signed __int32 *v33; // rsi
  struct ATL::CStringData *(__fastcall *v34)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  DWORD v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  size_t v39; // rdx
  size_t v40; // rsi
  size_t v41; // r14
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r9
  void *v45; // rsi
  void *v46; // rcx
  size_t v47; // r8
  void *v48; // rax
  const struct _GUID *v49; // rdi
  const struct _GUID *v50; // rbx
  struct _SID *v51; // rdx
  int v52; // r9d
  __int64 v53; // rbx
  ATL::CDacl::CAccessObjectAce *v54; // rax
  __int64 v55; // rax
  int Error; // eax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r9
  void *v61; // rcx
  size_t v62; // r8
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r9
  void *v67; // rcx
  size_t v68; // r8
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r9
  void *v73; // rcx
  size_t v74; // r8
  int v75; // eax
  char v76; // [rsp+41h] [rbp-127h]
  DWORD i; // [rsp+44h] [rbp-124h]
  _QWORD *v78; // [rsp+48h] [rbp-120h] BYREF
  int v79; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v80; // [rsp+54h] [rbp-114h]
  LPVOID pAce; // [rsp+58h] [rbp-110h] BYREF
  ATL::CDacl *v82; // [rsp+60h] [rbp-108h]
  char *v83; // [rsp+68h] [rbp-100h]
  PACL pAcl; // [rsp+70h] [rbp-F8h]
  __int64 v85; // [rsp+78h] [rbp-F0h]
  ATL::CDacl::CAccessObjectAce *v86; // [rsp+80h] [rbp-E8h]
  _QWORD *v87; // [rsp+88h] [rbp-E0h]
  char *v88; // [rsp+90h] [rbp-D8h]
  char v89[8]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE pDestinationSid[68]; // [rsp+A8h] [rbp-C0h] BYREF
  char v91; // [rsp+ECh] [rbp-7Ch]
  int v92; // [rsp+F0h] [rbp-78h]
  void *Src; // [rsp+F8h] [rbp-70h] BYREF
  void *v94; // [rsp+100h] [rbp-68h] BYREF
  void *v95; // [rsp+108h] [rbp-60h] BYREF
  __int64 v96; // [rsp+110h] [rbp-58h] BYREF
  DWORD pAclInformation[4]; // [rsp+120h] [rbp-48h] BYREF

  v85 = -2LL;
  v3 = this;
  v82 = this;
  pAcl = a2;
  if ( a2 )
  {
    ATL::CSid::CSid((ATL::CSid *)v89);
    v78 = 0LL;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    if ( !GetAclInformation(a2, &v79, 4u, AclRevisionInformation) )
      ATL::AtlThrowLastWin32();
    *((_DWORD *)v3 + 5) = v79;
    v4 = 0;
    for ( i = 0; ; i = v4 )
    {
      if ( v4 >= pAclInformation[0] )
      {
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v78);
        ATL::CSid::~CSid((ATL::CSid *)v89);
        return;
      }
      if ( !GetAce(pAcl, v4, &pAce) )
        ATL::AtlThrowLastWin32();
      v5 = *((_DWORD *)pAce + 1);
      v80 = v5;
      if ( *(_BYTE *)pAce > 1u )
      {
        if ( (unsigned __int8)(*(_BYTE *)pAce - 5) <= 1u )
        {
          v49 = 0LL;
          v50 = 0LL;
          v51 = (struct _SID *)((char *)pAce + 44);
          v52 = *((_DWORD *)pAce + 2);
          if ( (v52 & 1) != 0 )
            v49 = (const struct _GUID *)((char *)pAce + 12);
          else
            v51 = (struct _SID *)((char *)pAce + 28);
          if ( (v52 & 2) != 0 )
          {
            v53 = 28LL;
            if ( !v49 )
              v53 = 12LL;
            v50 = (const struct _GUID *)((char *)pAce + v53);
          }
          else
          {
            v51 = (struct _SID *)((char *)v51 - 16);
          }
          ATL::CSid::operator=((ATL::CSid *)v89, v51);
          try
          {
            v54 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
            v86 = v54;
            if ( v54 )
              v55 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                      v54,
                      (const struct ATL::CSid *)v89,
                      v5,
                      *((_BYTE *)pAce + 1),
                      *(_BYTE *)pAce == 5,
                      v49,
                      v50);
            else
              v55 = 0LL;
            v78 = (_QWORD *)v55;
          }
          catch ( ... )
          {
            v55 = (__int64)v78;
            v3 = v82;
            v4 = i;
          }
          if ( !v55 )
            ATL::AtlThrowImpl(-2147024882);
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
            (char *)v3 + 24,
            &v78);
        }
        goto LABEL_56;
      }
      v6 = (char *)pAce + 8;
      if ( !v91 || pDestinationSid != v6 )
      {
        v92 = 7;
        v7 = (int *)((char *)Src - 24);
        v8 = *((_QWORD *)Src - 3);
        if ( *((_DWORD *)Src - 4) )
        {
          if ( v7[4] >= 0 )
          {
            ATL::CStringData::Release((ATL::CStringData *)v7);
            Src = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) + 24);
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Src, 0);
          }
        }
        v9 = (int *)((char *)v94 - 24);
        v10 = *((_QWORD *)v94 - 3);
        if ( *((_DWORD *)v94 - 4) )
        {
          if ( v9[4] >= 0 )
          {
            ATL::CStringData::Release((ATL::CStringData *)v9);
            v94 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) + 24);
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v94, 0);
          }
        }
        v11 = (int *)((char *)v95 - 24);
        v12 = *((_QWORD *)v95 - 3);
        if ( *((_DWORD *)v95 - 4) )
        {
          if ( v11[4] >= 0 )
          {
            ATL::CStringData::Release((ATL::CStringData *)v11);
            v95 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) + 24);
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v95, 0);
          }
        }
        v13 = (int *)(v96 - 24);
        v14 = *(_QWORD *)(v96 - 24);
        if ( *(_DWORD *)(v96 - 24 + 8) )
        {
          if ( v13[4] >= 0 )
          {
            ATL::CStringData::Release((ATL::CStringData *)v13);
            v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) + 24;
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength(&v96, 0);
          }
        }
        v91 = 0;
        if ( !IsValidSid(v6) )
          ATL::AtlThrowImpl(-2147024809);
        LengthSid = GetLengthSid(v6);
        if ( LengthSid > 0x44 )
          ATL::AtlThrowImpl(-2147024809);
        v91 = 1;
        if ( !CopySid(LengthSid, pDestinationSid, v6) )
        {
          Error = ATL::AtlHresultFromLastError();
          v91 = 0;
          ATL::AtlThrowImpl(Error);
        }
        v92 = 8;
      }
      try
      {
        ProcessHeap = GetProcessHeap();
        v17 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
        v87 = v17;
        if ( v17 )
        {
          v18 = *(_BYTE *)pAce == 0;
          v76 = *((_BYTE *)pAce + 1);
          *v17 = &ATL::CAcl::CAce::`vftable';
          v88 = (char *)(v17 + 1);
          v17[1] = &ATL::CSid::`vftable';
          *((_BYTE *)v17 + 84) = v91;
          *((_DWORD *)v17 + 22) = v92;
          v83 = (char *)(v17 + 12);
          v19 = (volatile signed __int32 *)Src;
          v20 = (ATL::CAtlStringMgr *)*((_QWORD *)Src - 3);
          v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 32LL);
          if ( (char *)v21 == (char *)ATL::CAtlStringMgr::Clone )
            v22 = ATL::CAtlStringMgr::Clone(v20);
          else
            v22 = (struct ATL::IAtlStringMgr *)v21();
          if ( *((int *)v19 - 2) >= 0 && v22 == *((struct ATL::IAtlStringMgr **)v19 - 3) )
          {
            v23 = v19 - 6;
            _InterlockedIncrement(v19 - 2);
            goto LABEL_24;
          }
          v57 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v22)(
                  v22,
                  *((unsigned int *)v19 - 4),
                  2LL);
          v23 = (volatile signed __int32 *)v57;
          if ( !v57 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v59, v58);
          *(_DWORD *)(v57 + 8) = *((_DWORD *)v19 - 4);
          v61 = (void *)(v57 + 24);
          v62 = 2LL * (*((_DWORD *)v19 - 4) + 1);
          if ( v62 )
          {
            if ( v57 != -24 )
            {
              if ( v19 )
              {
                memcpy_0(v61, (const void *)v19, v62);
                goto LABEL_24;
              }
              memset_0(v61, 0, v62);
            }
            *(_DWORD *)_o__errno(v61, v58, v62, v60) = 22;
            invalid_parameter_noinfo();
          }
LABEL_24:
          v17[12] = v23 + 6;
          v83 = (char *)(v17 + 13);
          v24 = (volatile signed __int32 *)v94;
          v25 = (ATL::CAtlStringMgr *)*((_QWORD *)v94 - 3);
          v26 = *(__int64 (**)(void))(*(_QWORD *)v25 + 32LL);
          if ( (char *)v26 == (char *)ATL::CAtlStringMgr::Clone )
            v27 = ATL::CAtlStringMgr::Clone(v25);
          else
            v27 = (struct ATL::IAtlStringMgr *)v26();
          if ( *((int *)v24 - 2) >= 0 && v27 == *((struct ATL::IAtlStringMgr **)v24 - 3) )
          {
            v28 = v24 - 6;
            _InterlockedIncrement(v24 - 2);
            goto LABEL_29;
          }
          v63 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v27)(
                  v27,
                  *((unsigned int *)v24 - 4),
                  2LL);
          v28 = (volatile signed __int32 *)v63;
          if ( !v63 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v65, v64);
          *(_DWORD *)(v63 + 8) = *((_DWORD *)v24 - 4);
          v67 = (void *)(v63 + 24);
          v68 = 2LL * (*((_DWORD *)v24 - 4) + 1);
          if ( v68 )
          {
            if ( v63 != -24 )
            {
              if ( v24 )
              {
                memcpy_0(v67, (const void *)v24, v68);
                goto LABEL_29;
              }
              memset_0(v67, 0, v68);
            }
            *(_DWORD *)_o__errno(v67, v64, v68, v66) = 22;
            invalid_parameter_noinfo();
          }
LABEL_29:
          v17[13] = v28 + 6;
          v83 = (char *)(v17 + 14);
          v29 = (volatile signed __int32 *)v95;
          v30 = (ATL::CAtlStringMgr *)*((_QWORD *)v95 - 3);
          v31 = *(__int64 (**)(void))(*(_QWORD *)v30 + 32LL);
          if ( (char *)v31 == (char *)ATL::CAtlStringMgr::Clone )
            v32 = ATL::CAtlStringMgr::Clone(v30);
          else
            v32 = (struct ATL::IAtlStringMgr *)v31();
          if ( *((int *)v29 - 2) >= 0 && v32 == *((struct ATL::IAtlStringMgr **)v29 - 3) )
          {
            v33 = v29 - 6;
            _InterlockedIncrement(v29 - 2);
            goto LABEL_34;
          }
          v69 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v32)(
                  v32,
                  *((unsigned int *)v29 - 4),
                  2LL);
          v33 = (volatile signed __int32 *)v69;
          if ( !v69 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v71, v70);
          *(_DWORD *)(v69 + 8) = *((_DWORD *)v29 - 4);
          v73 = (void *)(v69 + 24);
          v74 = 2LL * (*((_DWORD *)v29 - 4) + 1);
          if ( v74 )
          {
            if ( v69 != -24 )
            {
              if ( v29 )
              {
                memcpy_0(v73, (const void *)v29, v74);
                goto LABEL_34;
              }
              memset_0(v73, 0, v74);
            }
            *(_DWORD *)_o__errno(v73, v70, v74, v72) = 22;
            invalid_parameter_noinfo();
          }
LABEL_34:
          v17[14] = v33 + 6;
          v34 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24);
          if ( v34 == ATL::CAtlStringMgr::GetNilString )
            NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
          else
            NilString = v34((ATL::CAtlStringMgr *)&ATL::g_strmgr);
          v17[15] = (char *)NilString + 24;
          if ( v91 )
          {
            if ( !IsValidSid(pDestinationSid) )
              ATL::AtlThrowImpl(-2147024809);
            v36 = GetLengthSid(pDestinationSid);
            if ( !CopySid(v36, v17 + 2, pDestinationSid) )
            {
              v75 = ATL::AtlHresultFromLastError();
              ATL::AtlThrowImpl(v75);
            }
          }
          *((_DWORD *)v17 + 32) = v80;
          *((_BYTE *)v17 + 132) = v76;
          v17[17] = 0LL;
          *v17 = &ATL::CDacl::CAccessAce::`vftable';
          *((_BYTE *)v17 + 144) = v18;
          v4 = i;
        }
        else
        {
          v17 = 0LL;
        }
        v78 = v17;
      }
      catch ( ... )
      {
        v17 = v78;
        v3 = v82;
        v4 = i;
      }
      if ( !v17 )
        ATL::AtlThrowImpl(-2147024882);
      v37 = *((_QWORD *)v3 + 4);
      v38 = *((_QWORD *)v3 + 5);
      if ( v37 >= v38 )
      {
        v39 = v37 + 1;
        if ( v37 + 1 > v38 )
        {
          v40 = *((int *)v3 + 12);
          if ( *((_QWORD *)v3 + 3) )
          {
            if ( !*((_DWORD *)v3 + 12) )
            {
              v40 = v38 >> 1;
              if ( v39 - v38 > v38 >> 1 )
                v40 = v39 - v38;
            }
            v41 = v40 + v38;
            if ( v39 >= v40 + v38 )
              v41 = v37 + 1;
            v42 = calloc(v41, 8uLL);
            v45 = v42;
            if ( !v42 )
              goto LABEL_134;
            v46 = (void *)*((_QWORD *)v3 + 3);
            v47 = 8LL * *((_QWORD *)v3 + 4);
            if ( v47 )
            {
              if ( !v46 )
              {
                *(_DWORD *)_o__errno(0LL, v43, v47, v44) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove(v42, *((const void **)v3 + 3), v47);
              v46 = (void *)*((_QWORD *)v3 + 3);
            }
            free(v46);
            *((_QWORD *)v3 + 3) = v45;
            *((_QWORD *)v3 + 5) = v41;
          }
          else
          {
            if ( v40 <= v39 )
              v40 = v37 + 1;
            v48 = calloc(v40, 8uLL);
            *((_QWORD *)v3 + 3) = v48;
            if ( !v48 )
LABEL_134:
              ATL::AtlThrowImpl(-2147024882);
            *((_QWORD *)v3 + 5) = v40;
          }
        }
      }
      v78 = 0LL;
      *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v37) = v17;
      ++*((_QWORD *)v3 + 4);
LABEL_56:
      ++v4;
    }
  }
  (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)v3 + 16) = 1;
}
