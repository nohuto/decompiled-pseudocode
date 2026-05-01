/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800EA6D0
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800EA390 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1800E8014 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1800EB334 (--1-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        RTL_SRWLOCK *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  int SortedAppList; // eax
  int v4; // ebx
  HRESULT v5; // eax
  int ActivationFactory; // eax
  HRESULT v7; // eax
  HSTRING v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  int v11; // eax
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // rsi
  HRESULT v16; // eax
  HSTRING v17; // rbx
  struct Windows::Data::Json::IJsonObject *v18; // rcx
  const WCHAR *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  struct Windows::Data::Json::IJsonObject *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  struct Windows::Data::Json::IJsonObject *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  struct Windows::Data::Json::IJsonObject *v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  struct Windows::Data::Json::IJsonObject *v36; // rbx
  __int64 v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rdx
  struct Windows::Data::Json::IJsonObject *v41; // rbx
  __int64 v42; // rax
  int v43; // eax
  __int64 (__fastcall ***v44)(_QWORD, GUID *, _QWORD); // rcx
  __int64 v45; // rcx
  struct Windows::Data::Json::IJsonObject *v46; // rcx
  __int64 v47; // rdx
  __int64 (__fastcall ***v48)(_QWORD, GUID *, _QWORD); // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct Windows::Data::Json::IJsonObject *v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  HRESULT v54; // eax
  unsigned __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 (__fastcall ***v58)(_QWORD, GUID *, _QWORD *); // rcx
  _QWORD *v59; // rcx
  __int64 v61; // [rsp+28h] [rbp-69h] BYREF
  struct Windows::Data::Json::IJsonObject *v62; // [rsp+30h] [rbp-61h] BYREF
  _QWORD *v63; // [rsp+38h] [rbp-59h] BYREF
  __int64 (__fastcall ***v64)(_QWORD, GUID *, _QWORD); // [rsp+40h] [rbp-51h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, GUID *, struct Windows::Data::Json::IJsonObject **); // [rsp+48h] [rbp-49h] BYREF
  struct Windows::Data::Json::IJsonObject *v66; // [rsp+50h] [rbp-41h] BYREF
  struct Windows::Data::Json::IJsonObject *v67; // [rsp+58h] [rbp-39h] BYREF
  __int64 v68; // [rsp+60h] [rbp-31h] BYREF
  __int128 v69; // [rsp+68h] [rbp-29h] BYREF
  __int64 v70; // [rsp+78h] [rbp-19h]
  const WCHAR *v71[2]; // [rsp+80h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-1h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v71[1] = (const WCHAR *)-2LL;
  *a2 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(
                    this,
                    (bool (__fastcall *)(RTL_SRWLOCK **, RTL_SRWLOCK **))&v69);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2CB,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    goto LABEL_112;
  }
  v63 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v63);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v65 = 0LL;
    string = 0LL;
    v7 = WindowsCreateStringReference(L"Windows.Data.Json.JsonArray", 0x1Bu, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = string;
    v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v65;
    if ( v65 )
    {
      v65 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
    }
    v65 = 0LL;
    v4 = RoActivateInstance(v8, &v64);
    if ( v4 < 0
      || (*(_QWORD *)&GUID_08c1ddb6_0cbd_4a9a_b5d3_2f852dc37e81.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
       || *(_QWORD *)GUID_08c1ddb6_0cbd_4a9a_b5d3_2f852dc37e81.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        ? (v4 = (**v64)(v64, &GUID_08c1ddb6_0cbd_4a9a_b5d3_2f852dc37e81, &v65),
           ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v64)[2])(v64),
           v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v65)
        : (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v64,
                                                                v65 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Data::Json::IJsonObject **))v64),
          v4 < 0) )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2D1,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v4);
LABEL_108:
      v58 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v65;
      if ( v65 )
      {
        v65 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v58)[2])(v58);
      }
      goto LABEL_110;
    }
    v68 = 0LL;
    v11 = (**v10)(v10, &GUID_d44662bc_dce3_59a8_9272_4b210f33908b, &v68);
    v4 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2D4,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v11);
LABEL_105:
      v57 = v68;
      if ( v68 )
      {
        v68 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      goto LABEL_108;
    }
    v12 = 0;
    v13 = 0;
    v14 = v69;
    if ( (int)((__int64)(*((_QWORD *)&v69 + 1) - v69) >> 4) > 0 )
    {
      v15 = 0LL;
      do
      {
        if ( v12 >= 30 )
          break;
        if ( *(int *)(*(_QWORD *)(v14 + v15) + 32LL) >= 3 )
        {
          v62 = 0LL;
          string = 0LL;
          v16 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
          if ( v16 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
            break;
          }
          v17 = string;
          v18 = v62;
          if ( v62 )
          {
            v62 = 0LL;
            (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v18 + 16LL))(v18);
          }
          v62 = 0LL;
          v4 = RoActivateInstance(v17, &v66);
          if ( v4 < 0 )
            goto LABEL_82;
          if ( *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
            && *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
          {
            v62 = v66;
          }
          else
          {
            v4 = (**(__int64 (__fastcall ***)(struct Windows::Data::Json::IJsonObject *, GUID *, struct Windows::Data::Json::IJsonObject **))v66)(
                   v66,
                   &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3,
                   &v62);
            (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v66 + 16LL))(v66);
          }
          if ( v4 < 0 )
          {
LABEL_82:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x2E0,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v4);
LABEL_83:
            v51 = v62;
            if ( !v62 )
              goto LABEL_105;
            v62 = 0LL;
            goto LABEL_104;
          }
          v61 = 0LL;
          v19 = *(const WCHAR **)(v14 + v15);
          if ( *((_QWORD *)v19 + 3) >= 8uLL )
            v19 = *(const WCHAR **)v19;
          v71[0] = v19;
          v20 = v63;
          v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, v71);
          v22 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          v23 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v20 + 80LL))(v20, *(_QWORD *)(v21 + 24), &v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 739LL;
            goto LABEL_79;
          }
          v24 = v62;
          v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)off_1802149C0);
          v23 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)v24 + 56LL))(
                  v24,
                  *(_QWORD *)(v25 + 24),
                  v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 740LL;
            goto LABEL_79;
          }
          v26 = v63;
          v27 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v23 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v26 + 72LL))(v26, *v26, &v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 742LL;
            goto LABEL_79;
          }
          v28 = v62;
          v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)off_1802149D8);
          v23 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)v28 + 56LL))(
                  v28,
                  *(_QWORD *)(v29 + 24),
                  v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 743LL;
            goto LABEL_79;
          }
          v30 = v63;
          v31 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          v23 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v30 + 72LL))(v30, *v30, &v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 745LL;
            goto LABEL_79;
          }
          v32 = v62;
          v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)off_1802149D0);
          v23 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)v32 + 56LL))(
                  v32,
                  *(_QWORD *)(v33 + 24),
                  v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 746LL;
            goto LABEL_79;
          }
          v34 = v63;
          v35 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          }
          v23 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v34 + 72LL))(v34, *v34, &v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 748LL;
            goto LABEL_79;
          }
          v36 = v62;
          v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)off_1802149B8);
          v23 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)v36 + 56LL))(
                  v36,
                  *(_QWORD *)(v37 + 24),
                  v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 749LL;
            goto LABEL_79;
          }
          v38 = v63;
          v39 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          }
          v40 = *(_QWORD *)(v14 + v15);
          LOBYTE(v40) = *(_BYTE *)(v40 + 44);
          v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v38 + 64LL))(v38, v40, &v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 751LL;
LABEL_79:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v49,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v23);
            goto LABEL_80;
          }
          v41 = v62;
          v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)off_1802149B0);
          v23 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))(*(_QWORD *)v41 + 56LL))(
                  v41,
                  *(_QWORD *)(v42 + 24),
                  v61);
          v4 = v23;
          if ( v23 < 0 )
          {
            v49 = 752LL;
            goto LABEL_79;
          }
          v64 = 0LL;
          v43 = (**(__int64 (__fastcall ***)(struct Windows::Data::Json::IJsonObject *, GUID *, _QWORD *))v62)(
                  v62,
                  &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e,
                  &v64);
          v4 = v43;
          if ( v43 < 0 )
          {
            v47 = 755LL;
            goto LABEL_67;
          }
          v43 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*(_QWORD *)v68 + 104LL))(
                  v68,
                  v64);
          v4 = v43;
          if ( v43 < 0 )
          {
            v47 = 756LL;
LABEL_67:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v47,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v43);
            v48 = v64;
            if ( v64 )
            {
              v64 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v48)[2])(v48);
            }
LABEL_80:
            v50 = v61;
            if ( v61 )
            {
              v61 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
            }
            goto LABEL_83;
          }
          ++v12;
          v44 = v64;
          if ( v64 )
          {
            v64 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v44)[2])(v44);
          }
          v45 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          }
          v46 = v62;
          if ( v62 )
          {
            v62 = 0LL;
            (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v46 + 16LL))(v46);
          }
          v14 = v69;
        }
        ++v13;
        v15 += 16LL;
      }
      while ( v13 < (int)((*((_QWORD *)&v69 + 1) - v14) >> 4) );
    }
    v67 = 0LL;
    v52 = (**v65)(v65, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v67);
    v4 = v52;
    if ( v52 >= 0 )
    {
      string = 0LL;
      v54 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
      if ( v54 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v54);
      *a2 = 0LL;
      v4 = RoActivateInstance(string, &v66);
      if ( v4 >= 0 )
      {
        if ( *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
          && *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
        {
          *a2 = v66;
        }
        else
        {
          v4 = (**(__int64 (__fastcall ***)(struct Windows::Data::Json::IJsonObject *, GUID *, struct Windows::Data::Json::IJsonObject **))v66)(
                 v66,
                 &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3,
                 a2);
          (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v66 + 16LL))(v66);
        }
      }
      if ( v4 < 0 )
      {
        v55 = (unsigned int)v4;
        v53 = 764LL;
LABEL_100:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v53,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)v55);
        goto LABEL_102;
      }
      v56 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&hstringHeader,
              (const WCHAR **)off_1802149C8);
      v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)*a2 + 56LL))(
              *a2,
              *(_QWORD *)(v56 + 24),
              v67);
      v4 = v52;
      if ( v52 >= 0 )
      {
        v4 = 0;
LABEL_102:
        v51 = v67;
        if ( v67 )
        {
          v67 = 0LL;
LABEL_104:
          (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v51 + 16LL))(v51);
        }
        goto LABEL_105;
      }
      v53 = 765LL;
    }
    else
    {
      v53 = 762LL;
    }
    v55 = (unsigned int)v52;
    goto LABEL_100;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2CE,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_110:
  v59 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
  }
LABEL_112:
  std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(&v69);
  return (unsigned int)v4;
}
