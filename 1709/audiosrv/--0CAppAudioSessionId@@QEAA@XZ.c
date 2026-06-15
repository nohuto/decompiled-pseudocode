/*
 * XREFs of ??0CAppAudioSessionId@@QEAA@XZ @ 0x1800144D8
 * Callers:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180017500 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 * Callees:
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

CAppAudioSessionId *__fastcall CAppAudioSessionId::CAppAudioSessionId(CAppAudioSessionId *this)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v5; // rax
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v7; // rax
  CAppAudioSessionId *result; // rax

  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *(_QWORD *)this = (char *)NilString + 24;
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    v5 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v5 = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 1) = (char *)v5 + 24;
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    v7 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v7 = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 4) = (char *)v7 + 24;
  result = this;
  *((_DWORD *)this + 10) = 0;
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
