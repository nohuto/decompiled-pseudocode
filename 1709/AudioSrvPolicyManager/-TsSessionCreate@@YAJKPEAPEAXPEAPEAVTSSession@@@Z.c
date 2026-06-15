/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C164
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18001E3F4 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180010F00 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_dii @ 0x18001AA54 (WPP_SF_dii.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x18001ABA8 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18001AF04 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18001BEA0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001C08C (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18001E5B8 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180020720 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180020F5C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
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
  _QWORD *v16; // rdx
  HANDLE v17; // rax
  _BYTE *v18; // rax
  bool v19; // bl
  _QWORD *v20; // rdx
  HANDLE v21; // rax
  _BYTE *v22; // rax
  bool v23; // bl
  _QWORD *v24; // rdx
  HANDLE v25; // rax
  _BYTE *v26; // rax
  bool v27; // bl
  _QWORD *v28; // rdx
  HANDLE v29; // rax
  _BYTE *v30; // rax
  bool v31; // bl
  _QWORD *v32; // rdx
  HANDLE v33; // rax
  _BYTE *v34; // rax
  bool v35; // bl
  _QWORD *v36; // rdx
  HANDLE v37; // rax
  _BYTE *v38; // rax
  bool v39; // bl
  _QWORD *v40; // rdx
  __int64 v42; // [rsp+38h] [rbp-49h] BYREF
  __int64 v43; // [rsp+40h] [rbp-41h] BYREF
  __int64 v44; // [rsp+48h] [rbp-39h] BYREF
  __int64 v45; // [rsp+50h] [rbp-31h] BYREF
  __int64 v46; // [rsp+58h] [rbp-29h] BYREF
  __int64 v47; // [rsp+60h] [rbp-21h] BYREF
  _BYTE *v48; // [rsp+68h] [rbp-19h] BYREF
  _BYTE *v49; // [rsp+70h] [rbp-11h] BYREF
  _BYTE *v50; // [rsp+78h] [rbp-9h] BYREF
  _BYTE *v51; // [rsp+80h] [rbp-1h] BYREF
  _BYTE *v52; // [rsp+88h] [rbp+7h] BYREF
  _BYTE *v53; // [rsp+90h] [rbp+Fh] BYREF
  _QWORD v54[8]; // [rsp+98h] [rbp+17h] BYREF
  void *v55; // [rsp+F0h] [rbp+6Fh]
  struct TSSession *v56; // [rsp+F8h] [rbp+77h] BYREF
  __int64 v57; // [rsp+100h] [rbp+7Fh] BYREF

  v54[1] = -2LL;
  v56 = 0LL;
  v55 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_20b02ace39a33070fb42b5dc2503046a_Traceguids, a1);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  TSSession::Create(a1, &v56);
  v6 = v56;
  if ( !v56 )
  {
    refreshed = 14;
    goto LABEL_79;
  }
  if ( a1 || (int)CVolumeLimitTrackerFactory::CreateInstance((struct IVolumeLimitTracker **)v56 + 31) >= 0 )
  {
    *((_DWORD *)v6 + 1) = GetTsAudioProtocol(a1);
    *((_DWORD *)v6 + 2) = ++dword_18003AF50;
    refreshed = TsSessionRefreshSessionInformation(v6);
    if ( refreshed )
      goto LABEL_77;
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
    if ( v11 )
    {
      v11[2] = v6;
      *v11 = qword_18003AE48;
      v11[1] = 0LL;
      if ( qword_18003AE48 )
        *((_QWORD *)qword_18003AE48 + 1) = v11;
      else
        qword_18003AE50 = (__int64)v11;
      qword_18003AE48 = v11;
      ++dword_18003AE58;
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
      if ( v13 )
      {
        v49 = v13;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          &v57,
          (char *)L"SR");
        v14 = (char *)v6 + 272;
        v15 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              v14,
                              &v57,
                              &v49) == 0;
        v16 = (_QWORD *)(v57 - 24);
        if ( _InterlockedDecrement((volatile signed __int32 *)(v57 - 24 + 16)) <= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
        if ( !v15 )
        {
          v17 = GetProcessHeap();
          v18 = HeapAlloc(v17, 0, 0x10uLL);
          if ( v18 )
          {
            *(_DWORD *)v18 = -1042284544;
            v18[4] = 1;
            *((_QWORD *)v18 + 1) = 400000LL;
          }
          else
          {
            v18 = 0LL;
          }
          v55 = v18;
          if ( v18 )
          {
            v50 = v18;
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
              &v42,
              (char *)L"Comm");
            v19 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                  v14,
                                  &v42,
                                  &v50) == 0;
            v20 = (_QWORD *)(v42 - 24);
            if ( _InterlockedDecrement((volatile signed __int32 *)(v42 - 24 + 16)) <= 0 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 8LL))(*v20);
            if ( !v19 )
            {
              v21 = GetProcessHeap();
              v22 = HeapAlloc(v21, 0, 0x10uLL);
              if ( v22 )
              {
                *(_DWORD *)v22 = -1061158912;
                v22[4] = 0;
                *((_QWORD *)v22 + 1) = 400000LL;
              }
              else
              {
                v22 = 0LL;
              }
              v55 = v22;
              if ( v22 )
              {
                v51 = v22;
                ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                  &v43,
                  (char *)L"1");
                v23 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                      v14,
                                      &v43,
                                      &v51) == 0;
                v24 = (_QWORD *)(v43 - 24);
                if ( _InterlockedDecrement((volatile signed __int32 *)(v43 - 24 + 16)) <= 0 )
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 8LL))(*v24);
                if ( !v23 )
                {
                  v25 = GetProcessHeap();
                  v26 = HeapAlloc(v25, 0, 0x10uLL);
                  if ( v26 )
                  {
                    *(_DWORD *)v26 = -1047527424;
                    v26[4] = 0;
                    *((_QWORD *)v26 + 1) = 400000LL;
                  }
                  else
                  {
                    v26 = 0LL;
                  }
                  v55 = v26;
                  if ( v26 )
                  {
                    v52 = v26;
                    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                      &v44,
                      (char *)L"2");
                    v27 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                          v14,
                                          &v44,
                                          &v52) == 0;
                    v28 = (_QWORD *)(v44 - 24);
                    if ( _InterlockedDecrement((volatile signed __int32 *)(v44 - 24 + 16)) <= 0 )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 8LL))(*v28);
                    if ( !v27 )
                    {
                      v29 = GetProcessHeap();
                      v30 = HeapAlloc(v29, 0, 0x10uLL);
                      if ( v30 )
                      {
                        *(_DWORD *)v30 = -1042284544;
                        v30[4] = 0;
                        *((_QWORD *)v30 + 1) = 400000LL;
                      }
                      else
                      {
                        v30 = 0LL;
                      }
                      v55 = v30;
                      if ( v30 )
                      {
                        v53 = v30;
                        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                          &v45,
                          (char *)L"3");
                        v31 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                              v14,
                                              &v45,
                                              &v53) == 0;
                        v32 = (_QWORD *)(v45 - 24);
                        if ( _InterlockedDecrement((volatile signed __int32 *)(v45 - 24 + 16)) <= 0 )
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v32 + 8LL))(*v32);
                        if ( !v31 )
                        {
                          v33 = GetProcessHeap();
                          v34 = HeapAlloc(v33, 0, 0x10uLL);
                          v48 = v34;
                          if ( v34 )
                          {
                            *(_DWORD *)v34 = -8388608;
                            v34[4] = 0;
                            *((_QWORD *)v34 + 1) = 400000LL;
                          }
                          else
                          {
                            v34 = 0LL;
                          }
                          v55 = v34;
                          if ( v34 )
                          {
                            v48 = v34;
                            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                              &v46,
                              (char *)L"4");
                            v35 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                                  v14,
                                                  &v46,
                                                  &v48) == 0;
                            v36 = (_QWORD *)(v46 - 24);
                            if ( _InterlockedDecrement((volatile signed __int32 *)(v46 - 24 + 16)) <= 0 )
                              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v36 + 8LL))(*v36);
                            if ( !v35 )
                            {
                              v37 = GetProcessHeap();
                              v38 = HeapAlloc(v37, 0, 0x10uLL);
                              if ( v38 )
                              {
                                *(_DWORD *)v38 = -1042284544;
                                v38[4] = 1;
                                *((_QWORD *)v38 + 1) = 400000LL;
                              }
                              else
                              {
                                v38 = 0LL;
                              }
                              v55 = v38;
                              if ( v38 )
                              {
                                v54[0] = v38;
                                ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                                  &v47,
                                  (char *)L"5");
                                v39 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                                      v14,
                                                      &v47,
                                                      v54) == 0;
                                v40 = (_QWORD *)(v47 - 24);
                                if ( _InterlockedDecrement((volatile signed __int32 *)(v47 - 24 + 16)) <= 0 )
                                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 8LL))(*v40);
                                if ( !v39 )
                                {
                                  v55 = 0LL;
                                  v6 = 0LL;
                                  refreshed = 0;
                                  goto LABEL_77;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v6 = v56;
      }
    }
  }
  refreshed = 14;
LABEL_77:
  if ( v6 )
  {
    TSSession::~TSSession(v6);
    operator delete(v6, (const struct std::nothrow_t *)0x138);
  }
LABEL_79:
  operator delete(v55, (const struct std::nothrow_t *)0x10);
  return refreshed;
}
