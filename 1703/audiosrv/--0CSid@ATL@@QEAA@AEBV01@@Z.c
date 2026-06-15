/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x180023974
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180024AFC (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002FC54 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800986E8 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 * Callees:
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180022C20 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180098C70 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *__fastcall ATL::CSid::CSid(ATL::CSid *this, const struct ATL::CSid *a2)
{
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  DWORD LengthSid; // eax
  int Error; // eax

  *(_QWORD *)this = &ATL::CSid::`vftable';
  *((_BYTE *)this + 76) = *((_BYTE *)a2 + 76);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_QWORD *)this + 11) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 11) - 24LL) + 24;
  *((_QWORD *)this + 12) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 12) - 24LL) + 24;
  *((_QWORD *)this + 13) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 13) - 24LL) + 24;
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 14) = (char *)NilString + 24;
  if ( *((_BYTE *)a2 + 76) )
  {
    if ( !IsValidSid((char *)a2 + 8) )
      ATL::AtlThrowImpl(-2147024809);
    LengthSid = GetLengthSid((char *)a2 + 8);
    if ( !CopySid(LengthSid, (char *)this + 8, (char *)a2 + 8) )
    {
      Error = ATL::AtlHresultFromLastError();
      ATL::AtlThrowImpl(Error);
    }
  }
  return this;
}
