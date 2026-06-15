/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180022900
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180022C20 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800238D0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180049B8A (memset.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(_QWORD *a1)
{
  _QWORD *v1; // r15
  int v2; // r14d
  HANDLE ProcessHeap; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v9; // rax
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v11; // rax
  struct ATL::CStringData *(__fastcall *v12)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v13; // rax
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v15; // rax
  struct ATL::CStringData *(__fastcall *v16)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v17; // rax
  struct ATL::CStringData *(__fastcall *v18)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v19; // rax
  _DWORD *v22; // [rsp+70h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v2 = -2147024882;
  try
  {
    ProcessHeap = GetProcessHeap();
    v4 = HeapAlloc(ProcessHeap, 0, 0x1B0uLL);
    v5 = v4;
    if ( v4 )
    {
      v4[2] = 0;
      memset(v4 + 4, 0, 0x28uLL);
      *((_BYTE *)v5 + 56) = 0;
      v5[16] = 0;
      v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v6 == ATL::CAtlStringMgr::GetNilString )
        NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        NilString = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 9) = (char *)NilString + 24;
      v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v8 == ATL::CAtlStringMgr::GetNilString )
        v9 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v9 = v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 10) = (char *)v9 + 24;
      v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v10 == ATL::CAtlStringMgr::GetNilString )
        v11 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v11 = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 11) = (char *)v11 + 24;
      v12 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v12 == ATL::CAtlStringMgr::GetNilString )
        v13 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v13 = v12((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 14) = (char *)v13 + 24;
      *((GUID *)v5 + 6) = GUID_00000000_0000_0000_0000_000000000000;
      v5[30] = 0;
      v5[33] = -1;
      v5[32] = 0;
      v5[34] = 0;
      v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v14 == ATL::CAtlStringMgr::GetNilString )
        v15 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v15 = v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 18) = (char *)v15 + 24;
      *((_QWORD *)v5 + 19) = 0LL;
      *((_QWORD *)v5 + 20) = 0LL;
      *((_QWORD *)v5 + 21) = 0LL;
      *((_QWORD *)v5 + 22) = 0LL;
      v5[46] = 0;
      *((_BYTE *)v5 + 188) = 0;
      *((_QWORD *)v5 + 24) = 0LL;
      v16 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v16 == ATL::CAtlStringMgr::GetNilString )
        v17 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v17 = v16((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 25) = (char *)v17 + 24;
      v18 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v18 == ATL::CAtlStringMgr::GetNilString )
        v19 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      else
        v19 = v18((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      *((_QWORD *)v5 + 26) = (char *)v19 + 24;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v5 + 54));
      v5[66] = 0;
      *(GUID *)(v5 + 94) = GUID_00000000_0000_0000_0000_000000000000;
      v5[98] = 0;
      *((_QWORD *)v5 + 50) = 0LL;
      *((_QWORD *)v5 + 51) = 0LL;
      *((_QWORD *)v5 + 52) = 0LL;
      *((_QWORD *)v5 + 53) = 0LL;
      memset(v5 + 68, 0, 0x68uLL);
      *(_QWORD *)(v5 + 73) = 0LL;
      v5[72] = 0;
      *(_QWORD *)v5 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v5 = 0LL;
    }
    v22 = v5;
  }
  catch ( ... )
  {
    v1 = a1;
    v2 = -2147024882;
    v5 = v22;
  }
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v2 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v5 + 4));
    if ( v2 >= 0 )
    {
      *((_BYTE *)v5 + 56) = 1;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, v5);
      }
      v2 = 0;
    }
    _InterlockedDecrement(v5 + 2);
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 176LL))(v5, 1LL);
      v5 = 0LL;
    }
  }
  *v1 = v5;
  return (unsigned int)v2;
}
