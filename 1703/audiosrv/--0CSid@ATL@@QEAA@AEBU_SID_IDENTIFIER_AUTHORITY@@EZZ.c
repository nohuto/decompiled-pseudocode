/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180023AD4
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?AuthenticatedUser@Sids@ATL@@YA?AVCSid@2@XZ @ 0x180026BF8 (-AuthenticatedUser@Sids@ATL@@YA-AVCSid@2@XZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x180023918 (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180098C8C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *ATL::CSid::CSid(ATL::CSid *this, PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority, UCHAR a3, ...)
{
  DWORD v5; // edi
  UCHAR *p_nSubAuthorityCount; // r14
  DWORD v7; // ebx
  struct _SID Sid[6]; // [rsp+30h] [rbp-88h] BYREF
  UCHAR nSubAuthorityCount; // [rsp+D0h] [rbp+18h] BYREF

  nSubAuthorityCount = a3;
  *(_QWORD *)this = &ATL::CSid::`vftable';
  v5 = 0;
  *((_BYTE *)this + 76) = 0;
  *((_DWORD *)this + 20) = 7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 11,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 12,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 13,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 14,
    (volatile signed __int32 *)&ATL::g_strmgr);
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
      v7 = *(_DWORD *)p_nSubAuthorityCount;
      *GetSidSubAuthority(Sid, v5++) = v7;
    }
    while ( v5 < nSubAuthorityCount );
  }
  ATL::CSid::Copy(this, Sid);
  *((_DWORD *)this + 20) = 8;
  return this;
}
