/*
 * XREFs of ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180035EA0
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x180036970 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetApplicationDefaultEndpoint(__int64 a1, unsigned int a2, int a3, int a4, char **a5)
{
  __int64 v6; // rsi
  CPolicyConfig *v8; // r13
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *); // rax
  __int64 *v10; // rax
  char *v11; // rbx
  int v12; // r8d
  int v13; // r14d
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  int v20; // ecx
  ATL::CAtlException *v21; // rbx
  ATL::CAtlException *v22; // rbx
  __int64 v23; // rdx
  char *v24; // rdx
  char *v25; // rcx
  __int64 *v26; // rsi
  __int64 i; // rdx
  ATL::CAtlException *v28; // rdx
  _QWORD *v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rsi
  char *v32; // rax
  char *v33; // [rsp+20h] [rbp-F8h] BYREF
  int v34; // [rsp+28h] [rbp-F0h]
  int v35; // [rsp+2Ch] [rbp-ECh]
  int v36; // [rsp+30h] [rbp-E8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-E0h]
  char v38; // [rsp+40h] [rbp-D8h]
  unsigned int v39; // [rsp+48h] [rbp-D0h]
  unsigned int v40; // [rsp+50h] [rbp-C8h]
  int v41; // [rsp+54h] [rbp-C4h]
  int v42; // [rsp+58h] [rbp-C0h]
  unsigned int v43; // [rsp+5Ch] [rbp-BCh]
  unsigned int v44; // [rsp+60h] [rbp-B8h]
  int v45; // [rsp+64h] [rbp-B4h]
  int v46; // [rsp+68h] [rbp-B0h]
  unsigned int v47; // [rsp+6Ch] [rbp-ACh]
  __int64 v48; // [rsp+70h] [rbp-A8h]
  __int64 v49; // [rsp+78h] [rbp-A0h]
  __int64 *v50; // [rsp+80h] [rbp-98h]
  __int64 v51; // [rsp+88h] [rbp-90h]
  __int64 *v52; // [rsp+90h] [rbp-88h]
  __int64 v53; // [rsp+98h] [rbp-80h]
  __int64 v54; // [rsp+A0h] [rbp-78h]
  __int64 v55; // [rsp+A8h] [rbp-70h]
  __int64 v56; // [rsp+B0h] [rbp-68h]
  __int64 v57; // [rsp+B8h] [rbp-60h]
  char *v58; // [rsp+C0h] [rbp-58h]
  char *v59; // [rsp+C8h] [rbp-50h]
  ATL::CAtlException *v60[5]; // [rsp+D0h] [rbp-48h] BYREF
  ATL::CAtlException *v61; // [rsp+F8h] [rbp-20h] BYREF

  v55 = -2LL;
  v6 = a3;
  v8 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)g_PolicyConfig + 3);
  v38 = 1;
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_18018AA50);
    v10 = &qword_18018AA40;
  }
  else
  {
    v10 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v11 = (char *)(v10 + 3);
  v33 = (char *)(v10 + 3);
  if ( (unsigned int)v6 > 6 )
    goto LABEL_64;
  if ( !a4 )
  {
    v12 = 0;
    v36 = 0;
    v13 = 0;
    try
    {
      v14 = (__int64)v8 + 72 * v6 + 160;
      v60[1] = (ATL::CAtlException *)v14;
      v44 = a2;
      if ( *(_DWORD *)(v14 + 16) == 17 )
        v15 = a2 % 0x11;
      else
        v15 = a2 % *(_DWORD *)(v14 + 16);
      v45 = v15;
      if ( *(_QWORD *)v14 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)v14 + 8 * v15); ; i = *(_QWORD *)(i + 16) )
        {
          v54 = i;
          if ( !i )
            break;
          v46 = *(_DWORD *)(i + 24);
          if ( v46 == a2 && *(_DWORD *)i == a2 )
          {
            v60[2] = (ATL::CAtlException *)(i + 8);
            v28 = *(ATL::CAtlException **)(i + 8);
            v29 = (_QWORD *)((char *)v28 - 24);
            v60[3] = (ATL::CAtlException *)((char *)v28 - 24);
            v30 = v10;
            v52 = v10;
            if ( (__int64 *)((char *)v28 - 24) != v10 )
            {
              if ( *((int *)v10 + 4) >= 0 && *v29 == *v10 )
              {
                v53 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v29);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v30 + 4, 0xFFFFFFFF) <= 1 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v52 + 8LL))(*v52);
                v11 = (char *)(v53 + 24);
                v33 = (char *)(v53 + 24);
              }
              else
              {
                v47 = *((_DWORD *)v28 - 4);
                v60[4] = v28;
                ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v33, (char *)v28, v47);
                v11 = v33;
              }
            }
            v12 = 1;
            break;
          }
        }
      }
      v36 = v12;
    }
    catch ( ATL::CAtlException *v61 )
    {
      v21 = v61;
      if ( *(_DWORD *)v61 == -1073741571 )
        _o__resetstkoflw();
      v34 = *(_DWORD *)v21;
      v13 = v34;
      v11 = v33;
      v12 = v36;
    }
    if ( v13 >= 0 )
    {
      if ( !v12 )
      {
        v13 = -2147023728;
        goto LABEL_13;
      }
LABEL_60:
      v31 = *((_DWORD *)v11 - 4) + 1;
      v32 = (char *)CoTaskMemAlloc(2 * v31);
      *a5 = v32;
      StringCchCopyW(v32, v31, v11);
      goto LABEL_61;
    }
    goto LABEL_61;
  }
  if ( a4 != 1 )
  {
LABEL_64:
    v13 = -2147024809;
LABEL_65:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetApplicationDefaultEndpoint", 0x1154u, v13);
    goto LABEL_13;
  }
  v35 = 0;
  v13 = 0;
  try
  {
    v17 = (__int64)v8 + 72 * v6 + 664;
    v56 = v17;
    v39 = a2;
    v40 = a2;
    if ( *(_DWORD *)(v17 + 16) == 17 )
      v18 = a2 % 0x11;
    else
      v18 = a2 % *(_DWORD *)(v17 + 16);
    v41 = v18;
    if ( !*(_QWORD *)v17 )
      goto LABEL_23;
    v23 = *(_QWORD *)(*(_QWORD *)v17 + 8 * v18);
    v48 = v23;
    while ( v23 )
    {
      v42 = *(_DWORD *)(v23 + 24);
      if ( v42 == a2 && *(_DWORD *)v23 == a2 )
      {
        v49 = v23;
        goto LABEL_38;
      }
      v23 = *(_QWORD *)(v23 + 16);
      v48 = v23;
    }
    v23 = 0LL;
    v49 = 0LL;
LABEL_38:
    if ( v23 )
    {
      v57 = v23 + 8;
      v24 = *(char **)(v23 + 8);
      v25 = v24 - 24;
      v58 = v24 - 24;
      v26 = v10;
      v50 = v10;
      if ( v24 - 24 != (char *)v10 )
      {
        if ( *((int *)v10 + 4) >= 0 && *(_QWORD *)v25 == *v10 )
        {
          v51 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v25);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)*v50 + 8LL))(*v50);
          v11 = (char *)(v51 + 24);
          v33 = (char *)(v51 + 24);
        }
        else
        {
          v43 = *((_DWORD *)v24 - 4);
          v59 = v24;
          ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)&v33, v24, v43);
          v11 = v33;
        }
      }
      v19 = 1;
    }
    else
    {
LABEL_23:
      v19 = 0;
    }
    v20 = v19;
    v35 = v19;
  }
  catch ( ATL::CAtlException *v60 )
  {
    v22 = v60[0];
    if ( *(_DWORD *)v60[0] == -1073741571 )
      _o__resetstkoflw();
    v34 = *(_DWORD *)v22;
    v13 = v34;
    v11 = v33;
    v20 = v35;
  }
  if ( v13 >= 0 )
  {
    if ( !v20 )
    {
      v13 = -2147023728;
      goto LABEL_13;
    }
    goto LABEL_60;
  }
LABEL_61:
  if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147023728 )
    goto LABEL_65;
LABEL_13:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v11 - 3) + 8LL))(*((_QWORD *)v11 - 3));
  if ( v38 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v38 = 0;
  }
  return (unsigned int)v13;
}
