/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017938 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180023A88 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180023AD4 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180024AFC (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x180024C04 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180026700 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800267C8 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800268BC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?AuthenticatedUser@Sids@ATL@@YA?AVCSid@2@XZ @ 0x180026BF8 (-AuthenticatedUser@Sids@ATL@@YA-AVCSid@2@XZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  ATL::CSid *v2; // rax
  bool v3; // bl
  const struct ATL::CSid *v4; // rax
  bool v5; // bl
  bool v6; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v8; // rax
  unsigned int v9; // ebx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v13; // [rsp+60h] [rbp-138h] BYREF
  void **v14; // [rsp+68h] [rbp-130h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+70h] [rbp-128h]
  void **v16; // [rsp+78h] [rbp-120h]
  __int64 v17; // [rsp+80h] [rbp-118h]
  struct _SID_IDENTIFIER_AUTHORITY v18[2]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v19[128]; // [rsp+A0h] [rbp-F8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp-78h] BYREF
  char v21; // [rsp+130h] [rbp-68h]
  int v22; // [rsp+134h] [rbp-64h]
  __int64 v23; // [rsp+138h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp-58h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY *v25; // [rsp+150h] [rbp-48h]
  __int64 v26; // [rsp+158h] [rbp-40h]
  int *v27; // [rsp+160h] [rbp-38h]
  __int64 v28; // [rsp+168h] [rbp-30h]

  v17 = -2LL;
  v16 = a1;
  v13 = 0;
  v14 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v18[0].Value = 0;
  *(_WORD *)&v18[0].Value[4] = 1280;
  *(_QWORD *)&pData.Size = 0LL;
  v21 = 0;
  v22 = 2;
  pData.Ptr = (ULONGLONG)&ATL::CDacl::`vftable';
  v23 = 0LL;
  pDesc.Ptr = 0LL;
  *(_QWORD *)&pDesc.Size = 0LL;
  LODWORD(v25) = 0;
  v2 = ATL::CSid::CSid(
         (ATL::CSid *)v19,
         v18,
         6u,
         80LL,
         -1618417719,
         1911656217,
         -1669870755,
         -116925420,
         1366760775,
         0LL,
         0LL);
  v3 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)&pData, v2, 0x10000000) == 0;
  ATL::CSid::~CSid((ATL::CSid *)v19);
  if ( v3
    || (v4 = (const struct ATL::CSid *)ATL::Sids::AuthenticatedUser(v19),
        v5 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)&pData, v4, 4096) == 0,
        ATL::CSid::~CSid((ATL::CSid *)v19),
        v5) )
  {
    v13 = -2147467259;
    ATL::CDacl::~CDacl((ATL::CDacl *)&pData);
  }
  else
  {
    ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v14, (const struct ATL::CDacl *)&pData, v6);
    ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v14);
    ATL::CDacl::~CDacl((ATL::CDacl *)&pData);
    SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
    v8 = operator new(SecurityDescriptorLength);
    *a1 = v8;
    if ( v8 )
      memcpy_0(v8, pSecurityDescriptor, SecurityDescriptorLength);
    else
      v13 = -2147024882;
  }
  operator delete(0LL);
  v9 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
        (unsigned int)v13);
      v9 = v13;
    }
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::GetADGProcessSD");
      *(_DWORD *)v18[0].Value = 225;
      v25 = v18;
      v26 = 4LL;
      v27 = &v13;
      v28 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v11, v12, 5u, &pData);
      v9 = v13;
    }
  }
  v14 = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v14);
  return v9;
}
