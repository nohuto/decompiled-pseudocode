/*
 * XREFs of ??0CSid@ATL@@QEAA@XZ @ 0x18007F400
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180080BA0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 */

ATL::CSid *__fastcall ATL::CSid::CSid(ATL::CSid *this)
{
  *((_BYTE *)this + 76) = 0;
  *(_QWORD *)this = &ATL::CSid::`vftable';
  *((_DWORD *)this + 20) = 7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((_QWORD *)this + 11, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((_QWORD *)this + 12, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((_QWORD *)this + 13, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((_QWORD *)this + 14, (__int64)&ATL::g_strmgr);
  return this;
}
