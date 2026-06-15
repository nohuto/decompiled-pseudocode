/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180032340
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180017218 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006339C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800B505C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(CVADServer **a1)
{
  CVADServer **v1; // r13
  unsigned int v3; // r12d
  HANDLE ProcessHeap; // rax
  CVADServer *v5; // rax
  volatile int *v6; // rdx
  CVADServer *v7; // rbx
  char *v8; // rax
  char *v9; // r14
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v11; // r15
  __int64 *v12; // rax
  char *v13; // rsi
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v15; // rax
  struct ATL::CStringData *(__fastcall *v16)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v17; // rax
  struct ATL::CStringData *(__fastcall *v18)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v19; // rax
  _QWORD *v20; // r14
  struct ATL::CStringData *(__fastcall *v21)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v22; // rax
  _QWORD *v23; // rsi
  struct ATL::CStringData *(__fastcall *v24)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v25; // rax
  _QWORD *v26; // rsi
  struct ATL::CStringData *(__fastcall *v27)(ATL::CAtlStringMgr *__hidden); // rax
  int v28; // eax
  __int64 v29; // [rsp+0h] [rbp-F8h] BYREF
  char *v30; // [rsp+20h] [rbp-D8h]
  CVADServer *v31; // [rsp+28h] [rbp-D0h]
  _QWORD *v32; // [rsp+30h] [rbp-C8h]
  _QWORD *v33; // [rsp+38h] [rbp-C0h]
  _QWORD *v34; // [rsp+40h] [rbp-B8h]
  _QWORD *v35; // [rsp+48h] [rbp-B0h]
  _QWORD *v36; // [rsp+50h] [rbp-A8h]
  __int64 v37; // [rsp+58h] [rbp-A0h]
  __int64 v38; // [rsp+60h] [rbp-98h]
  char *v39; // [rsp+68h] [rbp-90h]
  char *v40; // [rsp+70h] [rbp-88h]
  __int64 *v41; // [rsp+78h] [rbp-80h]
  __int64 *v42; // [rsp+80h] [rbp-78h]
  __int64 *v43; // [rsp+88h] [rbp-70h]
  __int64 *v44; // [rsp+90h] [rbp-68h]
  char *v45; // [rsp+98h] [rbp-60h]
  __int64 *v46; // [rsp+A0h] [rbp-58h]
  char *v47; // [rsp+A8h] [rbp-50h]
  __int64 *v48; // [rsp+B0h] [rbp-48h]
  CVADServer *v50; // [rsp+110h] [rbp+18h]
  char *v51; // [rsp+118h] [rbp+20h]

  v38 = -2LL;
  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  v31 = 0LL;
  try
  {
    ProcessHeap = GetProcessHeap();
    v5 = (CVADServer *)HeapAlloc(ProcessHeap, 0, 0x1F0uLL);
    v7 = v5;
    v50 = v5;
    if ( v5 )
    {
      v8 = (char *)v5 + 8;
      v39 = v8;
      *(_DWORD *)v8 = 0;
      v8 += 8;
      v40 = v8;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      v8[40] = 0;
      *((_DWORD *)v7 + 16) = 0;
      v9 = (char *)v7 + 72;
      v51 = (char *)v7 + 72;
      v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v10 == ATL::CAtlStringMgr::GetNilString )
      {
        _InterlockedIncrement(&dword_18018AA50);
        v11 = &qword_18018AA40;
        v12 = &qword_18018AA40;
        v7 = v50;
        v9 = v51;
      }
      else
      {
        v12 = (__int64 *)v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
        v11 = &qword_18018AA40;
      }
      v41 = v12;
      *(_QWORD *)v9 = v12 + 3;
      v13 = v9 + 8;
      v30 = v9 + 8;
      v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v14 == ATL::CAtlStringMgr::GetNilString )
      {
        _InterlockedIncrement(&dword_18018AA50);
        v15 = &qword_18018AA40;
        v7 = v50;
        v9 = v51;
        v13 = v30;
      }
      else
      {
        v15 = (__int64 *)v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      }
      v42 = v15;
      *(_QWORD *)v13 = v15 + 3;
      v32 = v13 + 8;
      v16 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v16 == ATL::CAtlStringMgr::GetNilString )
      {
        _InterlockedIncrement(&dword_18018AA50);
        v17 = &qword_18018AA40;
        v7 = v50;
        v9 = v51;
        v13 = v30;
      }
      else
      {
        v17 = (__int64 *)v16((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      }
      v43 = v17;
      *v32 = v17 + 3;
      v33 = v13 + 32;
      v18 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v18 == ATL::CAtlStringMgr::GetNilString )
      {
        _InterlockedIncrement(&dword_18018AA50);
        v19 = &qword_18018AA40;
        v7 = v50;
        v9 = v51;
        v13 = v30;
      }
      else
      {
        v19 = (__int64 *)v18((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      }
      v44 = v19;
      *v33 = v19 + 3;
      *((GUID *)v13 + 1) = GUID_00000000_0000_0000_0000_000000000000;
      *((_DWORD *)v13 + 10) = 0;
      v45 = v9 + 56;
      *((_DWORD *)v9 + 15) = -1;
      *((_DWORD *)v9 + 14) = 0;
      *((_DWORD *)v9 + 16) = 0;
      v20 = v9 + 72;
      v34 = v20;
      v21 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v21 == ATL::CAtlStringMgr::GetNilString )
      {
        _InterlockedIncrement(&dword_18018AA50);
        v22 = &qword_18018AA40;
        v7 = v50;
        v20 = v34;
      }
      else
      {
        v22 = (__int64 *)v21((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      }
      v46 = v22;
      *v20 = v22 + 3;
      *((_QWORD *)v7 + 19) = 0LL;
      *((_QWORD *)v7 + 20) = 0LL;
      *((_QWORD *)v7 + 21) = 0LL;
      v47 = (char *)v7 + 176;
      *((_QWORD *)v7 + 22) = 0LL;
      *((_DWORD *)v7 + 46) = 0;
      *((_BYTE *)v7 + 188) = 0;
      *((_QWORD *)v7 + 24) = 0LL;
      *((_BYTE *)v7 + 200) = 1;
      v23 = (_QWORD *)((char *)v7 + 208);
      v35 = (_QWORD *)((char *)v7 + 208);
      v24 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v24 == ATL::CAtlStringMgr::GetNilString )
      {
        _InterlockedIncrement(&dword_18018AA50);
        v25 = &qword_18018AA40;
        v7 = v50;
        v23 = v35;
      }
      else
      {
        v25 = (__int64 *)v24((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      }
      v48 = v25;
      *v23 = v25 + 3;
      v26 = (_QWORD *)((char *)v7 + 216);
      v36 = (_QWORD *)((char *)v7 + 216);
      v27 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
      if ( v27 == ATL::CAtlStringMgr::GetNilString )
      {
        _InterlockedIncrement(&dword_18018AA50);
        v7 = v50;
        v26 = v36;
      }
      else
      {
        v11 = (__int64 *)v27((ATL::CAtlStringMgr *)&ATL::g_strmgr);
      }
      *v26 = v11 + 3;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v7 + 224));
      *((_DWORD *)v7 + 68) = 0;
      *((GUID *)v7 + 25) = GUID_00000000_0000_0000_0000_000000000000;
      *((_DWORD *)v7 + 104) = 0;
      *((_QWORD *)v7 + 53) = 0LL;
      *((_QWORD *)v7 + 54) = 0LL;
      *((_QWORD *)v7 + 55) = 0LL;
      v37 = 0LL;
      *((_QWORD *)v7 + 56) = 0LL;
      *((_BYTE *)v7 + 456) = 0;
      *((_QWORD *)v7 + 58) = 0LL;
      *((_QWORD *)v7 + 60) = 0LL;
      *((_QWORD *)v7 + 59) = 0LL;
      QueryPerformanceFrequency((LARGE_INTEGER *)v7 + 61);
      memset_0((char *)v7 + 280, 0, 0x78uLL);
      *((_DWORD *)v7 + 75) = 0;
      *((_DWORD *)v7 + 76) = 0;
      *((_DWORD *)v7 + 74) = 0;
      *((_DWORD *)v7 + 96) = 0;
      *(_QWORD *)v7 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v31 = v7;
  }
  catch ( ... )
  {
    v6 = (volatile int *)&v29;
    v1 = a1;
    v3 = -2147024882;
    v7 = v31;
  }
  if ( v7 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CVADServer *)((char *)v7 + 8), v6);
    v28 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v7 + 16));
    if ( v28 >= 0 )
    {
      *((_BYTE *)v7 + 56) = 1;
      v28 = 0;
    }
    v3 = 0;
    if ( v28 < 0 )
      v3 = v28;
    CVADServer::InternalFinalConstructRelease(v7);
    if ( v3 )
    {
      (*(void (__fastcall **)(CVADServer *, __int64))(*(_QWORD *)v7 + 232LL))(v7, 1LL);
      v7 = 0LL;
    }
  }
  *v1 = v7;
  return v3;
}
