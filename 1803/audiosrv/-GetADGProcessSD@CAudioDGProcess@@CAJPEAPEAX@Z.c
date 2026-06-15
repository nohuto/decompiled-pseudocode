/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180009A4C
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18002B4F4 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18000A290 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000A364 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18000A42C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000A5DC (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000A7D8 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18000B120 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18000B238 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  const struct ATL::CSid *v2; // rax
  unsigned __int8 v3; // r9
  bool v4; // bl
  unsigned __int8 v5; // r9
  bool v6; // bl
  bool v7; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // ebx
  int v14; // [rsp+60h] [rbp-128h] BYREF
  void **v15; // [rsp+68h] [rbp-120h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+70h] [rbp-118h]
  void **v17; // [rsp+78h] [rbp-110h]
  __int64 v18; // [rsp+80h] [rbp-108h]
  struct _SID_IDENTIFIER_AUTHORITY v19[2]; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v20[128]; // [rsp+A0h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp-68h] BYREF
  char v22; // [rsp+130h] [rbp-58h]
  int v23; // [rsp+134h] [rbp-54h]
  __int128 v24; // [rsp+138h] [rbp-50h]
  __int64 v25; // [rsp+148h] [rbp-40h]
  struct _SID_IDENTIFIER_AUTHORITY *v26; // [rsp+150h] [rbp-38h]
  __int64 v27; // [rsp+158h] [rbp-30h]
  int *v28; // [rsp+160h] [rbp-28h]
  __int64 v29; // [rsp+168h] [rbp-20h]

  v18 = -2LL;
  v17 = a1;
  v14 = 0;
  v15 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v19[0].Value = 0;
  *(_WORD *)&v19[0].Value[4] = 1280;
  *(_QWORD *)&pData.Size = 0LL;
  v22 = 0;
  v23 = 2;
  pData.Ptr = (ULONGLONG)&ATL::CDacl::`vftable';
  v24 = 0LL;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v2 = (const struct ATL::CSid *)ATL::CSid::CSid(
                                   (ATL::CSid *)v20,
                                   v19,
                                   6u,
                                   80LL,
                                   -1618417719,
                                   1911656217,
                                   -1669870755,
                                   -116925420,
                                   1366760775,
                                   0LL,
                                   0LL);
  v4 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)&pData, v2, 0x10000000u, v3);
  ATL::CSid::~CSid((ATL::CSid *)v20);
  if ( v4
    || (ATL::CSid::CSid((ATL::CSid *)v20, (PSID_IDENTIFIER_AUTHORITY)&ATL::Sids::SecurityNTAuthority, 1u, 11LL),
        v6 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)&pData, (const struct ATL::CSid *)v20, 0x1000u, v5),
        ATL::CSid::~CSid((ATL::CSid *)v20),
        v6) )
  {
    v14 = -2147467259;
    ATL::CDacl::~CDacl((ATL::CDacl *)&pData);
  }
  else
  {
    ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v15, (const struct ATL::CDacl *)&pData, v7);
    ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v15);
    ATL::CDacl::~CDacl((ATL::CDacl *)&pData);
    SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
    v9 = operator new(SecurityDescriptorLength);
    *a1 = v9;
    if ( v9 )
      memcpy_0(v9, pSecurityDescriptor, SecurityDescriptorLength);
    else
      v14 = -2147024882;
  }
  operator delete(0LL);
  v12 = v14;
  if ( v14 < 0 && (unsigned int)dword_1801884D0 > 2 )
  {
    *((_QWORD *)&v24 + 1) = "CAudioDGProcess::GetADGProcessSD";
    v25 = 33LL;
    *(_DWORD *)v19[0].Value = 209;
    v26 = v19;
    v27 = 4LL;
    v28 = &v14;
    v29 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801494DA, v10, v11, 5u, &pData);
    v12 = v14;
  }
  v15 = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v15);
  return v12;
}
