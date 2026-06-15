/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000A7D8
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180009A4C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180040AC4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x18000A668 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800340D0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800B889C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *ATL::CSid::CSid(ATL::CSid *this, PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority, UCHAR a3, ...)
{
  DWORD v5; // esi
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v9; // rax
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v11; // rax
  struct ATL::CStringData *(__fastcall *v12)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v13; // rax
  UCHAR *p_nSubAuthorityCount; // r14
  DWORD v15; // ebx
  struct _SID Sid[6]; // [rsp+30h] [rbp-88h] BYREF
  UCHAR nSubAuthorityCount; // [rsp+D0h] [rbp+18h] BYREF

  nSubAuthorityCount = a3;
  *(_QWORD *)this = &ATL::CSid::`vftable';
  v5 = 0;
  *((_BYTE *)this + 76) = 0;
  *((_DWORD *)this + 20) = 7;
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 11) = (char *)NilString + 24;
  v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v8 == ATL::CAtlStringMgr::GetNilString )
    v9 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v9 = v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 12) = (char *)v9 + 24;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
    v11 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v11 = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 13) = (char *)v11 + 24;
  v12 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v12 == ATL::CAtlStringMgr::GetNilString )
    v13 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v13 = v12((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 14) = (char *)v13 + 24;
  if ( !nSubAuthorityCount || GetSidLengthRequired(nSubAuthorityCount) > 0x44 )
    ATL::AtlThrowImpl(-2147024809);
  if ( !InitializeSid(Sid, pIdentifierAuthority, nSubAuthorityCount) )
    ATL::AtlThrowLastWin32();
  if ( nSubAuthorityCount )
  {
    p_nSubAuthorityCount = &nSubAuthorityCount;
    do
    {
      p_nSubAuthorityCount += 8;
      v15 = *(_DWORD *)p_nSubAuthorityCount;
      *GetSidSubAuthority(Sid, v5++) = v15;
    }
    while ( v5 < nSubAuthorityCount );
  }
  ATL::CSid::Copy(this, Sid);
  *((_DWORD *)this + 20) = 8;
  return this;
}
