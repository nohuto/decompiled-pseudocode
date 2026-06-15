/*
 * XREFs of ??0CVADServer@@QEAA@XZ @ 0x180027D84
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002B120 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180017500 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CVADServer *__fastcall CVADServer::CVADServer(CVADServer *this)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v5; // rax

  *((_DWORD *)this + 2) = 0;
  memset((char *)this + 16, 0, 0x28uLL);
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 16) = 0;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CVADServer *)((char *)this + 72));
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_BYTE *)this + 188) = 0;
  *((_QWORD *)this + 24) = 0LL;
  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 25) = (char *)NilString + 24;
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    v5 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v5 = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 26) = (char *)v5 + 24;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 216));
  *((_DWORD *)this + 66) = 0;
  *((GUID *)this + 24) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_BYTE *)this + 440) = 0;
  *((_QWORD *)this + 56) = 0LL;
  memset((char *)this + 272, 0, 0x70uLL);
  *(_QWORD *)((char *)this + 292) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 94) = 0;
  return this;
}
