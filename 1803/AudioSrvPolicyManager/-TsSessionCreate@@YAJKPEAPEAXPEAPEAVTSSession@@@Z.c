/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800254E8
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180027764 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001701C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_dii @ 0x180023CB8 (WPP_SF_dii.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x180023E0C (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180024108 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180025224 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180025410 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18002792C (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002A234 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18002AA4C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TsSessionCreate(DWORD a1, void **a2, struct TSSession **a3)
{
  struct TSSession *v6; // rdi
  unsigned int refreshed; // ebx
  __int64 v8; // r8
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  HANDLE v12; // rax
  _BYTE *v13; // rax
  char *v14; // rdi
  bool v15; // bl
  volatile signed __int32 *v16; // rdx
  HANDLE v18; // rax
  _BYTE *v19; // rax
  bool v20; // bl
  volatile signed __int32 *v21; // rdx
  HANDLE v22; // rax
  _BYTE *v23; // rax
  bool v24; // bl
  volatile signed __int32 *v25; // rdx
  HANDLE v26; // rax
  _BYTE *v27; // rax
  bool v28; // bl
  volatile signed __int32 *v29; // rdx
  HANDLE v30; // rax
  _BYTE *v31; // rax
  bool v32; // bl
  volatile signed __int32 *v33; // rdx
  HANDLE v34; // rax
  _BYTE *v35; // rax
  bool v36; // bl
  volatile signed __int32 *v37; // rdx
  HANDLE v38; // rax
  _BYTE *v39; // rax
  bool v40; // bl
  volatile signed __int32 *v41; // rdx
  volatile signed __int32 *v42; // [rsp+38h] [rbp-49h] BYREF
  volatile signed __int32 *v43; // [rsp+40h] [rbp-41h] BYREF
  volatile signed __int32 *v44; // [rsp+48h] [rbp-39h] BYREF
  volatile signed __int32 *v45; // [rsp+50h] [rbp-31h] BYREF
  volatile signed __int32 *v46; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v47; // [rsp+60h] [rbp-21h] BYREF
  _BYTE *v48; // [rsp+68h] [rbp-19h] BYREF
  _BYTE *v49; // [rsp+70h] [rbp-11h] BYREF
  _BYTE *v50; // [rsp+78h] [rbp-9h] BYREF
  _BYTE *v51; // [rsp+80h] [rbp-1h] BYREF
  _BYTE *v52; // [rsp+88h] [rbp+7h] BYREF
  _BYTE *v53; // [rsp+90h] [rbp+Fh] BYREF
  _QWORD v54[8]; // [rsp+98h] [rbp+17h] BYREF
  void *v55; // [rsp+F0h] [rbp+6Fh]
  struct TSSession *v56; // [rsp+F8h] [rbp+77h] BYREF
  volatile signed __int32 *v57; // [rsp+100h] [rbp+7Fh] BYREF

  v54[1] = -2LL;
  v56 = 0LL;
  v55 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_dd72bf893e0f3e44ea0346400e1f162b_Traceguids, a1);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  TSSession::Create(a1, &v56);
  v6 = v56;
  if ( !v56 )
  {
    refreshed = 14;
    goto LABEL_36;
  }
  if ( !a1 && (int)CVolumeLimitTrackerFactory::CreateInstance((struct IVolumeLimitTracker **)v56 + 31) < 0 )
    goto LABEL_33;
  *((_DWORD *)v6 + 1) = GetTsAudioProtocol(a1);
  *((_DWORD *)v6 + 2) = ++dword_18004F20C;
  refreshed = TsSessionRefreshSessionInformation(v6);
  if ( refreshed )
    goto LABEL_34;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dii(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *((_QWORD *)v6 + 5),
      v8,
      *(_DWORD *)v6,
      *(_QWORD *)(*((_QWORD *)v6 + 5) + 176LL),
      *(_QWORD *)(*((_QWORD *)v6 + 5) + 200LL));
  }
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_33;
  v11[2] = v6;
  *v11 = qword_18004F0E8;
  v11[1] = 0LL;
  if ( qword_18004F0E8 )
    *((_QWORD *)qword_18004F0E8 + 1) = v11;
  else
    qword_18004F0F0 = (__int64)v11;
  qword_18004F0E8 = v11;
  ++dword_18004F0F8;
  TsSessionConsiderForPrimaryConsoleAudioSession(v6);
  if ( a2 )
    *a2 = v11;
  *a3 = v6;
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 0, 0x10uLL);
  if ( v13 )
  {
    *(_DWORD *)v13 = -1047527424;
    v13[4] = 0;
    *((_QWORD *)v13 + 1) = 400000LL;
  }
  else
  {
    v13 = 0LL;
  }
  v55 = v13;
  if ( !v13 )
    goto LABEL_33;
  v49 = v13;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v57,
    (__int64)L"SR");
  v14 = (char *)v6 + 272;
  v15 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v14,
                        &v57,
                        &v49) == 0;
  v16 = v57 - 6;
  if ( _InterlockedDecrement(v57 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  if ( v15 )
    goto LABEL_32;
  v18 = GetProcessHeap();
  v19 = HeapAlloc(v18, 0, 0x10uLL);
  if ( v19 )
  {
    *(_DWORD *)v19 = -1042284544;
    v19[4] = 1;
    *((_QWORD *)v19 + 1) = 400000LL;
  }
  else
  {
    v19 = 0LL;
  }
  v55 = v19;
  if ( !v19 )
    goto LABEL_32;
  v50 = v19;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v42,
    (__int64)L"Comm");
  v20 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v14,
                        &v42,
                        &v50) == 0;
  v21 = v42 - 6;
  if ( _InterlockedDecrement(v42 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 8LL))(*(_QWORD *)v21);
  if ( v20 )
    goto LABEL_32;
  v22 = GetProcessHeap();
  v23 = HeapAlloc(v22, 0, 0x10uLL);
  if ( v23 )
  {
    *(_DWORD *)v23 = -1061158912;
    v23[4] = 0;
    *((_QWORD *)v23 + 1) = 400000LL;
  }
  else
  {
    v23 = 0LL;
  }
  v55 = v23;
  if ( !v23 )
    goto LABEL_32;
  v51 = v23;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v43,
    (__int64)L"1");
  v24 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v14,
                        &v43,
                        &v51) == 0;
  v25 = v43 - 6;
  if ( _InterlockedDecrement(v43 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 8LL))(*(_QWORD *)v25);
  if ( v24 )
    goto LABEL_32;
  v26 = GetProcessHeap();
  v27 = HeapAlloc(v26, 0, 0x10uLL);
  if ( v27 )
  {
    *(_DWORD *)v27 = -1047527424;
    v27[4] = 0;
    *((_QWORD *)v27 + 1) = 400000LL;
  }
  else
  {
    v27 = 0LL;
  }
  v55 = v27;
  if ( !v27 )
    goto LABEL_32;
  v52 = v27;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v44,
    (__int64)L"2");
  v28 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v14,
                        &v44,
                        &v52) == 0;
  v29 = v44 - 6;
  if ( _InterlockedDecrement(v44 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 8LL))(*(_QWORD *)v29);
  if ( v28 )
    goto LABEL_32;
  v30 = GetProcessHeap();
  v31 = HeapAlloc(v30, 0, 0x10uLL);
  if ( v31 )
  {
    *(_DWORD *)v31 = -1042284544;
    v31[4] = 0;
    *((_QWORD *)v31 + 1) = 400000LL;
  }
  else
  {
    v31 = 0LL;
  }
  v55 = v31;
  if ( !v31 )
    goto LABEL_32;
  v53 = v31;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v45,
    (__int64)L"3");
  v32 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v14,
                        &v45,
                        &v53) == 0;
  v33 = v45 - 6;
  if ( _InterlockedDecrement(v45 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v33 + 8LL))(*(_QWORD *)v33);
  if ( v32 )
    goto LABEL_32;
  v34 = GetProcessHeap();
  v35 = HeapAlloc(v34, 0, 0x10uLL);
  v48 = v35;
  if ( v35 )
  {
    *(_DWORD *)v35 = -8388608;
    v35[4] = 0;
    *((_QWORD *)v35 + 1) = 400000LL;
  }
  else
  {
    v35 = 0LL;
  }
  v55 = v35;
  if ( !v35 )
    goto LABEL_32;
  v48 = v35;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v46,
    (__int64)L"4");
  v36 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v14,
                        &v46,
                        &v48) == 0;
  v37 = v46 - 6;
  if ( _InterlockedDecrement(v46 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 8LL))(*(_QWORD *)v37);
  if ( v36 )
    goto LABEL_32;
  v38 = GetProcessHeap();
  v39 = HeapAlloc(v38, 0, 0x10uLL);
  if ( v39 )
  {
    *(_DWORD *)v39 = -1042284544;
    v39[4] = 1;
    *((_QWORD *)v39 + 1) = 400000LL;
  }
  else
  {
    v39 = 0LL;
  }
  v55 = v39;
  if ( !v39 )
    goto LABEL_32;
  v54[0] = v39;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v47,
    (__int64)L"5");
  v40 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v14,
                        &v47,
                        v54) == 0;
  v41 = v47 - 6;
  if ( _InterlockedDecrement(v47 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v41 + 8LL))(*(_QWORD *)v41);
  if ( v40 )
  {
LABEL_32:
    v6 = v56;
LABEL_33:
    refreshed = 14;
    goto LABEL_34;
  }
  v55 = 0LL;
  v6 = 0LL;
  refreshed = 0;
LABEL_34:
  if ( v6 )
  {
    TSSession::~TSSession(v6);
    operator delete(v6, (const struct std::nothrow_t *)0x138);
  }
LABEL_36:
  operator delete(v55, (const struct std::nothrow_t *)0x10);
  return refreshed;
}
